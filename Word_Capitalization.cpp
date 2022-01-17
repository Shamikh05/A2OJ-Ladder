#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        string s;
        cin >> s;

        if(islower(s[0]))
                s[0] = toupper(s[0]);

        cout << s << endl;
        
        return 0;
}
