#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    long long width = n % a != 0 ? n / a + 1 : n / a;

    long long height = m % a != 0 ? m / a + 1 : m / a;

    long long res = height * width;

    cout << res << endl;

    return 0;
}