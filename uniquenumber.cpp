#include<iostream>
using namespace std;
int main(){
 int n,a,ans=0; //we have to initialise ans=0 because 0^x=x
 cin>>n;
 int i=0;
 while(i<n){
   cin>>a;
   ans=ans^a;
   ++i;
 }
 cout<<ans<<endl;
  return 0;
}
