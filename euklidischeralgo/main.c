#include <stdio.h>
#include <math.h>

int main() {
    int a = 34675128;
    int b = 1478932;

    int a0 = 34675128;
    int b0 = 1478932;

    int r= 1;
    int q;

    while(r != 0){
        q = a / b;
        r = a % b;

        printf("%d = %d * %d + %d\n", a, q, b, r);

        a = b;
        b = r;
    }

    printf("ggT(%d, %d) = %d", a0, b0, a);
    return 0;
}
