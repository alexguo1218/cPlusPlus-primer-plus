#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    const float million = 1.0e6;
    cout << "Tub = " << tub << endl;
    cout << ", a million tubs = " << tub * million << endl;
    cout << 10 * million * tub << endl;
    double mint = 10.0 / 3.0;
    cout << "Mint = " << mint << endl;
    cout << ", a million mints = " << mint * million << endl;

    return 0;
}