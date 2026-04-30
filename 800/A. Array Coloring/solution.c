// Problem: A. Array Coloring
// Platform: Codeforces
// Language: C
// Topic: Implementation, Sorting, Parity
// Rating: 800

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[105];
        int pos[105];

        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            pos[a[i]] = i;
        }

        int ok = 1;

        for (int x = 1; x < n; x++) {
            if (pos[x] % 2 == pos[x + 1] % 2) {
                ok = 0;
                break;
            }
        }

        if (ok)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}