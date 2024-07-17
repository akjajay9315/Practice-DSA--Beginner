#include <iostream>
using namespace std;

int main()
{
    int n;
    char A[n];
    cin >> A;
    int i;
    for (i = 0; A[i] != 0; i++)
    {

        if (A[i] >= 'A' && A[i] <= 'Z')
        {
            A[i] = A[i] + 32;
        }
        else if (A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] = A[i] - 32;
        }
    }
    cout << "The new string is " << A << endl;
    return 0;
}