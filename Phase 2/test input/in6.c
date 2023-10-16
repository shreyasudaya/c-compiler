#include <stdio.h>

int main() {
    int arr[4], i = 0, result = 0;

    while (i < 4) {
        arr[i] = i;
        i++;
    }
    
    int b = arr[0] * arr[1]; // Corrected the multiplication operation

    printf("%d", b);
}

