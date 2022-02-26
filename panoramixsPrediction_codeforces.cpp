#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
           return false;

    return true;
}

int nextPrime(int N)
{
    int prime = N;
    bool found = false;
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
    return prime;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int prime = n;
    if (m < 3)
    {
        cout << "NO";
        return 0;
    }
    int checker = nextPrime(n);
    if(checker == m)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
