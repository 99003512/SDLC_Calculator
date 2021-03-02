#include<trignometry1.h>
#include<stdio.h>
#include<math.h>



int trignometry1()
{
    float angle=0,trignometry;
    printf("enter the number");
    scanf("%f",&angle);
    trig(angle);
    printf("enter 1 for continuation else 2");
    int k;
    scanf("%d",&k);
    if(k=1){
        return 0;
    }
    else{
        return 0;

    }
}   
int trig(double angle)  
{  
     
    
  
    printf("Enter angle \n");  
    scanf("%f",&angle);  
  
   
  
    printf("Sin(%lf) = %f\n", angle, cal_sin(angle));  
    printf("Cos(%lf) = %f\n", angle, cal_cos(angle));  
    
    return 0;
}
int trignometry_test(float x)
{
  float angle; 

  angle=x;

  
 if((x==0)||(x==90)){
     printf("error");
        return 0;
 }
 
 return tan(angle); 

}


float cal_sin(float n) 
{     
    float accuracy = 0.0001, denominator, sinx, sinval; 
      
    // Converting degrees to radian 
    n = n * (3.142 / 180.0);  
  
    float x1 = n; 
      
    // maps the sum along the series 
    sinx = n;          
      
    // holds the actual value of sin(n) 
    sinval = sin(n);     
    int i = 1; 
    do
    { 
        denominator = 2 * i * (2 * i + 1); 
        x1 = -x1 * n * n / denominator; 
        sinx = sinx + x1; 
        i = i + 1; 
    } while (accuracy <= fabs(sinval - sinx)); 
    return sinx;
} 


int cal_cos(float n) 
{ 
    float accuracy = 0.0001, x1, denominator, cosx, cosval; 
      
    // Converting degrees to radian 
    n = n * (3.142 / 180.0); 
      
    x1 = 1; 
      
    // maps the sum along the series 
    cosx = x1;          
      
    // holds the actual value of sin(n) 
    cosval = cos(n); 
    int i = 1; 
    do
    { 
        denominator = 2 * i * (2 * i - 1); 
        x1 = -x1 * n * n / denominator; 
        cosx = cosx + x1; 
        i = i + 1; 
    } while (accuracy <= fabs(cosval - cosx)); 
    return cosx;
} 