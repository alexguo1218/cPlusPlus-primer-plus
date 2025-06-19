#include <iostream>

using namespace std;

int main()
{
    const int Arsize = 20;
    char name[Arsize]; 
    char dessert[Arsize];
    cout << "enter your name: ";
    cin.getline(name, Arsize);
    cout << "enter your favorite dessert: ";
    cin.getline(dessert, Arsize);
    cout << "I have some dessert " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;

}