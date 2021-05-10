#include <iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
     int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int c=a[0],t=a[0];
    for(int i=1;i<n;++i){
        c=max(a[i],c+a[i]);
        t=max(c,t);
    }
    cout<<t<<endl;
	}
    
    return 0;
}