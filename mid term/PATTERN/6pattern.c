//To print plus star pattern
#include <stdio.h>

void main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

}
