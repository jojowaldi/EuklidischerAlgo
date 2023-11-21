#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    printf("Bitte Zwei Zahlen eingaben:");
    scanf("%d %d",&a,&b);


    int a0 = a;
    int b0 = b;

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
