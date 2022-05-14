#include <algorithm>
#include <string>
#include <set>
#include <iostream>
using namespace std;
set<char> chars;

int main()
{
    string str;
    cin >> str;
    str.erase(
        remove_if(
            str.begin(),
            str.end(),
            [&chars] (char i) {
                if (chars.count(i)) { return true; }
                chars.insert(i);
                return false;
            }
        ),
        str.end()
    );
    if(str.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}
