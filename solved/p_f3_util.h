// p_f3
#define MAX_NAME_LENGTH 256

struct employee {
    int id;
    char * employeeName;
	char * title;
	char ssn[12];
	int salary;
	int withholding;
	struct employee * next;
};

typedef struct employee employee;

void freeEmployee(employee * emp);
void printEmployee(employee * emp);
employee * initEmployee(int id, char * empName, char * title, char * ssn, int salary, int wh);
employee ** initEmployees(int maxEmployees);
void printEmployees(employee ** employees);
void freeEmployees(employee ** employees);
void addEmployee(employee ** employees, employee * newEmployee);