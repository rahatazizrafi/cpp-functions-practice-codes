#include<stdio.h>

int main()
{
    int r, c;

    for(r = 1; r < 7; r++)
    {
        // to print R //
        for(c = 1; c < 6; c++)
        {
            if (c ==1 || r == 1 || r == 3 || (r == 2 && c == 5) || (r - c == 2 && r > 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }


        printf("   ");

        // to print I //
        for (c = 1; c < 6; c++)
        {
            if (r == 1 || r == 6 || c == 3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}
