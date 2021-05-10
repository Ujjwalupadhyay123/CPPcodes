#include<iostream>
#include<algorithm>
using namespace std;
void Insertionsort(long long int a[],long long int n){
    for(long long int i=1;i<n;++i){
          long long int current=a[i];
          long long int j=i-1;
        for(;j>=0&&a[i]>current;--j){
           a[j+1]=a[i];
        }
        a[j+1]=current;
    }
    for(int i=0; i<n; i++){
        cout<<a[i];
    }
}
int main(){
    long long int n;
    cin >> n;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Insertionsort(a,n);
    return 0;
}