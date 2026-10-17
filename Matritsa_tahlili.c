#include <stdio.h>

int engKattaniTop(int matritsa[3][3])
{
    int eng_katta = matritsa[0][0];
    int satr, ustun;

    for (satr = 0; satr < 3; satr++)
    {
        for (ustun = 0; ustun < 3; ustun++)
        {
            if (matritsa[satr][ustun] > eng_katta)
            {
                eng_katta = matritsa[satr][ustun];
            }
        }
    }

    return eng_katta;
}

int main()
{
    int matritsa[3][3];
    int satr, ustun;
    int yigindi;

    for (satr = 0; satr < 3; satr++)
    {
        for (ustun = 0; ustun < 3; ustun++)
        {
            scanf("%d", &matritsa[satr][ustun]);
        }
    }

    printf("Matritsa:\n");
    for (satr = 0; satr < 3; satr++)
    {
        for (ustun = 0; ustun < 3; ustun++)
        {
            if (ustun > 0)
            {
                printf(" ");
            }
            printf("%d", matritsa[satr][ustun]);
        }
        printf("\n");
    }

    printf("\nEng katta element: %d\n", engKattaniTop(matritsa));

    for (satr = 0; satr < 3; satr++)
    {
        yigindi = 0;
        for (ustun = 0; ustun < 3; ustun++)
        {
            yigindi = yigindi + matritsa[satr][ustun];
        }
        printf("%d-satr yig'indisi: %d\n", satr + 1, yigindi);
    }
}