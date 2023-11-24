#include <stdio.h>

int main (void)
{
    int count = 0;

    for(count = 0; count < 25; count++){
        if((count + 1) % 3 == 0){
            printf("%d\n",count+1);
        }

    }

    while(count < 50){
        if((count + 1) % 3 == 0){
            printf("%d\n",count+1);
        }
        count++;
    }
}