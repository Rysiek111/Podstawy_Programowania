#include <iostream>
using namespace std;

double potega(double a,int b)
{
   double pot=1;
   for(int i=1;i<=b;i++)
      pot*=a;
   return pot;
}

double potega2(double a,int b)
{
	if(b==0)
	   return 1;
	else
	   return a*potega2(a,b-1);
}

int silnia(int n)
{
   int sil=1;
   for(int i=2;i<=n;i++)
      sil*=i;
   return sil;
}

int silnia2(int n)
{
   if(n==1)
     return 1;
   else
     return n*silnia2(n-1);
}

main()
{
   double a;
   int b,n;
   cout<<"Sprawdzanie potegowania:"<<endl;
   cout<<"Podaj a:";	cin>>a;
   cout<<"Podaj b:";    cin>>b;
   cout<<"Potega ="<<potega(a,b)<<endl;
   cout<<"Potega2="<<potega2(a,b)<<endl<<endl;
   cout<<"Sprawdzanie silni:"<<endl;
   cout<<"Podaj n:";    cin>>n;
   cout<<"Silnia ="<<silnia(n)<<endl;
   cout<<"Silnia2="<<silnia2(n)<<endl;

}

