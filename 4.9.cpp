#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;
int main()
{
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    str1 = str2;
    strcpy(charr1, charr2);
    cout << str1 << " " << charr1 << endl;

    str1 += " paste";
    strcat(charr1, " juice");
    cout << str1 << " " << charr1 << endl;

    strcat(charr1, charr2);
    cout << charr1 << endl;

    int len1 = str1.size();
    int len2 = strlen(charr1);
    cout << "The string " << str1 << " contains " << len1 << " characters.";
    cout << "The string " << charr1 << " contains " << len2 << " characters.";

    return 0;

}