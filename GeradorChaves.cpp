#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "GeradorChaves.h"
using namespace std;


long e;
unsigned long d;
long long int n;


int exec(long long int a, int b)
{
    return b == 0 ? a : exec(b, a % b);
}

int valueE(long long int value)
{
    srand(time(NULL));
    int rtrn, nmb;
    while(true) {
        nmb = rand() % value + 2;
        rtrn = exec(value, nmb);
    if (rtrn == 1) return nmb;
    }
    return 0;
}

unsigned long valueD(long long int totiente, long e){
    for(unsigned long index = 1;index < totiente;index++)
    { 
         if ((e * index) % totiente == 1) {
          return index; 
         }
    }
    return 0;
}

void generate_keys(long p, long q){
    n = p * q;

    long long int totiente = (p-1)*(q-1);
    e = valueE(totiente);
    d = valueD(totiente, e);
    printf("\nChave pública: \n  n: %lld \n  e: %ld \n\nChave Privada: \n  Primo 1: %ld \n  Primo 2: %ld \n  d: %ld \n\n",n,e,p,q,d);
}