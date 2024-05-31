#include "poli.h"
#include <math.h>

polinomio somarPoli(polinomio p1, polinomio p2){
    polinomio p3;
    p3.c3 = p1.c3 + p2.c3;
    p3.c2 = p1.c2 + p2.c2;
    p3.c1 = p1.c1 + p2.c1;
    p3.c0 = p1.c0 + p2.c0;
    return p3;
}

polinomio derivadaPoli(polinomio p1){
    polinomio p2;
    p2.c3 = 0;
    p2.c2 = p1.c3 * 3;
    p2.c1 = p1.c2 * 2;
    p2.c0 = p1.c1;
    return p2;
}

solucao raizesPoli(polinomio p1){
    solucao sol;
    sol.x1 = ((-p1.c1) + (sqrt((pow(p1.c1, 2) - (4* p1.c2 *p1.c0)))))/2;
    sol.x2 = ((-p1.c1) - (sqrt((pow(p1.c1, 2) - (4* p1.c2 *p1.c0)))))/2;
    return sol;
}

float valorPoli(polinomio p1, int n){
    return ((pow(n, 3) * p1.c3) + (pow(n, 2) * p1.c2) + (n * p1.c1) + p1.c0);
}