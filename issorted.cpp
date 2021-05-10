#include<iostream>
using namespace std;
bool issorted(int *a,int n){
	if(n==1){
		return true;
	}
	if(issorted(a,n-1)&&a[n-1]>=a[n-2]){
		return true;
	}

	return false;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	if(issorted(a,n)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}