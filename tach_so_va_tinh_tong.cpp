#include <iostream>
using namespace std;

int findSum(string str)
{

    int sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            sum = sum + (str[i] - 48);
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = i + 1; j < str.size(); j++)
            {
                if (str[i] > str[j])
                {
                    char k = str[i];
                    str[i] = str[j];
                    str[j] = k;
                }
            }
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] < '0' || str[i] > '9')
                cout << str[i];
        }
        cout << findSum(str);
        cout << endl;
    }
    return 0;
}