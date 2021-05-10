#include<iostream>
#include<algorithm>
using namespace std;
void Bubblesort(long long int a[],long long int n){
    for(long long int i=0;i<n-1;++i){
        for(long long int j=0;j<n-i-1;++j){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    long long int n;
    cin >> n;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Bubblesort(a,n);
    return 0;
}