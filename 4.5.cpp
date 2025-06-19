#include <iostream>

using namespace std;

int main()

{const int Arsize = 20;
    char name[Arsize]; 
    char dessert[Arsize];
    cout << "enter your name: ";
    cin.get(name, Arsize);
    cin.get();
    cout << "enter your favorite dessert: ";
    cin.get(dessert, Arsize);
    cout << "I have some dessert " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}