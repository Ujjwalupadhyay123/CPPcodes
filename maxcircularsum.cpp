#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    int a[n];
    int sum=0,res;
    for(int i=0;i<n;++i){
        cin>>a[i];
        sum+=a[i];
    }
    int curr_max=a[0],max_so=a[0],curr_min=a[0],min_so=a[0];
     for(int i=1;i<n;++i){
       curr_max=max(curr_max+a[i],a[i]);
       max_so=max(max_so,curr_max);

       curr_min=min(curr_min+a[i],a[i]);
       min_so=min(min_so,curr_min);
     }
     if(min_so==sum){
       res=max_so;
     }
     else{
         res=max(max_so,sum-min_so);
     }
     cout<<res;
    }

    return 0;
}