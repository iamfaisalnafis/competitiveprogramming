#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float sum = 0, avg;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = sum / n;
    cout << fixed;
    cout.precision(4); 
    cout << avg << endl;
    return 0;
}