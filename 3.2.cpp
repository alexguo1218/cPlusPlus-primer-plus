#include <iostream>
#include <climits>
using namespace std;
#define ZERO 0

int main()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "sam = " << sam << endl;
    cout << "sue = " << sue << endl;
    
    sam = sam + 1;
    sue = sue + 1;

    cout << "sam = " << sam << endl;
    cout << "sue = " << sue << endl;

    sam = ZERO;
    sue = ZERO;

    sam = sam - 1;
    sue = sue - 1;

    cout << "sam = " << sam << endl;
    cout << "sue = " << sue << endl;

    return 0;
}