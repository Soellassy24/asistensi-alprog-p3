#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, sample, jumlahBola, bolaMerah=1, totalDapatMerah=0;
    float probab;

    printf("Masukkan jumlah sample : ");
    scanf("%d", &sample);
    printf("Masukkan jumlah bola : ");
    scanf("%d", &jumlahBola);
    for (int i = 0; i < sample; i++)
    {
        x=rand()%jumlahBola+1;
        if(x<=bolaMerah){
            totalDapatMerah++;
            //printf("Dapat Merah\n");
            //biar ketauan berapa sih yang ketemu merah
        }
    }
    probab=(float)totalDapatMerah/sample*100;
    //interger dibagi interger, tapi hasilnya harus float. Dikonversi dulu jadi pake(float)
    printf("Probabilitas terambilnya bola merah dari kantong berisi %d bola adalah : %.2f persen", jumlahBola, probab);
    return 0;
}
