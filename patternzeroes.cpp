#include<iostream>
using namespace std;
int main(){
 int i=0,n;
 cin>>n;
 while(i<n){
   int j=0;
   while(j<=i){
     if((j==0)||(i==j)){
       cout<<i+1<<" ";
     }
     else{
       cout<<0<<" ";
     }
     ++j;
   }
   ++i;
   cout<<endl;
 }
  return 0;
}
