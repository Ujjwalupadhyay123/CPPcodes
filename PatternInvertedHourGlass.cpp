#include <iostream>
using namespace std;
int main(){
  int i=0,n;
  cin>>n;
  while(i<n){    //upper part
    // cout<<" ";
    int j=0,x=n;
    while(j<=i){
      cout<<x<<" ";
      --x;
      ++j;
    }
    int k=0;
    while(k<n-i){
      cout<<" "<<" ";
      ++k;
    }
    int l=0;
    while(l<n-i-1){
      cout<<" "<<" ";
      ++l;
    }
    int m=0;
    ++x;
    while(m<=i){
      cout<<x<<" ";
      ++x;
      ++m;
    }
    ++i;
    cout<<endl;
  }
  // cout<<endl;
  int k=0,y=n;
  // cout<<" ";
  while(k<=n){   //middle part
    cout<<y<<" ";
    --y;
    ++k;
  }
  y=y+2;
  k=0;
  while(k<n){
    cout<<y<<" ";
    ++y;
    ++k;
  }
  cout<<endl;
 i=0;
  while(i<n){     //lower part
    // cout<<" ";
    int j=n,e=n;
    while(j>i){
      cout<<e<<" ";
      --e;
      --j;
    }
    int k=0;
    while(k<(2*i)+1){
      cout<<" "<<" ";
      ++k;
    }
    int z=0;
    e=e+1;
    while(z<n-i){
      cout<<e<<" ";
      ++z;
      ++e;
    }
    ++i;
    cout<<endl;
  }
  return 0;
}
