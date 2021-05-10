#include<iostream>
using namespace std;
bool checksum(int * aptr,int i,int n,int s,int c){
if(i==n){
	if(s==0&&c>0){
		return true;
	}
	else{
		return false;
	}
}

return checksum(aptr,i+1,n,s+aptr[i],c+1)||checksum(aptr,i+1,n,s,c);
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int * aptr=new int[n];
		for(int i=0;i<n;++i) cin>>aptr[i];
		
		if(checksum(aptr,0,n,0,0)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}