/*
Przepisać folię z wykładu z programem szukającym minimum tablicy jednowymiarowej.
W następnej kolejności zmodyfikować program,
żeby równocześnie z minimum komputer znajdował maksimum tablicy.
W rozwiązaniu nie można stosować dodatkowych pętli.
*/
#include <iostream>
using namespace std;

main()
{
    const int n=5;
    double w[n];
    int i;

    for(i=0; i<=n-1; i++){
         cout<<"w["<<i<<"]= ";
        cin>>w[i];
        }

    //szukanie minimum
    double min=w[0],max=w[0];
    for(i=1; i<=n-1; i++)
        if(w[i]<min) min=w[i];
        else if(w[i]>max)
            max=w[i];

    cout<<"min="<<min<<endl;
    cout<<"max="<<max;

}
