#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_e1_util.h"

void printPerson(Person * person) {
    printf("Id: %d\nSSN: %s\n", person->id, person->ssn);
    // person->id = 9999;
}