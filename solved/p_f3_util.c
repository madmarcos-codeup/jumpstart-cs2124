#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_f3_util.h"

void freeEmployee(employee * emp) {
    free(emp->employeeName);
    free(emp);
}

void printEmployee(employee * emp) {
    printf("%s\n\tId: %d\n\tTitle: %s\n\tSSN: %s\n\tSalary: %d\n\tWithholding: %d\n", emp->employeeName, emp->id, emp->title, emp->ssn, emp->salary, emp->withholding);
}

employee * initEmployee(int id, char * empName, char * title, char * ssn, int salary, int wh) {
    employee * newEmployee = malloc(sizeof(employee));
    if(newEmployee ==  NULL)
        return newEmployee;
    
    newEmployee->id = id;
    newEmployee->salary = salary;
    newEmployee->withholding = wh;
    newEmployee->next = 0;
    
    // set title to point at the string literal
    newEmployee->title = title;
    strcpy(newEmployee->ssn, ssn);

    // alloc plenty of new space for empName
    newEmployee->employeeName = malloc(MAX_NAME_LENGTH);
    if(newEmployee->employeeName == NULL) {
        printf("ERROR allocating space for emp name!");
        return newEmployee;
    }
    // don't need to init the employee name since we are copying
    strcpy(newEmployee->employeeName, empName);
    return newEmployee;
}

void printEmployees(employee ** employees) {
    employee * currentEmployee = *employees;
    while(currentEmployee) {
        printEmployee(currentEmployee);
        currentEmployee = currentEmployee->next;
    }
}

void freeEmployees(employee ** employees) {
    employee * currentEmployee = *employees;
    while(currentEmployee) {
        employee * temp = currentEmployee->next;
        freeEmployee(currentEmployee);
        currentEmployee = temp;
    }
    free(employees);
}

void addEmployee(employee ** employees, employee * newEmployee) {
    newEmployee->next = *employees;
    *employees = newEmployee;
}
