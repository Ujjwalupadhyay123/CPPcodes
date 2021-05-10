#include<iostream>
using namespace std;
int Binarysearch(int a[],int n, int m){
   int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]<m){
            l=mid+1;
        }
        else if(a[mid]>m){
            h=mid-1;
        }
             else{
                 return mid;
             }
    }
    return -1;
}
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;++i){
       cin>>a[i];
   }
   int m;
   cin>>m;
   cout<<Binarysearch(a,n,m);
   
    return 0;
}