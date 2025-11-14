#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100001];

    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++) {
        if(isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
        else if(islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }

    printf("%s", s);
    return 0;
}
