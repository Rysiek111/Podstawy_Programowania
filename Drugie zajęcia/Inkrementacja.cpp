#include <iostream>

using namespace std;



int main()
{
    int x,y;

    x=1;
    cout<<"x="<<x<<endl;
    cout<<"W rtakcie inkrementacji x="<<x++<<endl;
    cout<<"Po inkrementacji x="<<x<<endl;

    cout<<endl;

    x=1;
    cout<<"x="<<x<<endl;
    cout<<"W rtakcie inkrementacji x="<<++x<<endl;
    cout<<"Po inkrementacji x="<<x<<endl;

    cout<<endl;

    y=2;
    cout<<"y="<<y<<endl;
    cout<<"W rtakcie inkrementacji y="<<y--<<endl;
    cout<<"Po inkrementacji y="<<y<<endl;

    cout<<endl;

    y=2;
    cout<<"y="<<y<<endl;
    cout<<"W rtakcie inkrementacji y="<<--y<<endl;
    cout<<"Po inkrementacji y="<<y<<endl;

    return 0;
}
