#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    long long mid1 = max((a+b)*c,a+(b*c));
    long long mid2 = max((a*b)+c,a*(b+c));
    long long mid3 = a * b * c;
    long long mid4 = a + b + c;

    cout << max(max(mid1,mid2),max(mid3,mid4));

    return 0;
}