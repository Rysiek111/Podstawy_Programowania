#include <iostream>

using namespace std;

int main()
{
    int x=5;
    int& referencja=x;

    cout<<"x="<<x<<", referencja="<<referencja<<endl;

    referencja=100;

    cout<<"x="<<x<<", referencja="<<referencja<<endl;

    return 0;
}
