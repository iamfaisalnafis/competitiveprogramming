<<<<<<< HEAD
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n, m;
    cin >> n >> m;
    for (int i  = 0; i < n.length(); i++)
    {
        if(n[i] == m[i])
        {
            n[i] = '0';
        }
        else
        {
            n[i] = '1';
        }
    }
    cout << n << endl;
    return 0;
=======
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n, m;
    cin >> n >> m;
    for (int i  = 0; i < n.length(); i++)
    {
        if(n[i] == m[i])
        {
            n[i] = '0';
        }
        else
        {
            n[i] = '1';
        }
    }
    cout << n << endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}