#include<iostream>
using namespace std;
void printprimes(int n){
  int i=2,flag;
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
}
int main(){
 int n;
 cin>>n;
 printprimes(n);
  return 0;
}
