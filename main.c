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

    return 0;
}