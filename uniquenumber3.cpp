#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a,ones=0,twos=0;
   int common_bit_mask;
   for(int i=0; i<n; i++){
       cin>>a;
        twos = twos | (ones & a);
 
       
        ones = ones ^ a;
 
        common_bit_mask = ~(ones & twos);
 
        ones &= common_bit_mask;
        twos &= common_bit_mask;
        
 
    }
 
 cout<<ones;
   

    return 0;
}