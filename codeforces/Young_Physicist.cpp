#include<bits/stdc++.h>
using namespace std;

int main(){
    int times;
    cin >> times;
    int arr[3];
    memset(arr, 0, sizeof(arr));
    while(times-- > 0){
        for(int i = 0;i < 3; i++){
            int num;
            cin >> num;
            arr[i] += num;
        }
    }

    if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0) cout << "YES";
    else cout << "NO";

    return 0;
}