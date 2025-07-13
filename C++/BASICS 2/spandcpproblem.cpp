#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Inter the cost price : ";
    cin>>cp;
    int sp;
    cout<<"inter the selling price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"Gain profits of rupees : "<<sp-cp<<endl;
        cout<<"wow good job";
    }
     if(cp>sp){
        cout<<"Loss of rupees : "<<cp-sp<<endl;
        cout<<"ghata hogaya bhai paisa barbaad";
     }
     if(sp==cp){
        cout<<"Na he ghata hua na he loss hua"<<endl;
        cout<<"ghanta kuch nhi mila";
     }
    
}