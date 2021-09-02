#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2) return false; 
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
		return true;
}
main(){
     int t;
     cin>>t;
    if(snt(t)) cout<<"YES"4;
	else cout<<"NO"; 
}
