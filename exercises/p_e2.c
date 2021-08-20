#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_e1_util.h"

/*
1. define a person struct with id and ssn in .h
2. malloc a person var and assign id and ssn
3. make print function, prototype it in .h and print person var
4. make an init person function, prototype it in .h
5. use init person function to make a new person var
6. print 2nd person
*/

// specific to e2 so don't put this in the e1 module
Person * createPerson(int id, char * ssn) {
    Person * newPerson = malloc(1 * sizeof(Person));
    // TODO: check for null
    newPerson->id = id;
    strcpy(newPerson->ssn, ssn);
    return newPerson;
}

int main(void) {
    // Person * bob = malloc(1 * sizeof(Person));
    // bob->id = 42;
    // strcpy(bob->ssn, "111-22-3333");

    Person * bob = createPerson(42, "111-22-3333");

    printPerson(bob);

    Person * sue = createPerson(99, "444-55-6666");

    printPerson(sue);

    free(bob);
    free(sue);
    
    return EXIT_SUCCESS;
}