#include <iostream>
using namespace std;

const int nmax=20;

void wpisz(double a[][nmax], int w,int k)
{
    cout<<"Podaj elementy macierzy:"<<endl;
    for (int i=0; i<=w-1; i++)
        for (int j=0; j<=k-1; j++)
        {
            cout<<"["<<i+1<<"]["<<j+1<<"]=";
            cin>>a[i][j];
        }
}

void wypisz (const double a[][nmax], int w,int k)
{
    for (int i=0; i<=w-1; i++)
    {
        for(int j=0; j<=k-1; j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }


}
void suma (const double a[][nmax],
           const double b[][nmax],
           double c[][nmax],int w,int k)
{
    cout<<"SUMA"<<endl;
    for(int i=0; i<=w-1; i++)
        for(int j=0; j<=k-1; j++)
            c[i][j]=a[i][j]+b[i][j];
}

void iloczyn (const double a[][nmax],
              const double b[][nmax],
              double c[][nmax],int w,int k,int l)
{
    cout<<"ILOCZYN"<<endl;
    for(int i=0; i<=w-1; i++)
        for(int j=0; j<=k-1; j++)
        {
            c[i][j]=0;
            for(int o=0; o<=l-1; o++)
                c[i][j]+=a[i][o]*b[o][j];
        }
}

void zeruj(double a[][nmax],int w,int k)
{
    cout<<"ZERUJ"<<endl;
    for (int i=0; i<=w-1; i++)
        for (int j=0; j<=k-1; j++)
            a[i][j]=0;
}

void jednostkowa(double a[][nmax],int w)
{
    cout<<"JEDNOSTKOWA"<<endl;
    for (int i=0; i<=w-1; i++)
        for (int j=0; j<=w-1; j++)
            if(i==j)
                a[i][j]=1;
            else
                a[i][j]=0;
}

void transponuj(const double a[][nmax],double b[][nmax],int w, int k)
{
    cout<<"TRANSPONUJ"<<endl;
    for (int i=0; i<=w-1; i++)
        for (int j=0; j<=k-1; j++)
            b[j][i]=a[i][j];
}

int iledodatnich(const double a[][nmax],int w, int k)
{
    cout<<"iledodatnich"<<endl;
    int r=0;
    for (int i=0; i<=w-1; i++)
        for (int j=0; j<=k-1; j++)
        {
            if(a[i][j]>0)
                r++;
        }
    return r;
}

double sumael(const double a[][nmax],int w, int k)
{
    cout<<"sumael"<<endl;
    double suma=0;
    for (int i=0; i<=w-1; i++)
        for (int j=0; j<=k-1; j++)
        {
            suma+=a[i][j];
        }
    return suma;
}

main()
{
    double m1 [nmax][nmax],m2[nmax][nmax],m3[nmax][nmax];
    int w,k,l;
    cout<<"Sprawdzenie sumowania:"<<endl;
    cout<<"Podaj w:";
    cin>>w;
    cout<<"Podaj k:";
    cin>>k;
    cout<<"Podaj l:";
    cin>>l;

    wpisz(m1,w,k);
    cout<<endl;
    wpisz(m2,w,k);
    cout<<endl;
    cout<<"MACIERZ M1"<<endl;
    wypisz(m1,w,l);
    cout<<endl;
    cout<<"MACIERZ M2"<<endl;
    wypisz(m2,l,k);
    cout<<endl;
    suma(m1,m2,m3,w,k);
    cout<<endl;
    wypisz(m3,w,k);
    cout<<endl;
    iloczyn(m1,m2,m3,w,k,l);
    cout<<endl;
    wypisz(m3,w,k);
    cout<<endl;
    zeruj(m3,w,k);
    cout<<endl;
    wypisz(m3,w,k);
    cout<<endl;
    jednostkowa(m3,w);
    cout<<endl;
    wypisz(m3,w,k);
    cout<<endl;
    transponuj(m1,m3,w,k);
    cout<<endl;
    wypisz(m3,w,k);
    cout<<endl;
    transponuj(m2,m3,w,k);
    cout<<endl;
    wypisz(m3,w,k);
    cout<<iledodatnich(m1,w,k)<<endl;
    cout<<sumael(m1,w,k)<<endl;
    cout<<iledodatnich(m2,w,k)<<endl;
    cout<<sumael(m2,w,k)<<endl;
}
