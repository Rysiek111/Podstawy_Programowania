#include <iostream>


using namespace std;

main()
{
    const int n=10;
    double w[n];

    for(int i=0; i<=n-1; i++)
    {
        cout<<"w["<<i<<"]= ";
        cin>>w[i];
    }
/////////////////////////////////////////

/////////////////////////////////////////
    for(int i=0; i<=n-1; i++)
        cout<<"w["<<i<<"]= "<<w[i]<<", ";

}
