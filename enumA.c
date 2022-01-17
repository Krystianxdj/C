/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

typedef enum
{
    MODE_1,
    MODE_2,
    MODE_3,
    MODE_4,
}MODE_T;


void ProgramRun(MODE_T mode);


int main()
{
    for(int i = 0; i < 4; i++)
    {
        ProgramRun(i);  
    }
    

    return 0;
}


void ProgramRun(MODE_T mode)
{
    switch(mode)
    {
        case MODE_1:
            printf("mode 1\n");
            break;
        case MODE_2:
            printf("mode 2\n");
            break;
        case MODE_3:
            printf("mode 3\n");
            break;
        case MODE_4:
            printf("mode 4\n");
            break;
    }
}
