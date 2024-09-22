#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout << "Enter Value of N :- ";
    cin >> n;
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (i % 2 == 1)
            {
                if (i == 1)
                {
                    if (j % 4 != 0 && j % 2 == 0)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                else
                {
                    if (j % 4 == 0)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            else
            {
                if (j % 2 == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

/*


  *
*   *    *
       *

*/
