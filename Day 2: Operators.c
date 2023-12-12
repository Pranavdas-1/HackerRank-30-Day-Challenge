#include <stdlib.h>
#include <string.h>

int main() {
    float mealValue;
    int tip;
    int tax;
    unsigned int total;
    scanf("%f",(float *)&mealValue);
    scanf("%d",&tip);
    scanf("%d",&tax);
    total = mealValue + (mealValue*((float)tip/100)) + (mealValue*((float)tax/100)) + .5;
    printf("%d ", (int)total);
    return 0;
}
