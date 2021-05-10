#include<iostream>
#define max 1000
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[max];
    a[0]=1;
    int a_size=0;
    int carry=0;
    while(n>1){
        for(int i=0;i<=a_size;++i){
        int prod=a[i]*n+carry;
        a[i]=prod%10;
        carry=prod/10;
    }
    while(carry){
        a_size++;
        a[a_size]=carry%10;
        carry=carry/10;
     }
     carry=0;
     n--;
    }
    
    for(int i=a_size;i>=0;--i){
        cout<<a[i];
    }
    return 0;
}