#!/bin/bash
#include <stdio.h>

int main() {
    char letter = 'a';

    // Print lowercase alphabet
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }

    letter = 'A';

    // Print uppercase alphabet
    while (letter <= 'Z') {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return 0;
}

