#include<iostream>
using namespace std;
int digits(int n){
	if(n==0||n==1){
		return n;
	}

	return digits(n-1)+digits(n-2);
}
int main() {
	int t;
	cin>>t;
	int z=1;
	while(t--){
		int n;
		cin>>n;
		int x=digits(n+2);
		cout<<"#"<<z<<" : "<<x<<endl;
		++z;
	}
	return 0;
}