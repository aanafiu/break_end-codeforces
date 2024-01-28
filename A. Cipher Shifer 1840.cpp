
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;

        string ans = "";
        char c = s[0];
        for(int i = 1; i < len; i++)
        {
            if(s[i] == c)
            {
                ans += c;
                c = s[i + 1];
                i++;
            }
        }
        cout << ans << endl;

    }


}
