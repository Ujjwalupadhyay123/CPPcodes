#include<iostream>
using namespace std;
float sqrt(int x)
{
        int prev,k = 0;
        int kmax = 1000;
        float s = 1;
        for(k=0;k<kmax;k++)
        {
                prev = s;
                s = (s + x/s)/2;
                if(prev == s)
                {
                        break;
                }
        }
        return s;
}
int main(){
 cout<<sqrt(17);

  return 0;
}
