#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the marks of the student: ";
    cin>>n;
    if(n>=81 and n<=100){
        cout<<"Very good";
    }
    else if(n>=61 && n<=80){
        cout<<"Good";
    }
    else if(n>=41 && n<80){
        cout<<"Average";
    }
    else if(n<41 and n>=0){
        cout<<"Fail";
    }
    else{
        cout<<"Not possible";
    }
    
}