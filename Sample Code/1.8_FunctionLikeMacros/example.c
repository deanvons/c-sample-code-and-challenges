#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 100
#define CALC_ARRAY_LEN(x) (sizeof((x)) / sizeof((x)[0]))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    printf("\n=== Function Like Macros ===\n\n");

    double array[ARRAY_LEN];

    printf("Array length: %d\n", ARRAY_LEN);

#undef ARRAY_LEN
#define ARRAY_LEN 999

    printf("New array len: %d\n", ARRAY_LEN);

    printf("Source file: \"%s\", %d\n", __FILE__, __LINE__);
    printf("Compilation time: %s\n", __TIME__);

    int array_len = CALC_ARRAY_LEN(array); // ℹ️ this is important, because arrays are actually stored as pointers, if you try passing an array into a function and try calculate its length you can't, this also is the reason why we need to pass the size of the array into funcitons which use an array. Look into why it works in main but not when passed into a function
    printf("Calculated array len: %d\n", array_len); // check the lesson on arrays to confirm the above

    int a = -1, b = 5;
    printf("MAX(%d, %d): %d\n", a, b, MAX(a, b));
    int b_before = b;
    printf("MAX(%d, %d): %d\n", a, b_before, MAX(a, b++)); // the macro functions don't work with expressions, the literal statment is passed in and replaced
    // best practice with macro functions with params -> #define MAX(a, b) ((a) > (b) ? (a) : (b)) each param is enclosed in braces, not explained why though
    printf("b before increment: %d\n", b_before);
    printf("b after increment: %d\n", b);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
