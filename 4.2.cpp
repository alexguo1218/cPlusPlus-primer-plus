#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    const int Size = 15;
    char name_1[Size];
    char name_2[Size] = "C++cowboy";
    cout << name_2;
    cout << "name: ";
    cin >> name_1;
    cout << "your name has " << strlen(name_1) << " letters. ";
    cout << "it stored in an array of " << sizeof(name_1) << " bytes.\n";
    cout << name_1[0] << "this is your first letter.";
    name_2[3] = '\0';
    cout << "Here are the first three letter of my name: " << name_2 << endl;
    

    return 0;
}