#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        string s;
        cin >> s;

        int n = s.size();

        for(int i=0;i<n-1;++i) {

                if(s[i]=='-' and s[i+1]=='.') {
                        cout << "1";
                        i++;
                }
                else if(s[i]=='-' and s[i+1]=='-') {
                        cout << "2";
                        i++;
                }
                else
                        cout << "0";
        }

        if(s[n-1]=='.' and s[n-1]!='-')
                cout << "0";

        cout << endl;

        return 0;
}
