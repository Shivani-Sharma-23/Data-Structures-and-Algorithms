#include <iostream> 
using namespace std;

int bin_to_dec(int n){
    int ans = 0;
    int pow = 1;
    int rem = 0;
    while(n>0){
        rem = n%10;
        n = n/10;
        ans+= rem*pow;
        pow = pow*2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<bin_to_dec(n)<<endl;
    return 0;
}