#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;++i){
		int l=0,h=n-1;
		while(l<=h){
			swap(a[i][l],a[i][h]);
			++l;
			--h;
		}
	}
	int b[n][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			b[j][i]=a[i][j];
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}