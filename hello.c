#include "include/hello.h"

void hello(void) {
    char text[255];
    FILE *name;
    name = popen("whoami", "r");
    fgets(text, sizeof(text), name);
    printf("Welcome, %s", &text);
    pclose(name);
    printf("\n");
}