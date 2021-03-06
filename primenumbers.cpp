#include<iostream>
using namespace std;
int main(){
 int n,i=2,flag;
 cin>>n;
 while(i<=n){
      int j=2;
      flag=1;
       while(j<=i/2){
         if(i%j==0){
           flag=0;
           break;
         }
         ++j;
       }
       if(flag==1){
         cout<<i<<endl;
       }
   ++i;
 }
  return 0;
}
