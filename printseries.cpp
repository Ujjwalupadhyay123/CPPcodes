#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int i=1,n1,n2,cnt=0;
cin>>n1;
cin>>n2;
while(i<INT_MAX&&cnt<n1){
  int x=(3*i)+2;
  if(x%n2!=0){
    cout<<x<<endl;
    cnt++;
  }
  ++i;
}
  return 0;
}
