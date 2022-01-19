#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int n;
        cin >> n;

        vector<pair<int,int> > v;

        for(int i=0;i<n;++i) {

                int x, y;
                cin >> x >> y;

                v.push_back({x,y});
        }

        int count = 0;

        for(int i=0;i<n;++i) {

                int x = v[i].first;
                int y = v[i].second;

                bool lowN = 0;
                bool upperN = 0;
                bool leftN = 0;
                bool rightN = 0;

                for(int j=0;j<n;++j) {

                        if(i!=j) {

                                if(v[j].first==x) {

                                        if(v[j].second < y) lowN = 1;
                                        if(v[j].second > y) upperN = 1;
                                }

                                if(v[j].second==y) {

                                        if(v[j].first < x) leftN = 1;
                                        if(v[j].first > x) rightN = 1;
                                }
                        }

                }

                if(lowN and upperN and leftN and rightN) count++;

        }

        cout << count << endl;

        return 0;
}
