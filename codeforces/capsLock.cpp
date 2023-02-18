#include <bits/stdc++.h>
using namespace std;

void convertOpposite(string& str)
{
    int ln = str.length();
  
    // Conversion according to ASCII values
    for (int i = 0; i < ln; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }
}

int main()
{
    string str;
    cin >> str;

    int countU = 0;
    for(int i = 1;i < str.length(); i++){
        if(isupper(str[i])) countU++;
    }

    if ((isupper(str[0]) && countU == str.length()-1) || (islower(str[0]) && countU == str.length()-1))
    {
        convertOpposite(str);
    }

    cout << str;
    return 0;
}