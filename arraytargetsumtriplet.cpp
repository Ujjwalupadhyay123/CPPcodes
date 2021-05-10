#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;++i){
        cin>>a[i];
     }
     int X;
     cin>>X;
        sort(a,a+n);
        for(int i=0;i<n;++i){
            int l=i+1,r=n-1;
             while(l<r){
                 if(a[i]+a[l]+a[r]==X){
                     cout<<a[i]<<","<<" "<<a[l]<<" "<<"and"<<" "<<a[r]<<endl;
                     ++l;
                     --r;
                 }
                 else if(a[i]+a[l]+a[r]>X){
                     r=r-1;
                 }
                      else if(a[i]+a[l]+a[r]<X){
                          l=l+1;
                      }
             }
        }
    
    return 0;
}