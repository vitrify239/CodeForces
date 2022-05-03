#include <iostream>
using namespace std;

int main()
{

    //O(n^2) time complexity
    int n, row, col, location;
    for(int i = 1; i <=5; i++){
        for(int j = 1; j <=5; j++){
            cin >> n;
            if(n == 1){
                row = i;
                col = j;
            }
        }
        location = abs(3 - rows) + abs(3 - col);
    }
    cout << location;
    return 0;
}
