#include<stdio.h>

int main(){
    unsigned int T;
     float tienTe;
     float R;
    printf("1. USD to VND\n2. EUR to VND\n3. GBP to VND\n4. JPY to VND\n5. VND to USD\n6. VND to EUR\n7. VND to GBP\n8. VND to JPY\n");
    printf("nhap don vi tien te muon doi: ");
    scanf("%d", &T);
    if( T<1 || T >8){
        printf("khong hop le");
        return 0;
    }
        switch (T)
        {
        case 1://USD to VND
            printf(" nhap so tien can doi: ");
            scanf("%f", &tienTe);
                if (tienTe <0)
                {
                    printf("error");
                    return 0;
                }
             R = tienTe * 23500;
            printf("%f USD = %f VND", tienTe, R);
            break;

        case 2://EUR to VND
            printf(" nhap so tien can doi: ");
            scanf("%f", &tienTe);
                if (tienTe <0)
                {
                    printf("error");
                    return 0;
                }
             R = tienTe * 25000;
            printf("%f USD = %f VND", tienTe, R);
            break;

        case 3://GBP to VND
            printf(" nhap so tien can doi: ");
            scanf("%f", &tienTe);
                if (tienTe <0)
                {
                    printf("error");
                    return 0;
                }
             R = tienTe * 28000;
            printf("%f USD = %f VND", tienTe, R);
            break;
        case 4://JPY to VND
            printf(" nhap so tien can doi: ");
            scanf("%f", &tienTe);
                if (tienTe <0)
                {
                    printf("error");
                    return 0;
                }
             R = tienTe * 180;
            printf("%f USD = %f VND", tienTe, R);
            break;
        case 5://VND to USD
            printf(" nhap so tien can doi: ");
            scanf("%f", &tienTe);
                if (tienTe <0)
                {
                    printf("error");
                    return 0;
                }
             R = tienTe / 23500;
            printf("%f VND = %f USD", tienTe, R);
            break;
        case 6://VND to EUR
            printf(" nhap so tien can doi: ");
            scanf("%f", &tienTe);
                if (tienTe <0)
                {
                    printf("error");
                    return 0;
                }
             R = tienTe / 25000;
            printf("%f VND = %f EUR", tienTe, R);
            break;
        case 7://VND to GBP
            printf(" nhap so tien can doi: ");
            scanf("%f", &tienTe);
                if (tienTe <0)
                {
                    printf("error");
                    return 0;
                }
             R = tienTe / 28000;
            printf("%f VND = %f GBP", tienTe, R);
            break;
        case 8://VND to JPY
            printf(" nhap so tien can doi: ");
            scanf("%f", &tienTe);
                if (tienTe <0)
                {
                    printf("error");
                    return 0;
                }
             R = tienTe / 180;
            printf("%f VND = %f JYP", tienTe, R);
            break;
        }
return 0;
}