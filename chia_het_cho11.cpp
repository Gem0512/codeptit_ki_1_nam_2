#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int a=0;
        for(int i=0;i<n;i++){
            a=a*10 + s[i]-'0';
            a=a%11;
        }
        if(a==0) cout<<"1";
        else cout<<"0";
         cout << endl;
    }
}