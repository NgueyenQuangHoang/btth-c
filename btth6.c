#include<stdio.h>

int main(){
    unsigned int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (N % i ==0)
        {
            printf("%d ", i);
        }
        
    }
    
}