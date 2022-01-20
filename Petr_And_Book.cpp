#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int n;
        cin >> n;

        vector<int> pagesPerDay(7,0);

        for(int i=0;i<7;++i) {

                int pages;
                cin >> pages;

                pagesPerDay[i] = pages;
        }

        int day = 1;

        while(n>0) {

                if(day>7) {
                        day = 1;
                }

                n -= pagesPerDay[day-1];
                day++;
        }

        cout << day - 1 << endl;

        return 0;
}
