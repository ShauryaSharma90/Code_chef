#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int arrA[n],arrB[n];
        for(int i=0;i<n;i++){
            cin >> arrA[i];
        }
        int c = 0;
        for(int i=0;i<n;i++){
            cin >> arrB[i];
            if(arrA[i] >= x){
                c+=arrB[i];
            }
        }
        cout << c << endl;
    }
}
