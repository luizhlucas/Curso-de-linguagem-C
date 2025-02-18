#include <stdio.h>

int main() {

    int i = 1;

    while (i <= 10) {
        printf("%i-", i);
        i++;
        if(i == 5) {
            break;
        }
    }

    do {
        printf("%i ", i);
        i++;
    }while(i <= 10);

    for(i=1; i<=10; i++) {
        printf("%i ", i);
    }
    
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i: %d, j: %d\n", i, j);
    }
}