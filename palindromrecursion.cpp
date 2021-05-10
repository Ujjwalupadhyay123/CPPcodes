#include<iostream>
using namespace std;
bool checkpalindrome(int *a,int i,int j){
//base case
if(i==j){
	return true;
}
if(a[i]!=a[j]){
	return false;
}

//recursive case
  
checkpalindrome(a,i+1,j-1);
return true;
  
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	if(checkpalindrome(a,0,n-1)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
	return 0;
}