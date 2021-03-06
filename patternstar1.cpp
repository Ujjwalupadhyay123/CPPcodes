#include<iostream>
using namespace std;
int main(){
 int i=1,n;
 cin>>n;
 while(i<=n){
    int j=0;
    while(j<=n-i){
      cout<<j+1<<" ";
      ++j;
    }
    int k=2;
    if(i>1){
      while(k<((2*i)-1)){
        cout<<"*"<<" ";
        ++k;
      }
    }
    ++i;
    cout<<endl;
 }
  return 0;
}
