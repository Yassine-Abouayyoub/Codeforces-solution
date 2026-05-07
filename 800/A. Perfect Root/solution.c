// Problem: A. Perfect Root
// Platform: Codeforces
// Language: C
// Topic: Math, Implementation
// Rating: 800

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int n[20];

    for (int i = 0; i < t; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < t; i++) {

        for (int j = 1; j <= n[i]; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}