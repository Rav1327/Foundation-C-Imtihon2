#include <stdio.h>

int main()
{
    int Sonlar[5];
    int yegindi = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &Sonlar[i]);

    }

    for (int c = 0; c < 5; c++)
    {
        yegindi += Sonlar[c];
    }

    printf("\nNatija: %d", yegindi);
}