#include <stdio.h>
#include "include/hello.h"

int main(void) {
    hello();

    char *string = "";
    while(1) {
        printf(">_ ");
        scanf("%s", &*(string));
    }
}