#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int nilai;
    scanf("%d", &nilai);
    if(nilai % 2==0){
        printf("Genap");
    } else{
        printf("Ganjil");
    }
    return 0;
    
}