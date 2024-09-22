#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int roll;
    cout << "Enter Your Roll Number :- ";
    cin >> roll;
    int step = 0;
    int num = 1;
    int i = 2;
    while (num <= roll)
    {
        step += 1;
        num *= i;
        i++;
    }
    cout << "Number of Steps to cross Your Roll Number " << step;
}