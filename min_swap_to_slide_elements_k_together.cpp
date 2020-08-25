#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 7, 9, 5, 8, 7, 4};
    int k = 5;
    int n = sizeof(a) / sizeof(a[0]);

    int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] <= k)
            ++count;

    int bad = 0;
    for (int i = 0; i < count; ++i)
        if (arr[i] > k)
            ++bad;

    int ans = bad;
    for (int i = 0, j = count; j < n; ++i, ++j)
    {

        if (arr[i] > k)
            --bad;

        if (arr[j] > k)
            ++bad;

        ans = min(ans, bad);
    }
    cout << ans;
}
