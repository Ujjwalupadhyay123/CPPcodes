#include<iostream>
using namespace std;
void shift(string s,int i,int cnt){
 if(i>=s.length()){
	 while(cnt--)
	 cout<<"x";
	 return;
 }
 if(s[i]=='x') cnt++;
   else  cout<<s[i];

   shift(s,i+1,cnt);
}
int main() {
	string s;
	cin>>s;
	shift(s,0,0);
	return 0;
}