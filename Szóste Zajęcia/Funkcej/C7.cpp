/*
Napisac funkcję max2 zwracająca maksimum z dwuch paramertow.
*/
#include <iostream>

using namespace std;

double max2(double x,double y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    cout <<"max2"<< endl;
    return 0;
}
