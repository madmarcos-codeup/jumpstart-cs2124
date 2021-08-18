#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_e2_util.h"

void printPerson(person * myPerson) {
    printf("person id %d, ssn %s\n", myPerson->id, myPerson->ssn);
}

person * initPerson(int id, char * ssn) {
    person * newPerson = malloc(sizeof(person));
    if(newPerson != NULL) {
        newPerson->id = id;
        strcpy(newPerson->ssn, ssn);
    }
    return newPerson;
}