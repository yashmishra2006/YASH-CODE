#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_HP 200
#define DAMAGE 50

// Function to simulate the attack
int attack(int attacker, int defender, int attack_type) {
    int damage = 0;
    
    // Determine the damage based on attack type
    if (attacker == 1) { // Ball Thrower (Player 1)
        if (attack_type == 1) {
            // Stone Ball - Stronger
            damage = 60;
            printf("Player 1 throws a Stone Ball! Deals %d damage.\n", damage);
        } else {
            // Water Ball - Weaker
            damage = 40;
            printf("Player 1 throws a Water Ball! Deals %d damage.\n", damage);
        }
    } else { // Arrow Thrower (Player 2)
        if (attack_type == 1) {
            // Fire Arrow - Stronger
            damage = 60;
            printf("Player 2 shoots a Fire Arrow! Deals %d damage.\n", damage);
        } else {
            // Ice Arrow - Weaker
            damage = 40;
            printf("Player 2 shoots an Ice Arrow! Deals %d damage.\n", damage);
        }
    }

    // Apply damage to defender
    defender -= damage;
    if (defender < 0) defender = 0;
    
    return defender;
}

// Function to display the status and allow Player 1 to choose their attack
int player1_attack_choice() {
    int choice;
    printf("Player 1, choose your attack:\n");
    printf("1. Stone Ball (Strong)\n");
    printf("2. Water Ball (Weak)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);
    
    // Validate input
    while (choice != 1 && choice != 2) {
        printf("Invalid choice. Please enter 1 for Stone Ball or 2 for Water Ball: ");
        scanf("%d", &choice);
    }
    
    return choice;
}

// Function to display the status and allow Player 2 to choose their attack
int player2_attack_choice() {
    int choice;
    printf("Player 2, choose your attack:\n");
    printf("1. Fire Arrow (Strong)\n");
    printf("2. Ice Arrow (Weak)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);
    
    // Validate input
    while (choice != 1 && choice != 2) {
        printf("Invalid choice. Please enter 1 for Fire Arrow or 2 for Ice Arrow: ");
        scanf("%d", &choice);
    }
    
    return choice;
}

// Function to play the game
void play_game() {
    int player1_hp = MAX_HP;
    int player2_hp = MAX_HP;
    int turn = 1;  // Player 1 starts
    
    srand(time(NULL)); // Seed random number generator
    
    while (player1_hp > 0 && player2_hp > 0) {
        if (turn == 1) {  // Player 1's turn (Ball Thrower)
            printf("\nPlayer 1's turn (Ball Thrower):\n");
            int attack_type = player1_attack_choice();  // Player 1 chooses attack
            player2_hp = attack(1, player2_hp, attack_type);  // Attack Player 2
            printf("Player 2 HP: %d\n", player2_hp);
            turn = 2;  // Switch turn
        } else {  // Player 2's turn (Arrow Thrower)
            printf("\nPlayer 2's turn (Arrow Thrower):\n");
            int attack_type = player2_attack_choice();  // Player 2 chooses attack
            player1_hp = attack(2, player1_hp, attack_type);  // Attack Player 1
            printf("Player 1 HP: %d\n", player1_hp);
            turn = 1;  // Switch turn
        }
        
        // Display status
        printf("Player 1 HP: %d | Player 2 HP: %d\n", player1_hp, player2_hp);
    }

    // Declare winner
    if (player1_hp <= 0) {
        printf("\nPlayer 2 wins!\n");
    } else {
        printf("\nPlayer 1 wins!\n");
    }
}

int main() {
    printf("Welcome to the 2-Player Battle Game!\n");
    play_game();
    return 0;
}
