#include <stdio.h>

int main (void)
{
    int count = 1;

    while (count <= 10){
        if(count % 2 == 0){
            printf("%d\n",count);
        }
        count++;
    }
    return 0;
}