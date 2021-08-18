#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_f_util.h"

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

// p_f2

employee ** initEmployees(int maxEmployees) {
    employee ** employees = malloc(maxEmployees * sizeof(employee *));
    if(employees != NULL) {
        // init all employee ptrs to null
        for(int i = 0; i < maxEmployees; i++) {
            employees[i] = NULL;
        }
    }
    return employees;
}

void printEmployees(employee ** employees) {
    for(int i = 0; i < MAX_EMPLOYEES; i++) {
        if(employees[i] != NULL)
            printEmployee(employees[i]);
    }
}

void freeEmployees(employee ** employees) {
    for(int i = 0; i < MAX_EMPLOYEES; i++) {
        if(employees[i] != NULL)
            free(employees[i]);
    }
    free(employees);
}

void addEmployee(employee ** employees, employee * newEmployee) {
    for(int i = 0; i < MAX_EMPLOYEES; i++) {
        if(employees[i] == NULL) {
            employees[i] = newEmployee;
            return;
        }
    }
    printf("ERROR: could not find a free spot for new employee %s", newEmployee->employeeName);
}
