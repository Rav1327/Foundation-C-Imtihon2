#include <stdio.h>

int katta(int a, int b)
{
    if (a > b)
    {
        return a;
    }   
    else
    {
        return b;
    }
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    
    printf("Katta son: %d", katta(A, B));
}