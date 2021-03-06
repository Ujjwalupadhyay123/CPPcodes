#include<iostream>
using namespace std;
int main(){
int i=0,n;
cin>>n;
while(i<n){
  int j=0;
  while(j<i+1){
    cout<<"*";
    ++j;
  }
  cout<<endl;
  ++i;
}
  return 0;
}
