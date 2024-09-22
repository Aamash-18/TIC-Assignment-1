#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int nofstudent;
    cout << "Enter Number of Students in your Class :- ";
    cin >> nofstudent;
    int desk;
    if (nofstudent % 3 == 0)
    {
        desk = nofstudent / 3;
    }
    else
    {
        desk = nofstudent / 3 + 1;
    }

    cout << "Minimum Number of Desk required to conduct class :- " << desk;
}