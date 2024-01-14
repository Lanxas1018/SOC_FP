#ifndef _QSORT_H
#define _QSORT_H

#include <stdint.h>
#include <stdbool.h>

#define SIZE 10
int Q[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

#define AP          (*(volatile uint32_t*)0x30000200)
#define X           (*(volatile uint32_t*)0x30000280)
#define Y           (*(volatile uint32_t*)0x30000284)

#endif

/*#define SIZE 10
int Q[SIZE] = {893, 40, 3233, 4267, 2669, 2541, 9073, 6023, 5681, 4622};
#endif*/