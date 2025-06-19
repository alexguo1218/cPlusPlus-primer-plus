#include <iostream>

int main()
{
    using namespace std;
    const int Arsize = 20;

    char name[Arsize];
    char dessert[Arsize];
    cout << "enter your name: \n";
    cin >> name;
    cout << "enter your favorite dessert: \n";
    cin >> dessert;

    cout << "I have some dessrt, " << dessert;
    cout << " for you " << name << ".\n"; 

    return 0;
}