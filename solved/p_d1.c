#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 256

int main(void) {
    // 1 
    char s1[ARRAY_SIZE] = "howdy"; // this copies the char contents to the array s1

    char * s2 = "howdy"; // this points to the string literal 'howdy' in READ ONLY MEMORY

    printf("s1: value = %s, address = %p\n", s1, &s1);
    printf("s2: value = %s, value as a pointer = %p, address = %p\n", s2, s2, &s2);
    printf("'howdy': value = %s, value as a pointer = %p, address = %p\n", "howdy", "howdy", &"howdy");

    // because s1 is its own copy of "howdy", the below is ok
    s1[0] = 'H';
    printf("after change, s1: value = %s, address = %p\n", s1, &s1);

    // s2[0] = 'H'; // PROBLEM: this causes an error because string literals are READ ONLY

    // you can re-assign s2, but not s1. array vars cannot be reassigned
    // s1 = "world";
    
    s2 = "world";
    printf("after change, s2: value = %s, address = %p\n", s2, &s2);

    return EXIT_SUCCESS;
}