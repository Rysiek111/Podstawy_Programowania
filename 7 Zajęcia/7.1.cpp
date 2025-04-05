#include <iostream>
using namespace std;
int czydzielnik(int i, int p , int q)
{
if(p%i==0 && q%i==0)
return 1;
else
return 0;
return p%i==0&&q%i==0;
}
int nwd(int p, int q)
{
int i=p<q?p:q;
if(p<q)
i=p;
else
i=q;
while(czydzielnik(i,p,q)==0) i--;
return i;
}
int lwd(int p, int q)
{
int min, l=0;
if(p<q)
min=p;
else
min=q;
for(int i=min; i>=1;i--)
if(czydzielnik(i,p,q)==1) l++;
return l;
}
int main()
{
cout<<czydzielnik(10,20,30)<<endl;
cout<<nwd(20,30)<<endl;
cout<<lwd(20,30)<<endl;
return 0;
}
