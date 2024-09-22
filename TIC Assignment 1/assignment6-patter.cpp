#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout << "Enter Value for N :- ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}