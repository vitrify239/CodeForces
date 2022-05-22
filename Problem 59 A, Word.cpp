#include <bits/stdc++.h>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    string str1;
    int upper = 0, lower = 0;
    cin >> str1;
    for(int i = 0; i < str1.size(); i++){
        if(isupper(str1[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper > lower){
        char str2;
        for(int i = 0; i < str1.size(); i++){
            str2 = toupper(str1[i]);
            cout << str2;
        }
        }else{
            char str2;
            for(int i = 0; i < str1.size(); i++){
                str2 = tolower(str1[i]);
                cout << str2;
            }
        }
        return 0;
    }



