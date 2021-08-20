#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. write getFullName that takes firstName, middleName, and lastName
    the function returns a malloc'd full name with spaces 
    separating the names
    assume first and last name are not empty
    but need to check for empty middle name. if so, only 1 space
2. write a removeSpaces function. takes a string parameter
    returns a new malloc'd string with spaces removed 
    from string parameter
*/

char * getFullName(char * firstName, char * lastName) {
    // malloc enough space for firstName + lastName + 1 space in the middle + 1 FOR NULL CHAR
    char * tempFullName = malloc(sizeof(char) * (strlen(firstName) + strlen(lastName) + 1 + 1));
    // TODO: check for null

    strcpy(tempFullName, firstName);
    strcat(tempFullName, " ");
    strcat(tempFullName, lastName);

    return tempFullName;
}

// TODO: is there a more efficient way to do this by removing spaces in aString in-place
char * removeSpaces(char * aString) {
    // TODO count the spaces for a leaner malloc
    
    // malloc for the new string
    char * newString = malloc(sizeof(char) * (strlen(aString) + 1)); // +1 for null char

    // iterate over aString. any char that is not a space, will be copied to newString
    int currentChar = 0;
    for(int i = 0; i < strlen(aString); i++) {
        if(aString[i] != ' ') {
            newString[currentChar] = aString[i];
            currentChar++;
        }
    }

    // add the null 
    newString[currentChar] = '\0';

    // free 
    free(aString);

    return newString;
}

int main(void) {
    // should return a malloc'd string "Bob Smith"
    char * fullName = getFullName("Bob", "Smith");

    printf("str val is %s\n", fullName);

    // should return BobSmith, but first free what fullName currently points to
    fullName = removeSpaces(fullName);

    printf("str val is %s\n", fullName);

    free(fullName);

    return EXIT_SUCCESS;
}