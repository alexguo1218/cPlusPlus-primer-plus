#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    // float定点显示6位小数
    cout << (9/5) << endl;
    cout << (9.0/5.0) << endl;
    cout << (9.0/5) << endl;
    cout << (1e7/9.0) << endl;
    cout << (1e7f/9.0f) << endl;

    return 0;
}
