#include <iostream>

using namespace std;

int main()
{
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cout << "What is its street address?\n";
    char address[80];
    cin.get();
    cin.getline(address, 80);
    cout << "year built: " << year << endl;
    cout << "address: " << address << endl;
    cout << "Done!\n";

    return 0;

    
}