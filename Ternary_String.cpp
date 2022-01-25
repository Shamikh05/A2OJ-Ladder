#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int t;
        cin >> t;

        while(t--) {

                string s;
                cin >> s;

                int n = s.size();

                if(n<3) {
                        cout << "0" << endl;
                }
                else {
                        int prev = 0;
                        int cont = 1;
                        int ans =  n + 1;

                        for(int curr=1;curr<n-1;++curr) {

                                if(s[curr]==s[curr-1]) {

                                        if(curr-1 != prev)
                                                cont++;
                                        else
                                                prev++;
                                }

                                if(s[curr]!=s[prev] and s[curr]!=s[curr+1] and s[prev]!=s[curr+1]) {
                                        ans = min(ans,cont+2);
                                        cont = 1;
                                        prev = curr;
                                }
                                else if(s[curr+1]==s[prev]) {
                                        prev = curr;
                                        cont = 1;
                                }

                        }

                        if(ans==n+1)
                                cout << "0" << endl;
                        else
                                cout << ans << endl;
                }
        }

        return 0;
}
