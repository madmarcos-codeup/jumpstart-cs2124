#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_f_util.h"

int main(void) {
    // 1
    employee ** employees = initEmployees(MAX_EMPLOYEES);
    employees[0] = initEmployee(1, "Bob Smith", "Accountant", "111-22-3333", 10000, 1000);
    employees[1] = initEmployee(2, "Sue Jones", "Manager", "444-55-6666", 20000, 2000);

    // 4
    addEmployee(employees, initEmployee(3, "Ragnar Williams", "Viking", "xxx-xx-xxxx", 100, 0));
    
    // 2
    printEmployees(employees);

    // 3
    freeEmployees(employees);

    return EXIT_SUCCESS;
}