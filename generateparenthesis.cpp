#include<iostream>
using namespace std;
void printparenthesis(int n,int i,int open,int close){
	static char s[200];
	if(close==n){
		cout<<s<<endl;
		return;
	}



	else{
		if(open>close){
           s[i]=')';
		   printparenthesis(n,i+1,open,close+1);
		}

		if(open<n){
			s[i]='(';
			printparenthesis(n,i+1,open+1,close);
		}
	}
}
int main() {
	int n;
	cin>>n;
	printparenthesis(n,0,0,0);
	return 0;
}