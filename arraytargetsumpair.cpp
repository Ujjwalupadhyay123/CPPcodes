#include<iostream>
#include<algorithm>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	int t;
	cin>>t;
	int i=0,j=n-1;
	while(i<j){
		if(a[i]+a[j]<t){
			++i;
		}
		else if (a[i]+a[j]>t){
			--j;
		}
		else{
			cout<<a[i]<<" "<<"and"<<" "<<a[j]<<endl;
			++i;
			--j;
		}
	}
	
	return 0;
}