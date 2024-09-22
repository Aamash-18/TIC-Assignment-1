#include <iostream>
using namespace std;

void evenOdd(int roll)
{
    if (roll <= 0)
    {
        cout << "Please Write approprate Roll Number";
    }
    else if (roll % 2 == 0)
    {
        cout << "Your Roll Number is an Even Number";
    }
    else
    {
        cout << "Your Roll Number is an Odd Number";
    }
}

int main()
{
    system("cls");
    cout << "Please Enter Your Roll Number :-- ";
    int roll;
    cin >> roll;
    evenOdd(roll);
}