import * as React from "react";
import { useState } from "react";
import { Page, StackLayout, Image, Label, Button } from '@nativescript/core';
import { User } from '../types';

const SAMPLE_PROFILES: User[] = [
    {
        id: '1',
        name: 'Sarah Johnson',
        age: 20,
        major: 'Computer Science',
        bio: 'Coffee addict ☕ | Code enthusiast 💻',
        imageUrl: '~/images/placeholder.jpg',
        college: 'Tech University'
    }
];

export function HomeScreen() {
    const [currentProfile, setCurrentProfile] = useState(0);

    const handleSwipe = (direction: 'left' | 'right') => {
        // TODO: Implement swipe logic
        setCurrentProfile((prev) => (prev + 1) % SAMPLE_PROFILES.length);
    };

    const profile = SAMPLE_PROFILES[currentProfile];

    return (
        <Page>
            <StackLayout padding={20}>
                <Image src={profile.imageUrl} height={300} stretch="aspectFill" />
                <Label text={`${profile.name}, ${profile.age}`} className="h2" />
                <Label text={profile.major} className="h3" />
                <Label text={profile.bio} textWrap={true} />
                
                <StackLayout orientation="horizontal" horizontalAlignment="center">
                    <Button text="✗" onTap={() => handleSwipe('left')} className="btn btn-outline" />
                    <Button text="♥" onTap={() => handleSwipe('right')} className="btn btn-primary" />
                </StackLayout>
            </StackLayout>
        </Page>
    );
}