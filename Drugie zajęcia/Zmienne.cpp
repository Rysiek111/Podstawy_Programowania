#include <iostream>

using namespace std;



int main()
{
    int x,y;
    x=y=5;

    cout<<"x="<<x<<endl;
    x=x+1; //Tradycyjny zapis
    cout<<"x="<<x<<endl;
    x+=1; //Łączony operator przypisania
    cout<<"x="<<x<<endl;
    ++x; //Operator postinkrementacji
    cout<<"x="<<x<<endl;
    x++; //Operator preinkrementacji
    cout<<"x="<<x<<endl;

    cout<<endl;

    cout<<"y="<<y<<endl;

    return 0;
}
