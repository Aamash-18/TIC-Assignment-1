#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int marks;
    cout << "Enter your Marks :- ";
    cin >> marks;
    if (marks > 100 || marks < 0)
    {
        cout << "Please Enter approprate Marks";
    }
    else if (marks > 90)
    {
        cout << "Your Grade is O";
    }
    else if (marks > 80)
    {
        cout << "Your Grade is A";
    }
    else if (marks > 70)
    {
        cout << "Your Grade is B";
    }
    else if (marks > 50)
    {
        cout << "Your Grade is C";
    }
    else if (marks > 35)
    {
        cout << "Your Grade is D";
    }
    else if (marks < 35)
    {
        cout << "Your Are Failed ";
    }
}