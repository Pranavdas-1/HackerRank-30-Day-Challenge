#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int a;
    double b;
    char q[60];
    scanf("%d",&a);
    scanf("%lf",&b);
    scanf("%*[\n] %[^\n]",q);
    printf("%d\n",a+i);
    printf("%.01lf\n",b+d);
    printf("%s%s",s,q) ;
    return 0;
}
