#include<iostream>
using namespace std;
int main(){
 long long int a,b=0,c;
 cin>>a;

 while(a!=0){
   c=a%10;
   b=b*10;
   b+=c;
   a=a/10;
 }
 cout<<b;
  return 0;
}
