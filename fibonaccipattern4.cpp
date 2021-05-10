#include<iostream>
using namespace std;
int main()
{
int N,i,j,b=1,a=0,sum=0;
cin>>N;
for(i=1;i<=N;i++)
{
for(j=1;j<=i;j++)
{
    cout<<a<<"  ";
    sum=a+b;
    a=b;
    b=sum;

}
cout<<endl;
}
}
