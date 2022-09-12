#include <iostream>
 
using namespace std;
 
int main()
{
    int n,c = 0,sum = 0;
    int i = 0;
    int arr[100000];
    cin >> n;
    for(i=0; i < n; i++){
        cin >> arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            sum++;
        }
    }
    cout << sum;
    return 0;
}
