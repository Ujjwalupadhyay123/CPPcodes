#include<iostream>
using namespace std;
int main(){
  int i=1,n;
  cin>>n;
  while(i<=n){
    int j=0;
    while(j<i){
      cout<<j+1<<" ";
      ++j;
    }
    int k=0;
    while(k<n-i){
      cout<<" "<<" ";
      ++k;
    }
    int z=0;
    while(z<n-i-1){
      cout<<" "<<" ";
      ++z;
    }
    int l=0;
    if(i==n){
      --j;
    }
    while(l<i&&l<=n-1){
      if(j>0){
        cout<<j<<" ";
      }
      --j;
      ++l;
    }
    ++i;
    cout<<endl;
  }

  return 0;
}
