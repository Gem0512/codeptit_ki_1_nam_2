#include <bits/stdc++.h>
using namespace std;

int t;
string k;
void in(){
    int dem = 1;
    for(int i = 0; i < k.size(); i++)
    {
        if(k[i] == ' ' || k[i] == '\t' || k[i] == '\n')
            dem++;
    }
    cout<<dem<<endl;
}
int main(){
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin, k);
        in();
    }
}