#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numero;
    float saldo;
} conta;

conta iniciaConta(conta objConta, int num, float saldo){
    objConta.numero = num;
    objConta.saldo = saldo;
    return objConta;
}

conta depositarValor(conta objConta, float valor){
    objConta.saldo += valor;
    return objConta;
}

conta sacarValor(conta objConta, float valor){
    objConta.saldo -= valor;
    return objConta;
}

void imprimeObj(conta objConta){
    printf("\nNumero da Conta: %d",objConta.numero);
    printf("\nSaldo: %.2f",objConta.saldo);
}

int main()
{
    conta c1;

    c1 = iniciaConta(c1,1,1000);

    imprimeObj(c1);

    c1 = depositarValor(c1,500);

    imprimeObj(c1);

    c1 = sacarValor(c1,300);

    imprimeObj(c1);

    return 0;
}
