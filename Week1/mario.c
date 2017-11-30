#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    do
    {
        printf("Height: ");
        h = get_int();
        for(int i = 0;i < h; i++){
            for(int j=h-1-i;j>0;j--){
                printf(" ");
            }
            for(int k=0;k<i+2;k++){
                printf("#");
            }
            printf("\n");
        }
    }
    while (h < 0 || h>23);
}
