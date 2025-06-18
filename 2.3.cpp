#include <iostream>

int main(void)
{
    using namespace std;
    // using std::cin:
    // using std::cout:
    // using std::endl:

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more carrots.";
    carrots = carrots + 2;
    cout << "Okay, now you have " << carrots << " carrots." << endl;

    return 0;
}