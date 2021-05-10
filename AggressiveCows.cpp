#include<iostream>
#include<algorithm>
using namespace std;
bool check_cow(int mid,int *x,int n, int c){
	int temp=1, pos=x[0];
	for(int i=1;i<n;++i){
        if(mid<=(x[i]-pos)){
			if(++temp==c){
				return true;
			}
			pos=x[i];
		}
	}
	return false;
}
int main() {
	int n,c;
	cin>>n>>c;
	int x[n];
	for(int i=0;i<n;++i){
		cin>>x[i];
	}
	sort(x,x+n);
int l=0,h=x[n-1],mid,index=0;
	while(l<=h){
		mid=(l+h)/2;
		if(check_cow(mid,x,n,c)){
			l=mid+1;
			index=mid;
		}
		else{
			h=mid-1;
		}
	}
	cout<<index<<endl;
	return 0;
}