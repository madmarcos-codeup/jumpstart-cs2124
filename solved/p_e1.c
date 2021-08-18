#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_e1_util.h"

int main(void) {
    // 1
    person bob;
    bob.id = 1;
    strcpy(bob.ssn, "111-22-3333");

    printf("bob id %d, ssn %s, size of struct %ld\n", bob.id, bob.ssn, sizeof(bob));

    // 2
    person sue = {2, "444-55-6666"};
    printf("sue id %d, ssn %s, size of struct %ld\n", sue.id, sue.ssn, sizeof(sue));

    return EXIT_SUCCESS;
}