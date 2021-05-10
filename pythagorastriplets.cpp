#include<iostream>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    if(a==1||a==2){
        cout<<-1;
    }
    if(a%2==0){
        cout<<((a*a)/4)-1<<" "<<((a*a)/4)+1<<endl;
    }
    else if(a%2!=0){
        cout<<((a*a)-1)/2<<" "<<((a*a)+1)/2<<endl;
    }
    else{
        cout<<-1;
    }
    return 0;
}