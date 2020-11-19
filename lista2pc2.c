#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bom_dia();

int aleat();

int dobro(int);

void mostra_dobro(int);

void bom_dia(){
    printf("\n Bom dia\n");
}

int aleat(){
    srand(time(NULL));
    return rand() % 10;
}


int dobro(int dob){
    dob *= 2;
    return printf("%d", dob);

}

void mostra_dobro(int dobro){
    printf("\nesse eh o dobro: \n%d",dobro);
}

int main(){
    int x, num;
    bom_dia();
    printf("%d", aleat());
    x = aleat();
    dobro(x);
    if (dobro(x) > dobro(aleat())){
        mostra_dobro(x);
    }*/
    return 0;
}
