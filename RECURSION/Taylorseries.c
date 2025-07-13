#include<stdio.h>
// Taylor series:-
double e(int x, int n){
    static double p=1,f=1;
    double r;

    if(n==0)
    return 1;
    else{
        r= e(x,n-1);
        p=x*n;
        f=f*n;
       return r+p/f;

    }
}
int main(){
    e(1,10);
    printf("%lf\n ",e(1,10));
    return 0;
}



// Tayler serie Iterative:-
// double e(int x, int n){
//     double s=1;
//     int i;
//     double num=1;
//     double dem=1;
     
//     for (i=1;i<n;i++){
//         num*=x;
//         dem*=i;
//         s+=num/dem;
//     }
//     return s;
// }
// int main(){
//     e(1,10);
//     printf("%lf\n",e(1,10));
//     return 0;
// }