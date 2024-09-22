#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int radius;
    cout << "Enter Your Roll :- ";
    cin >> radius;
    int temp = radius;
    radius = radius - 3;
    int totalnumberofcicle = 0;
    while (radius >= 3)
    {
        float rollcircumfrence = 2 * 3.14 * radius;
        int numberofcircle = rollcircumfrence / 6;
        totalnumberofcicle += numberofcircle;
        radius -= 6;
    }

    cout << "Total Number of Circle of 3 unit radius in " << temp << "unit radius Circle :- " << totalnumberofcicle;

    return 0;
}