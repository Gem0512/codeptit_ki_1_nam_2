#include <bits/stdc++.h>
using namespace std;

int t;
string s;
void in(){
    int dem = 0;
    for(int i = 0; i < s.size(); i++)
    {
       if(s[i]!='0'&&s[i]!='8'&&s[i]!='6') {
           dem=1;
           cout<<"NO";
           break;
       }
    }
    if(dem==0) cout<<"YES";
    cout<<endl;
}
int main(){
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>s;
        in();
    }
}