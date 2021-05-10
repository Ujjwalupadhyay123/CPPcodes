#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int a,b,d=INT_MIN;
    a=min(a,b);
    b=max(a,b);
    d=0;

    while(a<=b){
      d=max(a^b,d);
      ++a;
    //   --b;
    
    }
    cout<<d<<endl;
    return 0;
}