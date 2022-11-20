#include <stdio.h>

//3. The pointer to a long int is still 32-bits wide in the same same system.


int main()
{
    //1. Declare a pointer to a short int and pointer to a float.
    short int var;
    short int *shortPtr;

    float fVar;
    float *floatPtr;

    long int L_int;
    long int *test;

    char test1;
    unsigned char *test2;

    //2. The sizeof() operator gives the size in bytes of its argument. It can be applied to any data type and I added an example below to know the size of the char data type.
    printf("Example of sizeof() returning char size in byte: %d", sizeof(test1));

    //3.In a given operating system, a pointer to a short int is 32 bits wide. How wide is a pointer to a long int in this same system?
    // a pointer to a short int is 32 bits wide and a pointer to long int is still 32 bits wide in the same system.

    printf("\nsizeof long int pointer is %d bytes", sizeof(*test));

    //4. Assume p is a pointer to a float. Further, assume, the value of p is 1000.
    float p = 17.6;
    float *P;
    P = &p;
    printf("\nsizeof float is %d bytes", sizeof(p));


    // What value is p++?
    // p is a pointer to a float with the value 1000 and incrementing p will result to 1000+4bytes = 1004 since floats is 4 bytes in size and its value starts with 1000.
    //
    // Define in words what *p and &p mean.
    // *p means that you declare a pointer and you can access the value of the variable that it points to.
    // &p gives the address of the pointer p.


/*5. Given the initializations and memory map at the top, fill out the memory map on the
     bottom after the code has executed. Assume pointers are 32 bits wide.

        long int x=100;
        long int *y;
        long int **z;

/*
    top -------------------     code
        |                  |
        |                  |
        |                  |    y=&x; address of x = 8000
        |                  |    z=&y; address of y = 5000
        |                  |    x++;  the value of x which is 100 incremented by 1 = 101
        |                  |    *y=*y++; since y = &x and the address of x is 8000, *y++ = 8000 + 4bytes = 8004 since we also assumed pointers are 32 bits wide.
        |                  |    *z=*z++; since z = &y and the address of y is 5000, *z++ = 5000 + 4bytes = 5004 since we also assumed pointers are 32 bits wide.
        -------------------     z++; The value of Z is 5004 and incremented again by 1 so the new value is 5008, since z is also declared as a pointer to a pointer, it's value is incremented by 4 bytes.
8000    |       101        | x
        -------------------
        |                  |
        --------------------
5000    |       8004       | y
        --------------------
        |                  |
        --------------------
2000    |       5008       | z
        --------------------
        |                  |
        -------------------- */


    return 0;
}

