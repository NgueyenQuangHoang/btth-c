#include<stdio.h>

int main(){
    float Time;
    printf("nhap gio cong(h): ");
    scanf("%f", &Time);
    float sal = Time * 25000;
        if(Time > 160){
            float bonus = sal * 0.1;
            printf("luong( + Thuong): %.3f", sal + bonus);
        }else printf("luong: %.3f", sal);
    return 0;
}