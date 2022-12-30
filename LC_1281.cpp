#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp;
    int prod = 1;
    int sum = 0;
    while (n != 0)
    {
        temp = n % 10;
        prod = prod * temp;
        sum = sum + temp;
        n = n / 10;
    }
    int result = prod - sum;
    cout << result;
}