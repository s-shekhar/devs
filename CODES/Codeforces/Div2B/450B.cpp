#include<iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int ans[] = {x-y, x, y, y-x, -x, -y};
    int n;
    cin >> n;
    cout << (ans[n%6]%1000000007 + 1000000007) % 1000000007;
    return 0;
}
