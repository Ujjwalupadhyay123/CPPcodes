#include<iostream>
using namespace std;
int main(){
   int a[]={1,2,3,4,5,6,7,8,9,10};
   int x,n,c=0,i=0;
   cin>>x;
   n=sizeof(a)/sizeof(a[0]);
   for(;i<n;++i){
       if(a[i]==x){
           c=1;
           break;
       }
   }
   if(c==1) cout<<"found at index ="<<i;
   else cout<<"Not found";
    return 0;
}