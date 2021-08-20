#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_e1_util.h"

#define MAX_PEOPLE 10

Person * createPerson(int id, char * ssn) {
    Person * newPerson = malloc(1 * sizeof(Person));
    // TODO: check for null
    newPerson->id = id;
    strcpy(newPerson->ssn, ssn);
    return newPerson;
}

void printPeople(Person ** people, int numPeople) {
    for(int i = 0; i < numPeople; i++) {
        // don't print null people
        if(people[i] != NULL) {
            printPerson(people[i]);
        }
    }
}

void freeThePeople(Person ** people, int numPeople) {
    for(int i = 0; i < numPeople; i++) {
        // don't free null people
        if(people[i] != NULL) {
            free(people[i]);
        }
    }
    free(people);
}

int main(void) {
    // make an array of people pointers
    Person ** people = malloc(MAX_PEOPLE * sizeof(Person *));
    // init all person pointers to NULL
    for(int i = 0; i < MAX_PEOPLE; i++) {
        people[i] = NULL;
    }

    // create some people dynamically
    people[0] = createPerson(42, "111-22-3333");
    people[1] = createPerson(99, "444-55-6666");

    printPeople(people, MAX_PEOPLE);

    
    freeThePeople(people, MAX_PEOPLE);

    return EXIT_SUCCESS;
}