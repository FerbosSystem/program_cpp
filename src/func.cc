#include "stdio.h"
#include "../include/func.hh"

void get_xy(double *x_ptr, double *y_ptr)
{
    printf("x_ptr..%p, y_ptr..%p\n", (void*)x_ptr, (void*)y_ptr);
    printf("&x_ptr..%p, &y_ptr..%p\n", (void*)&x_ptr, (void*)&y_ptr);

    *x_ptr = 1.0;
    *y_ptr = 2.0;
}

void get_xy_2(double x, double y)
{
    printf("x..%f, y..%f\n", x, y);
    printf("&x..%p, &y..%p\n", (void*)&x, (void*)&y);

    x = 3.0;
    y = 4.0;
}

void case_even(unsigned int *n)
{
    *n = *n / 2;
}

void case_odd(unsigned int *n)
{
    *n = *n * 3 + 1;
}
