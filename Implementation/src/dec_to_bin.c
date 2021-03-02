#include <dec_to_bin.h>
#include<stdio.h>
int dec_to_bin() 
{
    int a[10], number, i, j,m;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    
    for(i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
   
    
    printf("\n Binary Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)  {
    printf("%d", a[j]);
    
    }
    
    
    return 0;
}
