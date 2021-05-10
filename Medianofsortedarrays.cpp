#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<n;++i){
		cin>>b[i];
	}
	int x=2*n;
	int c[x]={0};
	int k=0,i=0,j=0;
	while(k<x){
		if(a[i]<b[j]){
			c[k]=a[i];
			++i;
			++k;
		}
		else if(a[i]>b[j]){
			c[k]=b[j];
			++j;
			++k;
		}
		    else{
				c[k]=a[i];
				++i;
				++j;
				++k;
			}
	}
	cout<<c[k/2-1];
	return 0;
}