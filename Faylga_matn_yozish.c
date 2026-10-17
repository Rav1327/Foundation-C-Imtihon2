#include <stdio.h>

int main() {
    
    FILE *fayl = fopen("matin.txt", "w");

    if (fayl == NULL) {
        printf("Bunday fayl yo'q!");
        return 1;
    }

    fprintf(fayl, "Salom, C dasturlash!");
    fclose(fayl);

    printf("Matn faylga yozildi");
}
