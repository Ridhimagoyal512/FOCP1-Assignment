#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int cost_green, cost_purple;
        scanf("%d %d", &cost_green, &cost_purple);

        int n;
        scanf("%d", &n);

        int solve1 = 0, solve2 = 0;

        for(int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            solve1 += a;  // kitne log problem 1 solve kar rahe
            solve2 += b;  // kitne log problem 2 solve kar rahe
        }

        // Option 1
        int cost1 = solve1 * cost_green + solve2 * cost_purple;

        // Option 2
        int cost2 = solve1 * cost_purple + solve2 * cost_green;

        if(cost1 < cost2)
            printf("%d\n", cost1);
        else
            printf("%d\n", cost2);
    }

    return 0;
}