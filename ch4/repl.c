#include <stdio.h>

static char input[2048];

int main(int argc, char** argv) {
    puts("Yun Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    while (1)
    {
        fputs("Yun> ", stdout);
        fgets(input, 2048, stdin);
        printf("No you're a %s", input);
    }
    
    return 0;
}

//cc -std=c99 -Wall repl.c -o repl  