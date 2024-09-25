#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"

err_t random_test(void *disp, int id, int *pvalor) {
    srand(time(NULL));
    err_t err = ERR_OK;
    *pvalor = rand();
    return err; 
}
