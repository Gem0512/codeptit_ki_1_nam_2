#include <bits/stdc++.h>
using namespace std;

int t;
string s;
void in()
{
    int dem = s.size();
    for(int i = 0; i < s.size()-1; i++)
    {
        for(int j = i+1; j <s.size(); j++)
        {
            if(s[i] == s[j])
            dem++;
        }
    }
    cout<<dem<<endl;
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