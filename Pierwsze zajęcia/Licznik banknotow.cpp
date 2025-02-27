#include <iostream>

using namespace std;

int main() {
    int x;

    cout<<"Podaj kwote w groszach: ";
    cin>>x;

    cout << "500zl: " << x/50000 << endl;
    x=x%50000;
    cout << "200zl: " << x/20000 << endl;
    x=x%20000;
    cout << "100zl: " << x/10000 << endl;
    x=x%10000;
    cout << "50zl: " << x/5000 << endl;
    x=x%5000;
    cout << "20zl: " << x/2000 << endl;
    x=x%2000;
    cout << "10zl: " << x/1000 << endl;
    x=x%1000;
    cout << "5zl: " << x/500 << endl;
    x=x%500;
    cout << "2zl: " << x/200 << endl;
    x=x%200;
    cout << "1zl: " << x/100 << endl;
    x=x%100;
    cout << "50gr: " << x/50 << endl;
    x=x%50;
    cout << "20gr: " << x/20 << endl;
    x=x%20;
    cout << "10gr: " << x/10 << endl;
    x=x%10;
    cout << "5gr: " << x/5 << endl;
    x=x%5;
    cout << "2gr: " << x/2 << endl;
    x=x%2;
    cout << "1gr: " << x << endl;

    return 0;
}
