#include <stdio.h>
#include <string.h>

struct Talaba{

    char ism[30];
    int yosh;
    int ball;
};

int main(){

    struct Talaba t;

    strcpy(t.ism, "Ali");
    t.yosh = 18;
    t.ball = 90;

    printf("Ism: %s\n", t.ism);
    printf("Yosh: %d\n", t.yosh);
    printf("Ball: %d\n", t.ball);
}
