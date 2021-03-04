#include <stdio.h>
//#define start main

void printOut(char* phrase, int times) {
    for (int i = 0; i < times; i++) {
        printf("%s\n", phrase);
    }
}

int main(int argc, char** argv) {
    
    printOut("Hello World!", 5);

    return 0;    
}

