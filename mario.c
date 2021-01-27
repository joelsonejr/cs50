#include <stdio.h>
#include <cs50.h>

//functions prototypes
void line(int x);
void space(int x, int y);

int main(void)
{
    int height = get_int("Hhich is the pyramids height (Type a number from 1 to 8) ? "); //prompting user for input.

    // Checks if the input is from 1 to 8. In case it isn't, it prompts the user for the correct input.
    while  (height < 1 || height > 8 )
    {
        height = get_int("Please, type a number from 1 to 8: ");
    }

    //Pyramid generation loop.
    for (int enter = 0; enter < height; enter++)
    {
        space(height,enter); //function responsible for generating the spaces.

        line(enter); //function responsible for generating the itens in the lines. On this case, the "#" symbol.

        printf("  ");

        line(enter); //function responsible for generating the itens in the lines. On this case, the "#" symbol.

        printf("\n");
    }

}

// hashtag printing function
void line(int x)
{
   for (int i = 0; i <= x; i++)
   {
       printf("#");
   }
}

// space printing function
void space(int x, int y)
{
    int i = x;
    int j = y;

    while((j-i) < -1)
    {
        printf(" ");
        i--;
    }
}
