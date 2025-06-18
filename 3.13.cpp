#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    float tree = 3;
    cout << tree << endl; 

    int guess (3.9999);
    cout << guess << endl;

    int debt = 7.2e12;
    // 赋值超过范围，结果将不确定
    cout << debt << endl;
}