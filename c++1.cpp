#include <iostream>
using namespace std;

void wellcome(string name)
{
    cout << "wellcome " << name << "!" << endl;
}

int main()
{
    string userName;

    cout << "Enter your name: ";
    cin >> userName;

    wellcome(userName);

    return 0;
}