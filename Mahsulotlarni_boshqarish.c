#include <stdio.h>
#include <string.h>

struct Mahsulot
{
    char nomi[50];
    long narxi;
    int soni;
};

int main()
{
    struct Mahsulot mahsulotlar[5];
    char qidiruv[50];
    int i;
    int eng_qimmat = 0;
    int topildi = -1;
    FILE *fayl;

    for (i = 0; i < 5; i++)
    {
        scanf("%s %ld %d", mahsulotlar[i].nomi, &mahsulotlar[i].narxi, &mahsulotlar[i].soni);
    }
    scanf("%s", qidiruv);

    printf("Barcha mahsulotlar:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d. %s %ld %d\n", i + 1, mahsulotlar[i].nomi, mahsulotlar[i].narxi, mahsulotlar[i].soni);
    }
    printf("\n");

    for (i = 1; i < 5; i++)
    {
        if (mahsulotlar[i].narxi > mahsulotlar[eng_qimmat].narxi)
        {
            eng_qimmat = i;
        }
    }
    printf("Eng qimmat mahsulot: %s (%ld)\n\n", mahsulotlar[eng_qimmat].nomi, mahsulotlar[eng_qimmat].narxi);

    for (i = 0; i < 5; i++)
    {
        if (strcmp(mahsulotlar[i].nomi, qidiruv) == 0)
        {
            topildi = i;
            break;
        }
    }

    if (topildi != -1)
    {
        printf("Mahsulot topildi!\n");
        printf("Nomi: %s\n", mahsulotlar[topildi].nomi);
        printf("Narxi: %ld\n", mahsulotlar[topildi].narxi);
        printf("Soni: %d\n", mahsulotlar[topildi].soni);
    }
    else
    {
        printf("Mahsulot topilmadi!\n");
    }

    fayl = fopen("mahsulotlar.txt", "w");
    if (fayl == NULL)
    {
        printf("Faylni ochib bo'lmadi!\n");
        return 1;
    }
    for (i = 0; i < 5; i++)
    {
        fprintf(fayl, "%s %ld %d\n", mahsulotlar[i].nomi, mahsulotlar[i].narxi, mahsulotlar[i].soni);
    }
    fclose(fayl);

    printf("\nMa'lumotlar mahsulotlar.txt fayliga saqlandi.\n");
    return 0;
}