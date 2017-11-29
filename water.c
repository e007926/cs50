#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int minutes;
    do
    {
        printf("Minutes: ");
        minutes = get_int();

        printf("Bottles: %i\n", minutes * 12);

    }
    while (minutes < 0);
}
