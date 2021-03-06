#include<iostream>
#include<cmath>
using namespace std;

void binarytodecimal(int);

  void binarytodecimal(int temp){
  int s=0,i=0,ch=temp;
  while(ch){
    int x=ch%10;
    s+=x*pow(2,i);
    ++i;
    ch=ch/10;
  }
  cout<<s<<endl;
}

int main(){
 int n,i=0;
 cin>>n;
 int a[n];
 while(i<n){
   cin>>a[i];
   ++i;
 }
  int j=0;
 while(j<n){
   int c=a[j];
   binarytodecimal(c);
   ++j;
 }
  return 0;
}
