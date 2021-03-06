#include<iostream>
using namespace std;
int main(){
  int min,max,step;
cin>>min;
cin>>max;
cin>>step;
while(min<=max){
  int x=(5*(min-32))/9;
  cout<<min<<" "<<x<<endl;
  min+=step;
 }
  return 0;
}
