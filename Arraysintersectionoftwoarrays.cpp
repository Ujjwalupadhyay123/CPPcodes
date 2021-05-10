#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	long long int a[n],b[n];
	for(long long int i=0;i<n;++i){
		cin>>a[i];
	}
	for(long long int i=0;i<n;++i){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	long long int k=0,i=0,j=0;
	long long int c[1000000];

	while(i<n&&j<n){
		if(a[i]==b[j]){
			c[k]=a[i];
			++i;
			++j;
			++k;
		}
		else if(a[i]<b[j]){
               ++i;
		}
		     else{
				 ++j;
			 }
	}

	cout<<"["<<c[0]<<","<<" ";
	for(long long int i=1;i<k-1;++i){
		cout<<c[i]<<","<<" ";
	}
	cout<<c[k-1]<<"]"<<endl;
	return 0;
}