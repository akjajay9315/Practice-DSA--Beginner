#include <iostream>
#include <string.h>
using namespace std;

char getMaxOccLetter(string s)
{

    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        if (ch >= 'A' && ch <= 'Z')
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'A' + ans;
    return finalans;
}

int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout << getMaxOccLetter(s);

    return 0;
}
// cin.getline in string-----read 
// custom delimeter--------read