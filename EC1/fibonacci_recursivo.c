#include <stdio.h>
#include <stdlib.h>

int num_chamadas = 0;


int fib(int p){
    if (p<=1){
        return p;
    }
    else{
        int e =  fib(p-1)+fib(p-2);
        num_chamadas+=2;
        return e;
    }


}
int main()
{

    int fi;
    int n = 100;
    for(int i = 10; i<=n; i+=10){
        printf("\n************P = %d", i);
        fi = fib(i);
        printf("\nFibonacci eh: %d", fi);
        printf("\nNumero de chamadade recursivas (Fibonacci): %d\n", num_chamadas);

        num_chamadas = 0;
    }

    system("pause");
    return 0;
}




