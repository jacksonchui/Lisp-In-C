#include <stdio.h>

// number is defined as a type of aType.
typedef enum Number { ONE_NUM, TWO_NUM, THREE_NUM, FOUR_NUM } number;
// enum number { Item1, Item2 };
// enum aType number;

struct Distance {
    int feet;
    float inch;
};

int main(void) {
    
    // practice with structs
    struct Distance *distPtr, dist1;
    distPtr = &dist1;

    printf("Enter feet: ");
    // scanf requires int* location to store, not our value
    scanf("%d", &dist1.feet);
    
    printf("Enter inch: ");
    scanf("%f", &distPtr->inch);
   
    // alternatively, you could use (*distPtr).feet, distPtr->inch 
    printf("%d ft. %.1f in.\n", distPtr->feet, dist1.inch);
    
    number n = TWO_NUM;
    switch(n) {
        case ONE_NUM: printf("One\n"); break;
        case TWO_NUM: printf("Two\n"); break;
        case THREE_NUM: printf("Three\n"); break;
        default: printf("Four\n");
    } 
    
    return 0;

}
