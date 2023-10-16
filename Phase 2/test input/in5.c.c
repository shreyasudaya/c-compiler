#include <stdio.h>
#define y 5

int main() {
    int b = 7;

    if (b > 5) {
        b += 2;
        printf("\n%d\n", b);
    } else {
        b -= 3;
    }

    return 0;
}
