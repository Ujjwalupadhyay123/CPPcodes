#include<iostream>
using namespace std;
int main(){
 int i=1,n;
 cin>>n;
 while(i<=n){
   int j=1;
   while(j<=i){
     cout<<j;
     ++j;
   }
   int k=0;
   while(k<=n-i-1){
     cout<<"*";
     ++k;
   }
   ++i;

   cout<<endl;
 }
  return 0;
}
