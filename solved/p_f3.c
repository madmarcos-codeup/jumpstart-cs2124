#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_f_util.h"

int main(void) {
    // 1
    // allocate space for the double pointer
    employee ** employees = malloc(sizeof(employee *));
    // and initialize it to point to nothing
    *employees = NULL;
    
    addEmployee(employees, initEmployee(1, "Bob Smith", "Accountant", "111-22-3333", 10000, 1000));
    addEmployee(employees, initEmployee(2, "Sue Jones", "Manager", "444-55-6666", 20000, 2000));
    
    // 2
    printEmployees(employees);

    // 3
    freeEmployees(employees);

    return EXIT_SUCCESS;
}