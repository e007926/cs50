#include <stdio.h>
#include <cs50.h>
/**
Implement a program that prints out a double half-pyramid of a specified height
**/
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
            for(int k=0;k<i+1;k++){
                printf("#");
            }
            printf("  ");
            for(int k=0;k<i+1;k++){
                printf("#");
            }
            printf("\n");
        }
    }
    while (h < 0 || h>23);
}

