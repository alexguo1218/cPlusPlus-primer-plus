#include <iostream>
using namespace std;

int main()
{
    float hats, heads;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    // 这行代码用于控制 cout 输出浮点数的格式。
    // cout.setf() 是 cout 对象的一个成员函数，用于设置格式标志。
    // ios_base::fixed 是一个格式标志，它指定使用定点表示法输出浮点数。
    // 这意味着输出将始终包含小数点，并且小数点后的位数由 precision() 函数控制 (默认为 6)。
    // ios_base::floatfield 是一个屏蔽位，用于选择浮点数的表示形式（定点或科学计数法）。
    // 使用 ios_base::fixed 作为第一个参数，ios_base::floatfield 作为第二个参数，可以确保程序使用定点表示。
    cin >> hats;
    cin >> heads;
    cout << hats << endl << heads << endl;
    cout << (hats + heads) << endl;
    cout << (hats - heads) << endl;
    cout << (hats * heads) << endl;
    cout << (hats / heads) << endl;
    return 0;
}