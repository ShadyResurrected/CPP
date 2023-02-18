#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    unordered_map<int, int> umap = {{1, 0},{2, 0},{3, 0},{4, 0}};
    for (int i = 0; i < N; i++)
    {   
        int num;
        cin >> num;
        umap[num] += 1;
    }

    int groups = 0;

    // combining 4
    groups += umap[4];

    // combining 3
    groups += umap[3];

    umap[1] -= umap[3];
    if(umap[1] < 0) umap[1] = 0;

    // combining 2
    if(umap[2] % 2 == 0){
        umap[2] /= 2;
        groups += umap[2];
    }else{
        umap[2] = umap[2]/2 + 1;
        groups += umap[2];

        umap[1] -= 2;
        if(umap[1] < 0) umap[1] = 0;
    }

    // combining 1
    umap[1] = ceil(umap[1]/4.0);
    groups += umap[1];


    cout << groups;
    return 0;
}