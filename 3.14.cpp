#include <iostream>
using namespace std;
int main()
{
    int auks, bats, coots;
    auks = 19.99 + 11.99;
    cout << auks << endl;
    bats = (int)19.99 + (int)11.99;
    cout << bats << endl;
    coots = int(19.99) + int(11.99);
    cout << coots << endl;
    char ch = 'E';
    cout << ch << endl;
    cout << int(ch) << endl;
    cout << static_cast<int>(ch) << endl;
    
    return 0;
    
}