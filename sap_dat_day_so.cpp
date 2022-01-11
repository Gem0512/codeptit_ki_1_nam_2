#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(long long i = 0; i < n; i++)
            cin >> a[i];
        int m=0;
        for(long long i = 0; i < n; i++){
            m = 0;
            for(long long j = 0; j < n; j++){
                if(i == a[j]){
                cout << i << " ";
                m=1;
                }
                if(m==1) break;
            }
            if(m== 0) cout << "-1" << " ";
        }
        cout << endl;
    }
}