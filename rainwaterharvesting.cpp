#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int lmax[n];
    lmax[0]=a[0];
    for(int i=1;i<n;++i){
      int temp=max(a[i],lmax[i-1]);
      lmax[i]=temp;
    }
    int rmax[n];
    rmax[n-1]=a[n-1];
    for(int i=n-2;i>=0;--i){
        int temp=max(a[i],rmax[i+1]);
        rmax[i]=temp;
    }
    int w=0;
    for(int i=1;i<n;++i){
        w+=min(lmax[i],rmax[i])-a[i];
    }
    cout<<w;

    return 0;
}