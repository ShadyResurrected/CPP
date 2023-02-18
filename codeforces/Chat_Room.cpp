#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    queue<char> q;

    // inserting 'hello'
    q.push('h');
    q.push('e');
    q.push('l');
    q.push('l');
    q.push('o');

    for(int i = 0;i < str.length(); i++){
        if(q.front() == str[i]) q.pop();
    }

    if(q.empty()) cout << "YES";
    else cout << "NO";
    return 0;
}