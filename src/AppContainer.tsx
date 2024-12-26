import * as React from "react";
import { MainStack } from './navigation/MainStack';
import { Frame } from '@nativescript/core';

export function AppContainer() {
    return (
        <Frame defaultPage={MainStack} />
    );
}