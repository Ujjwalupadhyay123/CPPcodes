#include<iostream>
using namespace std;
int main(){
 
  long long int n;
  cin>>n;
  int a[n];
  long long int zero=0,one=0,two=0;
  for(long long int i=0;i<n;++i){
      cin>>a[i];
     if(a[i]==0){
         zero++;
     }
     else if(a[i]==1){
         one++;
     }
       else{
           two++;
       }
  }
  long long int i=0;
  for(long long int j=0;j<zero;++j){
      a[i]=0;
      ++i;
  }
  for(long long int j=0;j<one;++j){
      a[i]=1;
      ++i;
  }
  for(long long int j=0;j<two;++j){
      a[i]=2;
      ++i;
  }
  for(long long int j=0;j<n;++j){
      cout<<a[j]<<endl;
  }

return 0;
}