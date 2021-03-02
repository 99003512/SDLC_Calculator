#include<bin_to_dec.h>
#include<stdio.h>
#include<power.h>
#include<math.h>
int bin_to_dec()
{
    int binnum, decnum=0,m;
    front:
    printf("Enter any binary number: ");
    scanf("%d", &binnum);
    if((binnum<0) || (binnum>1))
    {
        printf("invalid input");
        goto front;
    }
    else
    {
        while(binnum!=0)
        { 
            int rem, i=0;
            rem = binnum%10;
            decnum = decnum + rem*calculate_power(2,i);
            i++;
            binnum = binnum/10;
        }
    }
    printf("To print result press 1 else press 2 ");
    scanf("%d",&m);
    if(m==1)
    {
    printf("\nEquivalent Decimal Value = %d \n", decnum);
    return 0;
    }
    else{
        return decnum;
    }
    
}


