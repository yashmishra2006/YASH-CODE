import * as React from "react";
import { LoginScreen } from '../screens/LoginScreen';
import { HomeScreen } from '../screens/HomeScreen';
import { Frame } from '@nativescript/core';

export function MainStack() {
    return (
        <Frame defaultPage={LoginScreen}>
            <LoginScreen />
            <HomeScreen />
        </Frame>
    );
}