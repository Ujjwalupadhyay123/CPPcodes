#include<iostream>
#include<cmath>
using namespace std;
void isarmstrong(long long int n){
  long long int s=0,c=0,x,y;
  y=n;
  c= log10(n)+1;
  while(y!=0){
	long long int x=y%10;
    s+=pow(x%10,c);
    y=y/10;
  }
  if(s==n) {
    cout<<"true";
  }
  else {
    cout<<"false";
  }
}
int main(){
 long long int x;
 cin>>x;
 isarmstrong(x);
  return 0;
}
