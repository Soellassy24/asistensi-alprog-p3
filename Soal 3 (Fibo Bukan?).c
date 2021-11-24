#include <stdio.h>
#include <stdbool.h>

int main(){
    int f1=0, f2=1, n, kantong;
    bool FibonBukan;
    printf("Masukkan batas angka : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        FibonBukan=false;
        while (f2<=i){
            if (f2==i){
                FibonBukan=true;
                kantong=f1+f2;
                f1=f2;
                f2=kantong;
            } 
        }
        if (FibonBukan || (i==0))/*output dari contohnya dari 1, ini jaga2 kalo dari 0)*/{ 
            printf("Fibonacci\n");
        }else{
            printf("%d\n", i);
        }
    }
    return 0;
}
