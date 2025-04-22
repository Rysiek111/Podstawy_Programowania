#include <iostream>
using namespace std;

 const int nmax=20;

 void wpisz(double a[][nmax], int w,int k)
 {
    cout<<"Podaj elementy macierzy:"<<endl;
    for (int i=0;i<=w-1;i++)
        for (int j=0;j<=k-1;j++)
        {
            cout<<"["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
 }

 void wypisz (const double a[][nmax], int w,int k)
 {
    for (int i=0;i<=w-1;i++)
    {
        for(int j=0;j<=k-1;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }


 }
 void suma (const double a[][nmax],
            const double b[][nmax]
                  double c[][namx],int w,int k)
{
    for(int i=0;i<=w-1;i++)
        for(int j=0;j<=k-1;j++)
            c[i][j]=a[i][j]+b[i][j];
}

void iloczyn (const double a[][nmax],
              const double b[][nmax],
                    double c[][nmax],int w,int k,int l)
{
    for(int i=0;i<=w-1;i++)
        for(int j=0;j<=k-1;j++)
        {
            c[i][j]=0;
            for(int o=0;o<=l-1;o++)
                c[i][j]+=a[i][o]*b[o][j];
        }
}


main()
{
    double m1 [nmax][nmax],m2[nmax][nmax],m3[nmax][nmax];
    int w,k,l;
    cout<<"Sprawdzenie sumowania:"<<endl;
    cout<<"Podaj w:";  cin>>w;
    cout<<"Podaj k:";  cin>>k;

    wpisz (m1,w,k);
    wpisz (m2,w,k);
    suma (m1.m2,w,k);
    wypisz(m3,w,k);

    cout<<"Sprawdzenie mnozenia:"<<endl;
    cout<<"POdaj w:"  cin>>w;
    cout<<"Podaj k:";  cin>>k;
    cout<<"Podaj l:";  cin>>l;

    wypisz (m1,w,1);
    wypisz(m2,1,k);
    iloczyn (m1,m2,m3,w,k,l);
    wypisz (m3,w,k);
}

