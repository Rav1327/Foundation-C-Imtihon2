#include <stdio.h>

int main()
{
    int Sonlar[2][3];
    int Yegindi = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &Sonlar[i][c]);
        }
    }

    for (int a = 0; a < 2; a++)
    {
        for (int x = 0; x < 3; x++)
        {
            Yegindi += Sonlar[a][x];
        }
    }

    printf("Yegindi: %d", Yegindi);

}