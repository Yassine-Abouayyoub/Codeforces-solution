#include <stdio.h>

#define INF 1000000

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int N;
    int balls[205];
    int dp[205][205];

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &balls[i]);
    }

    for(int i = 0; i < N; i++) {
        dp[i][i] = 1;
    }

    for(int len = 2; len <= N; len++) {
        for(int l = 0; l + len - 1 < N; l++) {
            int r = l + len - 1;

            dp[l][r] = 1 + dp[l + 1][r];

            for(int k = l + 1; k <= r; k++) {
                if(balls[l] == balls[k]) {
                    int middle = 0;
                    int right = 0;

                    if(l + 1 <= k - 1)
                        middle = dp[l + 1][k - 1];

                    if(k + 1 <= r)
                        right = dp[k + 1][r];

                    dp[l][r] = min(dp[l][r], middle + right);
                }
            }

            for(int k = l; k < r; k++) {
                dp[l][r] = min(dp[l][r], dp[l][k] + dp[k + 1][r]);
            }
        }
    }

    printf("%d", dp[0][N - 1]);

    return 0;
}