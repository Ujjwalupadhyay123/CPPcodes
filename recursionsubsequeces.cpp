#include<iostream>
#include<cstring>
using namespace std;
int x=0;
void subsequences(string inp,string out){
	if(inp.empty()){
		cout<<out<<" ";
		x++;
		return;
	}
	subsequences(inp.substr(1),out);
	subsequences(inp.substr(1),out+inp[0]);
	
}
int main(){

	string inp;
	cin>>inp;
	string out="";
	subsequences(inp,out);
	
	cout<<endl;
    cout<<x<<endl;

	return 0;
}