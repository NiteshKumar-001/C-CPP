#include<stdio.h>
int main(){
    float a,b,c,d,e,f,g,h,i,j;

      printf("Enter the 1st number: ");
     scanf("%f",&a);
     printf("Enter the 2nd number: ");
     scanf("%f",&b);
      printf("Enter the 3rd number: ");
     scanf("%f",&c);
     printf("Enter the 4th number: ");
     scanf("%f",&d);
     printf("Enter the 5th number: ");
     scanf("%f",&e);
     printf("Enter the 6th number: ");
     scanf("%f",&f);
     printf("Enter the 7th number: ");
     scanf("%f",&g);
     printf("Enter the 8th number: ");
     scanf("%f",&h);
     printf("Enter the 9th number: ");
     scanf("%f",&i);
     printf("Enter the 10st number: ");
     scanf("%f",&j);


     
     if(a>=b && a>=c && a>=d && a>=e && a>=f && a>=g && a>=h && a>=i && a>=j ){
        printf("%.2f is the Greatest number\n", a);
     }
     if(b>=a && b>=c && b>=d && b>=e && b>=f && b>=g && b>=h && b>=i && b>=j ){
        printf("%.2f is the greatest number\n",b);
     }
     if(c>=a && c>=b && c>=d && c>=e && c>=f && c>=g && c>=h && c>=i && c>=j ){
        printf("%.2f is the greatest number\n",c);
     }
     if(d>=a && d>=b && d>=c && d>=e && d>=f && d>=g && d>=h && d>=i && d>=j ){
        printf("%.2f is the greatest number\n",d);
     }
     if(e>=b && e>=c && e>=d && e>=a && e>=f && e>=g && e>=h && e>=i && e>=j ){
        printf("%.2f is the greatest number\n",e);
     }
     if(f>=b && f>=c && f>=d && f>=e && f>=a && f>=g && f>=h && f>=i && f>=j ){
        printf("%.2f is the greatest number\n",f);
     }
     if(g>=b && g>=c && g>=d && g>=e && g>=f && g>=a && g>=h && g>=i && g>=j ){
        printf("%.2f is the greatest number\n",g);
     }
     if(h>=b && h>=c && h>=d && h>=e && h>=f && h>=g && h>=a && h>=i && h>=j ){
        printf("%.2f is the greatest number\n",h);
     }
     if(i>=b && i>=c && i>=d && i>=e && i>=f && i>=g && i>=h && i>=a && i>=j ){
        printf("%.2f is the greatest number\n",i);
        if(j>=b && j>=c && j>=d && j>=e && j>=f && j>=g && j>=h && j>=i && j>=a ){
        printf("%.2f is the greatest number\n",j);
     }
     }

}