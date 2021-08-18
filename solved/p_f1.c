#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "p_f_util.h"

int main(void) {
    // 1
    employee * bob = initEmployee(1, "Bob Smith", "Accountant", "111-22-3333", 10000, 1000);

    // 2
    printEmployee(bob);

    // 3
    freeEmployee(bob);

    return EXIT_SUCCESS;
}