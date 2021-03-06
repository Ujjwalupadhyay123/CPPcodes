#include<iostream>
using namespace std;
int main(){
 int i=1,n;
 cin>>n;
 cout<<1<<endl;
 while(i<n){
   int j=0;
   while(j<=i){
     if((j==0)||(i==j)){
       cout<<i;
     }
     else{
       cout<<0;
     }
     ++j;
   }
   cout<<endl;
   ++i;
 }
  return 0;
}
