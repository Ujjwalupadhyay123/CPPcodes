#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<(n+1)/2;++i){   //upper
    for(int j=2;j<n-(2*i-1);++j){  //spaces
      cout<<" "<<" ";
    }
    int x=i+1;
    for(int j=0;j<=i;++j){  //left
      cout<<x<<" ";
      --x;
    }
    for(int k=0;k<2*i-1&&i>0;++k){  //spaces
      cout<<" "<<" ";
    }
    ++x;
    for(int k=0;k<=i&&i>0;++k){    //right
      cout<<x<<" ";
      ++x;
    }
    for(int j=2;j<n-(2*i-1);++j){  //spaces
      cout<<" "<<" ";
    }

      cout<<endl;
  }
  for(int i=0;i<(n-1)/2;++i){   //lower
       for(int j=0;j<=2*i+1;++j){  //spaes
         cout<<" "<<" ";
       }
       int x=(n-1)/2-i;
       for(int k=0;k<(n-1)/2-i;++k){   //left
         cout<<x<<" ";
         --x;
       }
       int k;
       if((n/2)%2==0) k=0;
       else k=1;
       for(;k<=n/2-2*i;++k){       //spaces
         cout<<" "<<" ";
       }
       ++x;
       for(int k=0;k<(n-1)/2-i&&i<(n-1)/2-1;++k){  //right
         cout<<x<<" ";
         ++x;
       }
       for(int j=0;j<=2*i+1;++j){     //spaces
         cout<<" "<<" ";
       }
    cout<<endl;
  }

  return 0;
}
