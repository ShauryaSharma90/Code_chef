#include <iostream>
using namespace std;
void solve(int a){
    int c = a/100+a%100;
    if(c<=10){
        cout << c << endl;
    }
    else{
        cout << -1 << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        solve(a);
    }
	return 0;
}
