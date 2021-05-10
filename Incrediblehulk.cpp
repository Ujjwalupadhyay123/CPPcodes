#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
      int n,x=0;
      cin>>n;
      while(n){    //count set bits
		  if(n&1){
			  x++;
		  }
		  n=n>>1;
	  }
      cout<<x<<endl;
  }
    return 0;
}