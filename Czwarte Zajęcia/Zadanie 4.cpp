#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    for(double x=0; x<=3.140; x+=0.0001)
        cout <<"x"<<x<<"\tsin(x)"<<sin(x)<<endl;
    return 0;
}
