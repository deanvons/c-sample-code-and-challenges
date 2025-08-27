#include <stdio.h>
#include <stdlib.h>

/**
 * === Simple Swapper === 
 *
 * Build a program that exchanges two integer values
 * 
 * Goals:
 *  - Implement the swap operation inside a function
 *  - The swap function must exchange the value of two int variables declared in main
 * 
 * Tips:
 *  - Use pointers!
 *  - Think carefully about the const keyword 
 */

void swap(int *const p1, int *const p2)
{
    int temp;

    temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}

int main()
{
    
    return EXIT_SUCCESS;
}
