#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int row, col;

        for(int i=0;i<5;++i) {

                for(int j=0;j<5;++j) {

                        int num;
                        cin >> num;

                        if(num==1) {
                                row = i;
                                col = j;
                                break;
                        }
                }
        }

        int ans = 0;

        ans += abs(row - 2);
        ans += abs(col - 2);

        cout << ans << endl;

        return 0;
}
