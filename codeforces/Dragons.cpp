#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

int main()
{
    int s, n;
    cin >> s >> n;
    priority_queue<pi, vector<pi>, greater<pi> > pq;
    while (n-- > 0)
    {
        int x, y;
        cin >> x >> y;
        pq.push(make_pair(x, y));
    }

    while (!pq.empty())
    {
        pair<int, int> top = pq.top();
        if (s > top.first)
        {
            s += top.second;
            pq.pop();
        }else break;
    }

    if (pq.empty())
        cout << "YES";
    else
        cout << "NO";
}