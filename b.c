#include <stdio.h>

int main () {
    int N, X, Y, A=0, B=0, C=0;
    printf("enter N");
    scanf("%d", &N);
    printf("enter X and Y");
    scanf("%d%d", &X, &Y);
    int S[N];
    for (int i = 0; i < N; i++)
    {
        printf("enter S[%d]", i);
        scanf("%d", &S[i]);
        if (S[i]<=X)
        {
            A++;
        }else if (X<S[i] && S[i]<=Y)
        {
            B++;
        }else
        {
            C++;
        }
    }

    printf("%d %d %d", A,B,C);
    
}