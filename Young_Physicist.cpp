#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

        int n, x, y, z;
        cin >> n;

        int sum_x = 0;
        int sum_y = 0;
        int sum_z = 0;

        while(n--) {

                cin >> x >> y >> z;

                sum_x += x;
                sum_y += y;
                sum_z += z;

        }

        if(sum_x==0 && sum_y==0 && sum_z==0)
                cout << "YES" << endl;
        else
                cout << "NO" << endl;
}
