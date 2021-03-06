#include<iostream>
#include<limits.h>
using namespace std;

long long int GCD(long long int,long long int);
long long int GCD(long long int n1,long long int n2){
  if(n1==0){
    return n2;
  }
  if(n2==0){
    return n1;
  }
  return GCD(n2,n1%n2);
}
 int main(){
 long long int N1,N2;
 cin>>N1;
 cin>>N2;
 long long int c=GCD(N1,N2);
 long long int lcm=(N1*N2)/c;
 cout<<lcm;

  return 0;
}
