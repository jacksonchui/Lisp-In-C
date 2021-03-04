#include <stdio.h>

typedef enum {
    ONE_NUM,
    TWO_NUM,
    THREE_NUM,
    FOUR_NUM
} number;

int main(void) {
    
    number n = TWO_NUM;
    switch(n) {
        case ONE_NUM: printf("One\n"); break;
        case TWO_NUM: printf("Two\n"); break;
        case THREE_NUM: printf("Three\n"); break;
        default: printf("Four\n");
    } 
    
    return 0;

}
