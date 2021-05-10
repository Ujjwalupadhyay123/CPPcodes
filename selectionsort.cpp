#include<iostream>
#include<algorithm>
using namespace std;
void Selectionsort(long long int a[],long long int n){
    for(long long int i=0;i<n-1;++i){
          long long int min=i;
        for(long long int j=i+1;j<n;++j){
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[i],a[min]);
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
    Selectionsort(a,n);
    return 0;
}