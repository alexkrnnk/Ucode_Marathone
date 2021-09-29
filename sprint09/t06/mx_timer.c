#include <time.h>

double mx_timer(void (*f)());

double mx_timer(void (*f)()){
    clock_t tick;
   

    tick = clock();
    f();
    tick = clock() - tick;

    return (double)tick / CLOCKS_PER_SEC;
}


