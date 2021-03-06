#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c1,c2,c3,c4,n,m;

    int rick[1005],cab[1005];

    while(t--){
        cin>>c1>>c2>>c3>>c4;

        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>rick[i];
        }

        for(int i=0;i<m;i++){
            cin>>cab[i];
        }

        int rickp = 0;
        for(int i=0;i<n;i++){
            rickp += min(c1*rick[i],c2);
        }
        rickp = min(rickp,c3);

        int cabp = 0;
        for(int i=0;i<m;i++){
            cabp += min(c1*cab[i],c2);
        }
        cabp = min(cabp,c3);

        int Totalcost = min(c4,rickp+cabp);
        cout<<Totalcost<<endl;
    }
    return 0;
}
