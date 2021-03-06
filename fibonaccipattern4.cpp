#include<iostream>
using namespace std;
int main(){
 int a=0,b=1,c=1,n,cnt=3;
 cin>>n;
 cout<<a<<endl;
 cout<<b<<" "<<c<<endl;
 a=1;
 int i=3;
 while(i<=n){
   int j=0;
   while(j<i){
     if(cnt<=(n*(n+1))/2){
       c=a+b;
       cout<<c<<" ";
       a=b;
       b=c;
     }
    else{
      break;
    }
     ++j;
   }
   cout<<endl;
   ++i;
 }
  return 0;
}
