#include<iostream>
using namespace std;
int main(){
int sum=0,i;
while(sum>=0){
  cin>>i;
  sum+=i;
  if(sum<0){
    break;
  }
  cout<<i<<endl;
}
  return 0;
}
