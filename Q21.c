#include <stdio.h>

int main() {
    int L, N;
    
    // Input minimum dimension L
    scanf("%d", &L);
    
    // Input number of photos
    scanf("%d", &N);

    while(N--) {
        int W, H;
        scanf("%d %d", &W, &H);

        if(W < L || H < L) {
            printf("UPLOAD ANOTHER\n");
        }
        else if(W == H) {
            printf("ACCEPTED\n");
        }
        else {
            printf("CROP IT\n");
        }
    }

    return 0;
}
