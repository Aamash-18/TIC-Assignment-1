#include <bits/stdc++.h>
using namespace std;

int nod(int num)
{
    int dig = 0;
    while (num)
    {
        dig += 1;
        num = num / 10;
    }
    return dig;
}

void func(int dig, int num)
{
    int firstdigit = 0;
    int middledigit = 0;
    int lastdigit = 0;
    if (dig == 1)
    {
        lastdigit = num;
    }
    else if (dig == 2)
    {
        lastdigit = num % 10;
        num = num / 10;
        middledigit = num;
    }
    else if (dig == 3)
    {
        lastdigit = num % 10;
        num = num / 10;
        middledigit = num % 10;
        num = num / 10;
        firstdigit = num;
    }
    cout << "You have " << firstdigit << " Bags" << endl;
    cout << "You have " << middledigit << " Books" << endl;
    cout << "You have " << lastdigit << " Pens" << endl;
    int most = firstdigit;
    int item = 1;
    if (middledigit > most)
    {
        most = middledigit;
        item = 2;
    }
    if (lastdigit > most)
    {
        most = lastdigit;
        item = 3;
    }
    switch (item)
    {
    case 1:
        cout << "Among these Maximum is Bag";
        break;
    case 2:
        cout << "Among these Maximum is Books";
        break;
    case 3:
        cout << "Among these Maximum is pens";
        break;

    default:
        break;
    }
}

int main()
{
    system("cls");
    int roll;
    cout << "Enter Your Roll Number :- ";
    cin >> roll;
    int dig = nod(roll);
    func(dig, roll);
}