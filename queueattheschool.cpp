<<<<<<< HEAD
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    for(int i = 0; i < t; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(s[j-1] == 'B' && s[j] == 'G')
            {
                swap(s[j-1], s[j]);
                j++;
            }
        }
    }
    cout << s;
    return 0;
=======
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    for(int i = 0; i < t; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(s[j-1] == 'B' && s[j] == 'G')
            {
                swap(s[j-1], s[j]);
                j++;
            }
        }
    }
    cout << s;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}