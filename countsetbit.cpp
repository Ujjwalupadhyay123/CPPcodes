#include<iostream>
using namespace std;
void countset(int);
void countset(int x){
  int cnt=0;
  while(x){
    if(x&1==1){
      cnt++;
    }
    x=x>>1;
  }
  cout<<cnt<<endl;
}
int main(){
 int n,i=0;
 cin>>n;
 int a[n];
 while(i<n){
   cin>>a[i];
   ++i;
 }
 i=0;
 while(i<n){
   int c=a[i];
   countset(c);
   ++i;
 }
  return 0;
}
