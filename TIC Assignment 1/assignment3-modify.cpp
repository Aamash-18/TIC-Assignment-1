#include <iostream>
using namespace std;

void modify(int myroll, int &num)
{
    int rem = num % 5;
    if (num <= myroll)
    {
        num += (5 - rem);
    }
    else if (num > myroll)
    {
        num -= rem;
    }
    cout << "Number after Modification :-- " << num;
}

int main()
{
    system("cls");
    int myroll, num;
    cout << "Please Enter Your Roll Number :-- ";
    cin >> myroll;
    cout << "Please Enter Any Number :-- ";
    cin >> num;
    cout << "Number before Modifictaion :-- " << num << endl;
    modify(myroll, num);
    return 0;
}