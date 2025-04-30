#include <stdio.h>

int main() {
    int a; 
    int b[3 * a];
    scanf("%d", &a);

    for (int i = 0; i < 3 * a; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 3 * a - 1; i++) {
        for (int j = 0; j < 3 * a - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    printf("Median: %d\n", b[a]);
    return 0;
}
