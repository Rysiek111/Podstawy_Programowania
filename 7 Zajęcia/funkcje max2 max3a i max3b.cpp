#include <iostream>
using namespace std;

double max2(double x,double y)
{
   if(x>y)
      return x;
   else
      return y;
}

double max3a(double x,double y,double z)
{
   double tmp;
   if(x>y)
      tmp=x;
   else
      tmp=y;

   if(tmp>z)
      return tmp;
   else
      return z;
}

double max3b(double x,double y,double z)
{
   double tmp=max2(x,y);
   return max2(tmp,z);

   //return max2(max2(x,y),z);  //mozna i tak...
}

int main()
{
   double a,b,c;
   cout<<"Podaj a:"; cin>>a;
   cout<<"Podaj b:"; cin>>b;
   cout<<"Podaj c:"; cin>>c;


   cout<<"max2(a,b)="<<max2(a,b)<<endl;
   cout<<"max3a(a,b,c)="<<max3a(a,b,c)<<endl;
   cout<<"max3b(a,b,c)="<<max3b(a,b,c)<<endl;

   return 0; 
}
