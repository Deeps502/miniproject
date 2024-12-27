#include <stdio.h>

int main() {
    int a, b, c, d, e, f, T;

    printf("enter the marks of a: ");
    scanf("%d", &a);
    printf("enter the marks of b: ");
    scanf("%d", &b);
    printf("enter the marks of c: ");
    scanf("%d", &c);
    printf("enter the marks of d: ");
    scanf("%d", &d);
    printf("enter the marks of e: ");
    scanf("%d", &e);
    printf("enter the marks of f: ");
    scanf("%d", &f);
  

    
    T = a + b + c + d + e + f;

    
    printf("Total marks: %d\n", T);


    if (T >= 500 && T < 600) {
        printf("Grade A");
    } else if (T >= 500 && T < 400) {
        printf("Grade B");
    } else if (T >= 400 && T < 300) {
        printf("Grade C");
    } else if (T >= 300 && T < 200) {
        printf("Grade D");
    } else {
        printf("Grade E");
    }

    return 0;
}
