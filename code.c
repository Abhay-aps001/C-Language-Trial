#include <stdio.h>

int main(){
printf("pattern printing using *");
int i,j;
for(i=0;i<5;i++)
{
    for(j=0;j<i;j++)
    {
        printf("*");
    }
    printf("\n\t");
}
    return 0;
}