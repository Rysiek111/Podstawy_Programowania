#include <iostream>

using namespace std;

int main() {
    double x, y;
    cout<<"Ten program obliczy pole i obwod prostokata"<<endl;

    cout<<"Podaj dlugosc jednego boku: ";
    cin>>x;

    cout<<"Podaj dlugosc drugiego boku: ";
    cin>>y;

    cout<<"Pole wynosi: " << x*y <<endl;
    cout<<"Obwod wynosi: " << 2*(x+y) <<endl;

    return 0;
}