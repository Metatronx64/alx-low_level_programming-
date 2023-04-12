#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *@n
  */
void print_binary(unsigned long int n) {
    int i;
    for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--) {
        if ((n >> i) & 1) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');
}

