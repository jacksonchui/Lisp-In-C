#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

static char input[2048];

int main(int argc, char** argv) {
    
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    while (1) {
        
        // fputs("lispy> ", stdout);
        char* input = readline("lispy> ");
        
        // fgets(input, 2048, stdin);
        add_history(input);
        
        /* Echo input back to user */
        printf("No you're a %s", input);
        
        /* Free the retrieved input */
        free(input);
    }
    
    return 0;
}
