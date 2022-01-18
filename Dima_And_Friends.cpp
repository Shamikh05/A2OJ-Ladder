#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int n;
        cin >> n;

        int sum = 0;

        for(int i=0;i<n;++i) {

                int num;
                cin >> num;

                sum += num;
        }

        int i = 1;

        int dima_num = 0;
        int count = 0;

        while(dima_num <= 5) {

                if(i > sum) {

                        dima_num = i - sum;

                        if(dima_num <= 5)
                                count++;
                }

                i += n + 1;
        }

        cout << 5 - count << endl;

        return 0;
}
