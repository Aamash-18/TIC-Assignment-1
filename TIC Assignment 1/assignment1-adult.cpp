#include <iostream>
using namespace std;

void adultorNot(int age)
{
    if (age < 0)
    {
        cout << "Please write an appropriate age";
    }
    else if (age < 18)
    {
        cout << "You are not an Adult";
    }
    else
    {
        cout << "Your are an Adult";
    }
}

int main()
{
    system("cls");
    cout << "Please Enter your Age:- ";
    int age;
    cin >> age;
    adultorNot(age);
}