#include <iostream>
#include <string>
using namespace std;

int main()
{
    int s, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        cin >> s;
        string str = "";
        for (int i = 9; i > 0; i--)
        {
            if (s >= i)
            {
                str += to_string(i);
                s -= i;
            }
        }
        if (s > 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = str.length() - 1; i >= 0; i--)
            {
                cout << str[i];
            }
            cout << endl;
        }
    }
    return 0;
}
