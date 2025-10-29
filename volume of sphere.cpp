#include<stdio.h>
#define PI 3.14
int main(){
    int r;
    double volume;
    scanf("%d",&r);
    volume=(4.0/3.0)*PI*r*r*r;
    printf("%.2f",volume);
    return 0;
}

