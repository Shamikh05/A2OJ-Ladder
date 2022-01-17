#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        unordered_map<int,int> mp;

        int n;
        cin >> n;

        vector<int> v(n,0);

        for(int i=0;i<n;++i) {
                int num;
                cin >> num;
                v[i] = num;
                mp[num] = i;
        }

        int q;
        cin >> q;

        int vasya = 0;
        int petya = 0;

        for(int i=0;i<q;++i) {

                int num;
                cin >> num;

                int idx = mp[num];

                vasya += (idx-0+1);
                petya += (n-idx);
        }

        cout << vasya << " " << petya << endl;

        return 0;
}
