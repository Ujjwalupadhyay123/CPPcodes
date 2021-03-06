#include<iostream>
using namespace std;

int main(){
 int i=1,evensum=0,oddsum=0,n;
 cin>>n;
 while(n){
   int rem=n%10;
   if(i==1){
     oddsum+=rem;
   }
   if(i==-1){
     evensum+=rem;
   }
   i*=-1;
   n=n/10;
 }
 cout<<oddsum<<endl;
 cout<<evensum<<endl;

  return 0;
}
