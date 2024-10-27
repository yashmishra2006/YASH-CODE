/***************
File name: aux001.h
Creation Date: 17-09-2024
Modification Date:
Author: Pravin Chandra

This is the header file where we shall declare the constants and function
prototypes that we would like to make available in all programs that we
write.
***************/

#ifndef AUX001_H
#define AUX001_H

// osType returns a constant string with information about the OS type
const char* osType();

// currWallTime returns the number of seconds elapsed since the beginning of the Epoch
double currWallTime();

// currCpuTime returns the number of seconds and microseconds since the beginning of the Epoch
double currCpuTime();

// returns the difference in time (in seconds.microseconds)
double dblTimeDiff(double endTime, double startTime);

// Sieve of Eratosthenes: finds and returns a character array of the maximum size required 
// to store the information about the number being present at the index being prime.
char* sieveEratosthenes(char* A, unsigned long N);

#endif // AUX001_H
