export interface User {
    id: string;
    name: string;
    age: number;
    major: string;
    bio: string;
    imageUrl: string;
    college: string;
}

export interface AuthState {
    isAuthenticated: boolean;
    user: User | null;
    token: string | null;
}