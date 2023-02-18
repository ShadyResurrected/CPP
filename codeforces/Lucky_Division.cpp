#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[14];
    arr[0] = 4;
    arr[1] = 7;
    arr[2] = 44;
    arr[3] = 47;
    arr[4] = 74;
    arr[5] = 77;
    arr[6] = 444;
    arr[7] = 477;
    arr[8] = 447;
    arr[9] = 474;
    arr[10] = 777;
    arr[11] = 747;
    arr[12] = 774;
    arr[13] = 744;

    int flag = -1;

    for(int i = 0;i < 14; i++){
        if(N % arr[i] == 0){
            flag = 1;
            break;
        }
    }

    if(flag == -1) cout << "NO";
    else cout << "YES";

    return 0;
}