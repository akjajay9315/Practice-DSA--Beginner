#include <iostream>
using namespace std;
// long long bcz of range of integer.....error aata
long long int integerpart(int n)
{

    int s = 0;
    int e = n;

    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// ---------------------------Precise-root not working----------

double Preciseroot(int n, int Precision, int intSqrt)
{

    double factor = 1;
    double ans = intSqrt;

    for (int i; i < Precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the no. : ";
    cin >> n;
    int intSqrt = integerpart(n);
    //  long double Sqrt  = Preciseroot(n, 3, intSqrt);
    cout << "The integer part of the square root of " << n << " is " << intSqrt << endl;
    cout << "The more precised square root of " << n << " is " << Preciseroot(n, 3, intSqrt);
    return 0;
}