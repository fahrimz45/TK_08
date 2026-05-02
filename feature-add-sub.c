#include <stdio.h>

int main(){

    enum {
        add,
        sub,
        mul,
        div,
    } mode;

    printf("Calculator\n");
    printf("Select mode: 0. Add, 1. Sub, 2. Mul, 3. Div\n");
    scanf("%d", &mode);

    switch(mode){
        case add:
            float a1, b1;
            printf("First number: ");
            scanf("%f", &a1);
            printf("Second number: ");
            scanf("%f", &b1);
            printf("Result: %f\n", a1 + b1 );
            break;
        case sub:
            float a2, b2;
            printf("First number: ");
            scanf("%f", &a2);
            printf("Second number:");
            scanf("%f", &b2);
            printf("Result: %.2f\n", a2 - b2);
            break;
            
        default:
            printf("Invalid mode\n");
            break;
    }

    return 0;
}