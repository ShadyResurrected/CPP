#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    vector<char> list;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for(char ch : str){
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y'){
            list.push_back('.');
            list.push_back(ch);
        }
    }

    for(char ch : list){
        cout << ch ;
    }

    return 0;
}