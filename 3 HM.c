/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// swip the vowels
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, j;

    scanf("%s", str);

    i = 0;
    j = strlen(str) - 1;

    while(i < j)
    {
        if(str[i] == 'A' || str[i] == 'E' ||
           str[i] == 'I' || str[i] == 'O' ||
           str[i] == 'U')
        {
            if(str[j] == 'A' || str[j] == 'E' ||
               str[j] == 'I' || str[j] == 'O' ||
               str[j] == 'U')
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;

                i++;
                j--;
            }
            else
                j--;
        }
        else
            i++;
    }

    printf("%s", str);

    return 0;
}

// multiple bits
#include <stdio.h>

int main()
{
    int num, result;

    scanf("%d", &num);

    result = num | (1 << 1) | (1 << 3);

    printf("%d", result);

    return 0;
}
//13 multiple 
#include <stdio.h>

int main()
{
    int num, result;

    scanf("%d", &num);

    result = (num << 3) + (num << 2) + num;

    printf("%d", result);

    return 0;
}