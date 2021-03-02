#include<stdio.h>
#include<average_operations.h>
#include<basic_operation.h>
#include<bin_to_dec.h>
#include<dec_to_bin.h>
#include<exponential.h>
#include<factorial.h>
#include<interest.h>
#include<logarthmic.h>
#include<power.h>
//#include<trignometry1.h>
#include<math.h>

int main(){
    int k, j=3;
    int r;
    float r2;
    float r3;
   
        printf("Please select the number for the select function \n");
        printf("1 - basic operators(Add, Subtract, multiply, division)\n");
        printf("2 - average\n");
        printf("3 - Binary to Decimal conversion\n");
        printf("4 - Decimal to Binary conversion\n");
        printf("5 - Exponential operation\n");
        printf("6 - Factorial operation\n");
        printf("7 - Simple Interest Operation\n");
        printf("8 - Logarthmic Operation\n");
        printf("9 - Taking Power of the number");
        printf("10 - Trignometric functions");
    scanf("%d", &k);
        switch(k){
            case 1:
            r = basic_operation();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 2:
            r = average();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 3:
            r = bin_to_dec();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 4:
            r = dec_to_bin();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 5:
            r = exponential();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 6:
            r = factorial();
           if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 7:
            r = interest();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 8:
            r = logarthmic1();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 9:
            r = power();
           if(r==0){
                break;
            }
            else{
                goto front;
            }
     }

    front: 
        printf("Please select the number for the select function \n");
        printf("1 - basic operators(Add, Subtract, multiply, division)\n");
        printf("2 - average\n");
        printf("5 - Exponential operation\n");
        printf("6 - Factorial operation\n");
        printf("7 - Simple Interest Operation\n");
        printf("8 - Logarthmic Operation\n");
        printf("9 - Taking Power of the number");

         scanf("%d", &k);
        switch(k){
            case 1:
            printf("enter the second number");
            scanf("%f", &r2);
            r = basic_operation1(r, r2);
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 2:
            r = average1(r);
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 5:
            printf("Enter the exponential:");
            scanf("%f", &r2);
            r = exponential1(r, r2);
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 6:
            r = factorial1(r);
           if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 7:
            printf("Please enter rate and time of interest respectively");
            scanf("%f %f", &r2, &r3);
            r = interest1(r, r2, r3);
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 8:
            printf("enter base of log");
            scanf("%f", &r2);
            r = log_2(r, r2);
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 9:
           
            printf("Please enter the exponential number");
            scanf("%f", &r2);
             r = power1(r, r2);
           if(r==0){
                break;
            }
            else{
                goto front;
            }

    return 0;



    }
}
