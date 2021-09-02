#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int n=0,count=0,k=0,i=2;
        cin>>n;
        cin>>k;
        for(i=2;i<=n;i++){
            while(n%i==0){
                count++;
                n /=i;
                if(count==k){
                    break;
                }
            }
            if(count==k){
                cout<<i<<endl;
                break;
            }
        }
        if(count!=k)
            cout<<"-1"<<endl;
    }
}
