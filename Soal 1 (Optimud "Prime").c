#include <stdio.h>
#include <stdbool.h>

int main(){
    //Nomer 1
    int n;
    bool prima=true;
    bool habis2=false;
    bool habis3=false;
    printf("Masukkan Batas Angka : ");
    scanf("%d", &n);
    printf("Bukan prima\n");
    for (int i = 2; i <= n; i++){
        prima=true;
        habis2=false;
        habis3=false;
        for (int s = 2; s <= i-1; s++){
            if (i%s==0){prima=false;}
            if (i%2==0){habis2=true;}
            if (i%3==0){habis3=true;}    
        }
        if(prima){
            printf("%d\n", i);
        }else{
            if(habis2 && habis3){printf("Habis dibagi 2 dan 3\n");}
            if(habis2 && !habis3){printf("Habis dibagi 2\n");}
            if(!habis2 && habis3){printf("Habis dibagi 3\n");}
            if(!habis2 && !habis3){printf("Bukan prima\n");}
        }
    }
    return 0;
}
