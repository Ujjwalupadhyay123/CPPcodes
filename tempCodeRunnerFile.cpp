#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;++i){
         cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int l=0,h=n-1,start=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(a[mid]==x){
                start=mid;
                h=mid-1;
            }
            else if(a[mid]>x){
                h=mid-1;
            }
               else{
                   l=mid+1;
               }
        }
        int end=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(a[mid]==x){
                end=mid;
                l=mid+1;
            }
            else if(a[mid]>x){
                h=mid-1;
            }
               else{
                   l=mid+1;
               }
        }
        cout<<start<<" "<<end<<endl;
    }
    return 0;
}