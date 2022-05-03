#include <bits/stdc++.h>
using namespace std;

int main()
{
    int col, temp = 0;
    int n[10000];
    cin >> col;
    for(int i = 0; i < col; i++){
        cin >> n[i];
    }
    sort(n, n + col);
    for(int i = 0; i < col; i++){
        cout << n[i] << " ";
    } 
    
    return 0;
}
