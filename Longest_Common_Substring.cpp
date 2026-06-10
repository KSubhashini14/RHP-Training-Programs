#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;

    // input the two strings 
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"Enter the second string: ";
    cin>>s2;

    // to find the length of the strings
    int n = s1.length();
    int m = s2.length();

    // creating an array
    int arr[100][100] = {0};
    int max = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                arr[i][j] = arr[i-1][j-1] + 1;
                if(arr[i][j] > max)
                {
                    max = arr[i][j];
                }
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }

    cout<<"Length of Longest Common Substring is: "<<max<<endl;

}
