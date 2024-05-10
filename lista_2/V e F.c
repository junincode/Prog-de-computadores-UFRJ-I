#include<stdio.h>
    int f(int a);
    int main() {
    int a = 2, b = 3, c = 4;
        f(a) || f(b); // 2 
        printf("\n");
        0 || f(b); // 3
        printf("\n");
        f(a) || f(b) && f(c); // 2
        printf("\n");
        f(a) && f(b) || f(c); // 2 3
        printf("\n");
        (f(a) || f(b)) && f(c); // 2 4 
        printf("\n");
        f(a) || (f(b) && f(c)); // 2
        printf("\n");
        (a > b) && f(a) || f(b) && f(c); // 3 4
        printf("\n");
        (b > a) && f(a) || f(b) && f(c); // 2
        printf("\n");
        ((b > a) && f(a) || f(b)) && f(c); // 2 4
        return 0;
    }
    int f(int a) {
        printf("%d ", a);
    return a;
}