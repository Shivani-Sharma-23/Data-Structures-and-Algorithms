#include <iostream> 
using namespace std;

int dec_to_bin(int n){
    int ans = 0;
    int pow = 1;
    int rem = 0;
    while(n>0){
        rem = n%2;
        n = n/2;
        ans+= rem*pow;
        pow = pow*10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<dec_to_bin(n)<<endl;
    return 0;
}