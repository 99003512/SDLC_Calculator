#include <exponential.h>
int exponential()
{
    float basenumber;   //Basenumber can be of float
    int exponential, n; //Exponential number must be of only integer
    float result = 1;
    
    printf("Enter the Base number : ");  //User enters the base number
    scanf("%f", &basenumber);
    if(basenumber == 0) //If base number is zero the user will have to enter a valid number
    {
        printf("Invalid Operand\n");
        printf("Enter a valid Base number : ");
        scanf("%f", &basenumber);
    }
    
    printf("Enter the Exponential : "); //User enters the exponential number
    scanf("%d", &exponential);
    if(exponential>0)
    {
    while (exponential != 0)
    {
        result *= basenumber;
        --exponential;
    }
    }
    else
    {
        while (exponential< 0)

    {
            result= result/basenumber;
            exponential++;
        }

    }
    printf("If you want to print the result press 1 or else press 2 : ");
    scanf("%d", &n);
    if (n == 1){
        printf("Solution = %.02lf", result);
        return 0;
    }

    else{
        return result;

    }
    
}

int exponential1(float x, int y)
{
    float basenumber = x;
    int exponential = y;
    int n;
    float result = 1;

    if(basenumber == 0)
    {
        printf("Invalid Operand\n");
        printf("Enter a valid Base number : ");
        scanf("%f", &basenumber);
    }

    while (exponential != 0)
    {
        result *= basenumber;
        --exponential;
    }
    printf("If you want to print the result press 1 or else press 2 : ");
    scanf("%d", &n);
    if (n == 1){
        printf("Solution = %.02lf", result);
        return 0;
    }

    else{
        return result;

    }
    
}

int exponential_test(float x, int y)
{
    float basenumber, result = 1;
    int exponential, n;
    basenumber = x;
    exponential = y;
    
    if(basenumber == 0){
        return 0;
    }   
    else if(basenumber < 0){
        return 0;
    }
    else{
        while (exponential != 0)
    {
        result *= basenumber;
        --exponential;
    }
    return result;
    }
}
        
    
    
