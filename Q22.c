#include <stdio.h>

int main() {
    char word[21];
    scanf("%s", word);

    int z_count = 0, o_count = 0;
    int i = 0;

    // Count Z's
    while (word[i] == 'z') {
        z_count++;
        i++;
    }

    // Count O's
    while (word[i] == 'o') {
        o_count++;
        i++;
    }

    // Check condition: 2*x = y
    if (2 * z_count == o_count)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
