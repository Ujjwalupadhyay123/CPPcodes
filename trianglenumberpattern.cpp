#include<iostream>
using namespace std;
int main(){
    int i=0,n;
    cin>>n;
    while(i<n){
      int j=0;
      while(j<n-i-1){
        cout<<" "<<" ";
        ++j;
      }
      int in=i+1,k=0;
      while(k<=i){
        cout<<in<<" ";
        in++;
        k++;
      }
      int z=0,dec=in-2;
      while(z<i){
        cout<<dec<<" ";
        dec--;
        ++z;
      }
      cout<<endl;
      i++;
    }
    return 0;
}
