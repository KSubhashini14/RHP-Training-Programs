// to find the length of the longest substring which 
//contains equal no oof 0's and 1's

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int n = s.length();
    int maxLen = 0;

    for(int i = 0; i < n; i++)
    {
        int zeros = 0;
        int ones = 0;

        for(int j = i; j < n; j++)
        {
            if(s[j] == '0')
                zeros++;
            else
                ones++;

            if(zeros == ones)
            {
                int len = j - i + 1;

                if(len > maxLen)
                    maxLen = len;
            }
        }
    }

    cout << "Length of the longest substring is: "
         << maxLen << endl;

    return 0;
}