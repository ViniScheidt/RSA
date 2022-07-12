#include <iostream>
#include <string.h>
#include "AlgoritimoRSA.h"
#include "GeradorChaves.h"
#include "Exec.h"
#include <string>
#include <stdio.h>
using namespace std;

int main() 
{
    string m1;
    int opcao;
   do{
       printf("\n=====Menu=====\n\n(1) Gerar chaves\n(2) Criptografar uma mensagem\n(3) Descriptografar a mensagem\n(4) Criptografar e Descriptografar\n(5) Sair\n\n");
        cout << "Opção => ";
        scanf("%i",&opcao);
       switch (opcao) {
           case 1:
           {
                long p1, p2;
                printf("\n(1)Inserir numeros primos\n(2)Gerar a chave automaticamente\n\n");
                cout << "Opção => ";
                cin >> opcao;
                if(opcao == 1) {
                    printf("Insira os primos a seguir: ");
                    cout << "\n  Insira o primo 1: ";
                    cin >> p1;
                    cout << "  Insira o primo 2: ";
                    cin >> p2;
                    generate_keys(p1, p2);

                }
                else if(opcao == 2) {
            
                    LongGenerator(&p1, &p2);
                    generate_keys(p1, p2);
                }
           }
            break; 

            case 2:
            {
                int e1;
                long long int n1;
                cout << "Insira a mensagem desejada: ";
                cin.ignore();
                getline(cin, m1);
                cout << "\nInsira Chave pública: \n  n: ";
                cin >> n1;
                cin.ignore();
                cout << "  e: ";
                cin >> e1;
                encrypt(m1, e1, n1);
            }
                break;
            case 3:
            {
                unsigned long int d1;
                long long int n2;
                string m2;
                cout << "Insira a mensagem criptografada: ";
                cin.ignore();
                getline(cin, m2);
                cout << "\nInsira Chave Privada: \n  d: ";
                cin >> d1;
                cin.ignore();
                cout << "  n: ";
                cin >> n2;
                decrypt_message(m2, d1, n2);
            }
                break;
            case 4:
            {

                string m2;
                cout << "Insira a mensagem: ";
                cin.ignore();
                getline(cin, m2);
                AlgoritimoRSA(m2, e, d, n);
            }
                break;
       }
    } while(opcao != 5);
   return 0;
}
