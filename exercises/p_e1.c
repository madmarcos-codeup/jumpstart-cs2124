#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_e1_util.h"

/*
1. define a struct called person with id and ssn in .h 
2. declare a person var and print it
3. declare a 2nd person var using initializer
4. print it
*/

void printPerson(Person * person) {
    printf("Id: %d\nSSN: %s\n", person->id, person->ssn);
    // person->id = 9999;
}

int main(void) {
    Person bob = {42, "111-22-3333"};
    // bob.id = 42;
    // strcpy(bob.ssn, "111-22-3333");

    printPerson(&bob);
    
    Person sue = bob;
    sue.id = 99;
    printPerson(&sue);

    printf("Size of bob: %d\n", sizeof(bob));
    printf("Size of sue: %d\n", sizeof(sue));

    return EXIT_SUCCESS;
}