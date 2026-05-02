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
        case mul:
            float a3, b3;
            printf("First number: ");
            scanf("%f", &a3);
            printf("Second number: ");
            scanf("%f", &b3);
            printf("Result: %.2f\n", a3 * b3);
            break;
    }

    return 0;
}