
struct person {
    int id;
    char ssn[12]; // include room for 2 hyphens and the null char
};

typedef struct person person;

// function protos
void printPerson(person * myPerson);
person * initPerson(int id, char * ssn);