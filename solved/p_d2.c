#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 256

char * getFullName(char * firstName, char * middleName, char * lastName) {
    // assume first and last name must not be blank
    // but middle name can be blank
    int totalLen = strlen(firstName);
    if(strlen(middleName) > 0) {
        totalLen += (1 + strlen(middleName));
    }
    totalLen += (1 + strlen(lastName));
    // add 1 for the null char
    totalLen++;

    char * myName = malloc(totalLen);
    if(myName == NULL)
        return NULL;
    // WARNING: malloc DOES NOT INITIALIZE!!!
    // so do that yourself
    myName[0] = 0;

    strcat(myName, firstName);
    if(strlen(middleName) > 0) {
        strcat(myName, " ");
        strcat(myName, middleName);
    }
    strcat(myName, " ");
    strcat(myName, lastName);

    return myName;
}

char * removeSpaces(char * myName) {
    // be sure to have enough for the null char
    // a little extra is just fine
    char * myName2 = malloc(strlen(myName) + 1);
    if(myName2 == NULL)
        return NULL;
    
    int i = 0, j = 0;
    do {
        if(myName[i] != ' ')
            myName2[j++] = myName[i];
    } while(myName[i++] != '\0');
    return myName2;
}

int main(void) {
    // 1 
    char * myName = getFullName("Bob", "", "Smith");
    printf("%s %p\n", myName, myName);
    free(myName);
    
    myName = getFullName("Bob", "Bobby", "Smith");
    printf("%s %p\n", myName, myName);

    // 2
    char * myName2 = removeSpaces(myName);
    printf("%s %p\n", myName2, myName2);

    free(myName2);
    free(myName);

    return EXIT_SUCCESS;
}