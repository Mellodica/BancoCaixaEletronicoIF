// Banco.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>



int main()
{
    std::cout << "Hello World!\n";
    
    int resto = 0, saque = 0, total = 0, nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota1 = 0, valormax = 1300, valormin = 10;

    printf("Qual valor deseja sacar! \t");
    scanf_s("%d", &saque);

    total = saque;

    if (total < valormin || total > valormax) {
        printf("O valor está fora dos limites permitidos!");
    }
    else {
        /*if (total > 100) {
            nota100 = total / 100;
            resto = total % 100;
            total = resto;
        }*/
        if (total > 50) {
            nota50 = total / 50;
            resto = total % 50;
            total = resto;
        }
        /*if (total > 20) {
            nota20 = total / 20;
            resto = total % 20;
            total = resto;
        }*/
        if (total > 10) {
            nota10 = total / 10;
            resto = total / 10;
            total = resto;
        }
        if (total > 5) {
            nota5 = total / 5;
            resto = total % 5;
            total = resto;
        }
        if (total >= 1) {
            nota1 = total / 1;
            resto = total % 1;
            total = resto;
        }

    }

    if (total > 1) {
        printf("\n Valor pendente: R$ %d", total);
    }
    if (nota100 >= 1) {
        printf("\n Numero de notas de R$ 100: %d", nota100);
    }
    if (nota50 >= 1) {
        printf("\n Numero de notas de R$ 50: %d", nota50);
    }
    if (nota20 >= 1) {
        printf("\n Numero de notas de R$ 20: %d", nota20);
    }
    if (nota10 >= 1) {
        printf("\n Numero de notas de R$ 10: %d", nota10);
    }
    if (nota5 >= 1) {
        printf("\n Numero de notas de R$ 5: %d", nota5);
    }
    if (nota1 >= 1) {
        printf("\n Numero de notas de R$ 1: %d", nota1);
    }



    printf("\n\n\n");


    system("pause");

}

