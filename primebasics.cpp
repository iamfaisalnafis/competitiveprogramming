<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int number, repeater = 1, count = 0;
    cout << "Enter a number to check if it's Prime: ";
    cin >> number;

    for(int i = repeater; repeater <= number; repeater++)
    {
        if (number % repeater == 0)
        count++;
    }
    if (count == 2)
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Number is not Prime";
    }
    return 0;
=======
#include <iostream>
using namespace std;

int main()
{
    int number, repeater = 1, count = 0;
    cout << "Enter a number to check if it's Prime: ";
    cin >> number;

    for(int i = repeater; repeater <= number; repeater++)
    {
        if (number % repeater == 0)
        count++;
    }
    if (count == 2)
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Number is not Prime";
    }
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}