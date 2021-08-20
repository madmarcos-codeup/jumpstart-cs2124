#define SSN_LENGTH 12

struct Person {
    int id; // 4 bytes
    char ssn[SSN_LENGTH]; // 12 bytes
};

typedef struct Person Person;

void printPerson(Person * person);