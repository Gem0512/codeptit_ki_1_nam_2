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
 
int main () {
    long n;
   cin>>n;
    for (long i=2; i<=sqrt (n); i++) {
        if (n%i==0) {
            if (snt (i)) {
                long dem=0;
                while (n%i==0) {
                    n=n/i;
                    dem++;
                }
               cout<<i<<" "<<dem<<endl;
            }
        }
    }
    if (n!=1 && snt (n)) cout<<n<<" 1";
   
    return 0;
}