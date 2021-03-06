#include<iostream>
#include<limits.h>
using namespace std;

int GCD(int,int);
int GCD(int n1,int n2){
  if(n1==0){
    return n2;
  }
  if(n2==0){
    return n1;
  }
  return GCD(n2,n1%n2);
}
int main(){
 int N1,N2;
 cin>>N1;
 cin>>N2;
 cout<<GCD(N1,N2);

  return 0;
}
