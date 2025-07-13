#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    int b;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
    cout<<"The area of the rectangle is: ";
        cout<<l*b<<endl;
    cout<<"The peremeter of the rectangle is : ";
    cout<<2*(l+b)<<endl;
    if((l*b)>(2*l+2*b)){
        cout<<"The area of the rectangle is greater than the peremeter of the rectangle: ";
        cout<<(l*b)-(2*(l+b));

    }
    else{
        cout<<"The peremeter of rectangle is greater than its area: ";
        cout<<(2*(l+b))-(l*b);
    }
        
}

   