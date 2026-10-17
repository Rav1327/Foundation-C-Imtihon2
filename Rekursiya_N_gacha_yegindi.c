#include <stdio.h>

int rekursiya_yigindi(int son){
    if(son == 1){
        return 1;
    }
    return son + rekursiya_yigindi(son - 1);
}

int main(){
    int N;

    scanf("%d", &N);
    
    printf("Yig'indisi: %d\n", rekursiya_yigindi(N));
}
