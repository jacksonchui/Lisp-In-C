#include <stdio.h>
#include <stdlib.h>


#ifdef _WIN32
#include <string.h>

static char input[2048];

char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer) + 1);

    /* doesn't copy the null charater */
    strcpy(cpy, buffer); 
    cpy(strlen(cpy) - 1) = '\0';
    return cpy;
}

/* Fake add_history function */
void add_history(char* unussed) { }
/*
# elif __APPLE__
    #include <TargetConditionals.h>
    #if TARGET_IPHONE_SIMULATOR 
        // iOS Simulator
    #elif TARGET_OS_IPHONE
        // iOS Device
    #elif Target_OS_MAC
        // Other kinds of macOS
    #endif
*/
#elif __linux__
    printf("Using a Linux Platform")
#elif __unix__
#else
#include <editline/readline.h>
#endif

int main(int argc, char** argv) {
    
    puts("LispC Version chapter 4");
    puts("Press Ctrl+c to Exit\n");

    while (1) {

        /* Readline is defined properly on either platform */
        char* input = readline("lispC> ");
        add_history(input);
        
        printf("No you're a %s\n", input);
        free(input);
    }
    
    return 0;
}
