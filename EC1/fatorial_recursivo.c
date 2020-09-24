#include <stdio.h>
#include <stdlib.h>

int num_chamadas = 0;

int fatorial(int p){
    if(p==0){
        return 1;
    }
    else{
        int x = p*fatorial(p-1);
        num_chamadas++;
        return x;
    }
}


int main()
{

    int fat;
    int n = 100;
    for(int i = 10; i<=n; i+=10){
        printf("\n************P = %d", i);
        fat = fatorial(i);
        printf("\nFatorial eh: %d", fat);
        printf("\nNumero de chamadade recursivas (Fatorial): %d\n", num_chamadas);


        num_chamadas = 0;


    }

    system("pause");
    return 0;
}




