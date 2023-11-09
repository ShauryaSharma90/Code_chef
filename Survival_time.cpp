#include <iostream>
using namespace std;
int solve(int x, int y, int z){
    cout << (x/(5*y))+z << endl;
    return 0;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        solve(x,y,z);
    }
	return 0;
}
