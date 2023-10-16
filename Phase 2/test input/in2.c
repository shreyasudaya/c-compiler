#include <stdio.h>

int main() {
    int x = 3;

    while (x > 0) {
        printf("%d", x);
        x--;

        int y = 7;
        while (y > 0) {
            printf("%d", x * y);
            y--;
        }
    }
}
