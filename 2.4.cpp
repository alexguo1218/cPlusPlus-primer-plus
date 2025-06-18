#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double area;//定义函数area
    cout << "Enter  the floor area, in square feet, of your home: ";//提示作用
    cin >> area;//输入房屋面积
    double side;//定义函数side
    side = sqrt(area);//初始化赋值side函数
    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
    cout << "How fascinating!" << endl;

    return 0; //程序结束
}
