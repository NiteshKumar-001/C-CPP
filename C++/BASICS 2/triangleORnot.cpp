#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st side of a triangle : ";
    cin>>a;
     cout<<"enter  2nd side of a triangle : ";
    cin>>b;
     cout<<"enter 3rd side of a triangle : ";
    cin>>c;
    if((a+b)>c and (b+c)>a and (a+c)>b) {
        //and in place of and we can use &&
        cout<<"Yes it can be a triangle";
    }
    else{
        cout<<"No it can't be a triangle";
    }
}