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
		// a[i]*=-1;
		sum+=a[i];
    }
	if(n==1){
		cout<<a[0]<<endl;
	}
	else{
     int curr_max=a[0],max_so=a[0],curr_min=a[0],min_so=a[0];
     for(int i=1;i<n;++i){
       curr_max=max(curr_max+a[i],a[i]);
       max_so=max(max_so,curr_max);
	   curr_min=min(curr_min+a[i],a[i]);
	   min_so=min(min_so,curr_min);
     }
     if(max_so>0){
		 res=max(sum-min_so,max_so);
	 }
	 else{
		 res=max_so;
	 }
     cout<<res<<endl;
	}
    
    }

    return 0;
}