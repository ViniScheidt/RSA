#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Exec.h"
#include <math.h>


using namespace std;


int isPrime(int n)
{
    if (n <= 1) return 0;
    else if (n <= 3) return 1;

    else if (n % 2 == 0 || n % 3 == 0) return 0;

    int i = 5;
    while (i * i <= n)
    {
        if (n % i == 0 || n % (i + 2) == 0) return 0;

        i += 6;
    }
    return 1;
}


void LongGenerator(long *p, long *q)
{
    int nmb = 0, times = 0;
    srand(time(NULL));
    while (true) {
        nmb = rand() % 9999 + 1000;

        if (nmb % 2 != 0) {
            if (isPrime(nmb)) {
                if (times++ == 0) *p = nmb;
                else {
                    (*q = nmb);
                    return;
                }
            }
        }
    }
}