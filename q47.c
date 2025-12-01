//Write a program to print the following pattern:
//*
//**
//***
//****
//*****
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {        // loop for rows
        for (int j = 1; j <= i; j++) {       // loop for stars in each row
            printf("*");
        }
        printf("\n");  // move to next row
    }

    return 0;
}

