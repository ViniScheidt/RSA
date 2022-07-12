
#include <string.h>
#include <string>
using namespace std;
#ifndef AlgoritimoRSA_h   
#define AlgoritimoRSA_h  


void AlgoritimoRSA(string input, int e, unsigned long int d, long long int n);
void encrypt(string input, int e, long long int n);
void decrypt(unsigned long int d, long long int n);
void decrypt_message(string input, unsigned long int d, long long int n);

#endif 