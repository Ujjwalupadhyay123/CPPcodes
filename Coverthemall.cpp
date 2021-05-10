#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;++i){
           cin>>a[i];
       }
       int b[n];
       for(int i=0;i<n;++i){
           cin>>b[i];
       }
       int c=0;
       for(int i=0;i<n;++i){
           for(int j=i+1;j<n;++j){
              c=abs(a[i]-a[j])*max(b[i],b[j]);
           }
       }
       cout<<c<<endl;
   }
    return 0;
}