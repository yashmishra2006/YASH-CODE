import * as React from "react";
import { useState } from "react";
import { StackNavigationProp } from '@react-navigation/native-stack';
import { Page, TextField, Button, FlexboxLayout } from '@nativescript/core';

interface LoginScreenProps {
    navigation: StackNavigationProp<any>;
}

export function LoginScreen({ navigation }: LoginScreenProps) {
    const [email, setEmail] = useState('');
    const [password, setPassword] = useState('');

    const handleLogin = () => {
        // TODO: Implement actual login logic
        if (email && password) {
            navigation.navigate('Home');
        }
    };

    return (
        <Page>
            <FlexboxLayout flexDirection="column" justifyContent="center" alignItems="center" padding={20}>
                <TextField
                    hint="College Email"
                    keyboardType="email"
                    autocorrect={false}
                    autocapitalizationType="none"
                    text={email}
                    onTextChange={(args) => setEmail(args.value)}
                    className="input input-rounded m-b-10"
                />
                
                <TextField
                    hint="Password"
                    secure={true}
                    text={password}
                    onTextChange={(args) => setPassword(args.value)}
                    className="input input-rounded m-b-10"
                />
                
                <Button
                    text="Login"
                    onTap={handleLogin}
                    className="btn btn-primary"
                />
            </FlexboxLayout>
        </Page>
    );
}