#include <stdio.h>
#include <stdlib.h>

int main() {
    int T[5][5];
    int x;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &T[i][j]);
        }
        printf("\n");
    }


        for(int i = 0; i<5; i++){
            for(int j = 0; j < 5; j++) {
               if(T[i][j] == 1 ){
                x = abs(i - 2) + abs(j - 2);
               }
            }
        }

    printf("%d", x);

    return 0;
}