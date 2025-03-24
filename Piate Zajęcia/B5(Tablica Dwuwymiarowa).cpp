#include <iostream>

using namespace std;

int main()
{

    const int n=10,m=n;
    double a[n][m];
    int i,j;

    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    cout<<endl;

    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=m-1; j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }

    return 0;
}
