#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. declare a char array and init to a string literal
2. declare a char pointer and init to a string literal
3. print out both variables as strings and their addresses
4. change an element in the char array and print the string
5. try to change an element in the pointer's chars
6. try to reassign the char array to a different string literal
7. reassign char pointer to a different string literal, and print
*/

int main(void) {
    // char aChar = 'a';
    char str1[] = "hello";
    char * str2 = "hello";

    printf("string 1 address %p string val %s\n", str1, str1);
    printf("string 2 ptr address %p, value of pointer %p string val %s\n", &str2, str2, str2);

    str1[0] = 'J';
    printf("string 1 address %p string val %s\n", str1, str1);

    // str2[0] = 'J';
    // printf("string 2 ptr address %p, value of pointer %p string val %s\n", &str2, str2, str2);

    str2 = "world";
    printf("string 2 ptr address %p, value of pointer %p string val %s\n", &str2, str2, str2);
    
    return EXIT_SUCCESS;
}