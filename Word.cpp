#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        string s;
        cin >> s;

        int n = s.size();

        int upperCase = 0;
        int lowerCase = 0;

        for(int i=0;i<n;++i) {
                if(isupper(s[i])) upperCase++;
                else lowerCase++;
        }

        if(lowerCase < upperCase) {

                for(int i=0;i<n;++i) {
                        if(islower(s[i]))
                                s[i] = toupper(s[i]);
                }

        }
        else {
                for(int i=0;i<n;++i) {
                        if(isupper(s[i]))
                                s[i] = tolower(s[i]);
                }
        }

        cout << s << endl;

        return 0;
}
