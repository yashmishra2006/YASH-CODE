import psutil
import time

def monitor_network():
    """Monitor system network activities by application, including traffic stats."""
    traffic_stats = {}

    while True:
        # Get all active network connections
        connections = psutil.net_connections(kind='inet')

        print("\nActive Network Connections:")
        print("-" * 90)
        print(f"{'PID':<6} {'App Name':<20} {'Local Address':<25} {'Remote Address':<25} {'Status':<15} {'Bytes Sent':<10} {'Bytes Recv':<10}")
        print("-" * 90)

        for conn in connections:
            try:
                # Get the application name and PID
                pid = conn.pid if conn.pid is not None else "N/A"
                process = psutil.Process(pid) if isinstance(pid, int) else None
                app_name = process.name() if process else "Unknown"

                # Get local and remote addresses
                local_addr = f"{conn.laddr.ip}:{conn.laddr.port}" if conn.laddr else "N/A"
                remote_addr = f"{conn.raddr.ip}:{conn.raddr.port}" if conn.raddr else "N/A"

                # Retrieve traffic stats
                if pid not in traffic_stats:
                    traffic_stats[pid] = {"bytes_sent": 0, "bytes_recv": 0}

                # Update bytes sent and received for the process
                if process:
                    io_counters = process.io_counters() if process.is_running() else None
                    if io_counters:
                        bytes_sent = io_counters.bytes_sent
                        bytes_recv = io_counters.bytes_recv

                        # Calculate the change in traffic since the last check
                        traffic_stats[pid]["bytes_sent"] = bytes_sent
                        traffic_stats[pid]["bytes_recv"] = bytes_recv

                # Fetch current stats from the dictionary
                bytes_sent = traffic_stats[pid]["bytes_sent"]
                bytes_recv = traffic_stats[pid]["bytes_recv"]

                # Print the connection details, handling None values gracefully
                print(f"{str(pid):<6} {app_name:<20} {local_addr:<25} {remote_addr:<25} {conn.status:<15} {bytes_sent:<10} {bytes_recv:<10}")

            except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
                continue

        # Wait before refreshing the list
        time.sleep(5)

if __name__ == "__main__":
    print("Starting network monitor...")
    monitor_network()