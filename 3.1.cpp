#include <iostream>
#include <climits>

using namespace std;
int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_long_long = LLONG_MAX;

    cout << "int is " << sizeof (int) << " bytes." <<endl;
    cout << "short is " << sizeof n_short << " bytes." <<endl;
    cout << "long is " << sizeof (n_long) << " bytes." <<endl;
    cout << "long long is " << sizeof (long long) << " bytes." <<endl;


    cout << "Maximum value of int: " << endl;
    cout << "int: " << n_int << endl;
    cout << "Maximum value of short: " << endl;
    cout << "short: " << n_short << endl;
    cout << "Maximum value of long: " << endl;
    cout << "long: " << n_long << endl;
    cout << "Maximum value of long long: " << endl;
    cout << "long: " << n_long_long << endl;

    return 0;
}