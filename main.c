#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Hello, World!\n");
    int x = rand()%10;
    if (x!= 4)
        return 2;
    return 0;
}
