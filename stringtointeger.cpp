#include<iostream>

using namespace std;

int convert(string s,int x){
	if(x==0){
		return 0;
	}
	
	return convert(s,x-1)*10+(s[x-1]-'0');
}
int main() {
	string s;
	cin>>s;
	int x=s.length();
	int z=convert(s,x);
	cout<<z<<endl;
	return 0;
}