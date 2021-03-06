#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=0;
while(i<n){
  int j=0;
  while(j<n){
    if(i<n/2&&j==0){
      cout<<"*";
    }
    else if(i>n/2&&j==n-1){
      cout<<"*";
     }
        else if(j>n/2&&i==0){
          cout<<"*";
        }
             else if(i==n-1&&j<n/2){
               cout<<"*";
             }
                  else if(i==n/2||j==n/2){
                    cout<<"*";
                  }
                  else {
                    cout<<" ";
                  }
      ++j;
  }
  cout<<endl;
  ++i;
}
return 0;
}
