#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the n: ";
   cin>>n;
   for(int i=n/2;i>=0;i--){
if(n%i==0){
    cout<<i<<" ";
    break;
}
   }
    
}