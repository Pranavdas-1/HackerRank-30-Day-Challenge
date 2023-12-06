#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    int N,i; 
    scanf("%d",&N);
    if(N>=2 && N<= 20){
        for(i=1;i<=10;i++){
            printf("%d x %d = %d \n",N,i,(N*i));
        }
    }
    return 0;
}
