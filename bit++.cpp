<<<<<<< HEAD
#include <iostream>
#include <string>

int main()
{
    int n, x(0);
    std::cin >> n;

    std::string s;
    while (n--)
    {
        std::cin >> s;
        if(s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
    std::cout << x << std::endl;
    return 0;
=======
#include <iostream>
#include <string>

int main()
{
    int n, x(0);
    std::cin >> n;

    std::string s;
    while (n--)
    {
        std::cin >> s;
        if(s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
    std::cout << x << std::endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}