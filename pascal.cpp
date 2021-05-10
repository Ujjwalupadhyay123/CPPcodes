#include<iostream>
using namespace std;
int main()
{
int n, c = 1, x, i, j;
cin >> n;

for(i=0; i<n; i++)
{
// for(x=1; x <= n-i; x++)
// cout << " " ;

for(j=0; j <= i; j++)
{
if (j==0 || i==0)
c = 1;
else
c = c*(i-j+1)/j;

cout << c << " ";
}
cout << endl;

}

return 0;
}
