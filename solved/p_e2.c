#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_e2_util.h"

int main(void) {
    // 1
    person * bob = malloc(sizeof(person));
    bob->id = 1;
    strcpy(bob->ssn, "111-22-3333");

    printPerson(bob);

    // 2
    person * sue = initPerson(2, "444-55-6666");
    printPerson(sue);

    free(bob);
    free(sue);

    return EXIT_SUCCESS;
}