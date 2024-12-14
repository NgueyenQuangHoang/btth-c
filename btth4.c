#include<stdio.h>

int main(){
    unsigned int N; scanf("%d",&N);
    int T = 0;
    for (int j = 1; ; j++)
        {
            for (int i = 2; i * i <= j; i++)
            {
                if ( j % i != 0)
                {
                    printf("%d ", j);
                    T++;
                }
            }    
            if( T > N) break;
        }
    
}
