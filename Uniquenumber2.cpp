#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int x=0;
    for(int i=0;i<n;++i){
        x^=arr[i];
    }
    int first_set_bit=(x)&~(x-1);
    int a=0,b=0;
    for(int i=0;i<n;++i){
       if(x&arr[i]){
           a^=arr[i];
       }
       else{
           b^=arr[i];
       }
    }
    
    if(a>b){
       cout<<b<<" "<<a; 
      
    }
    else{
         cout<<a<<" "<<b;
         
    }
    return 0;
}