#include <stdio.h>

int main() {
    int x = 0;
    for (x = 5; x < 15; x++)
        break;
    
    while (x < 20) {
        x++;
    }

    do {
        x--;
    } while (x > 5);
}
