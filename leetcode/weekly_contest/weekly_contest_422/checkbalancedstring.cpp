#include <iostream>
#include <string>
using namespace std;

bool isBalanced(string num) {
        int sum_e = 0;
        int sum_o =0;
        for(int i= 0; i< num.size() ; i++){
            if(i%2 == 0){
                sum_e+=(num[i]- '0');
            }
            else{
                sum_o+=(num[i]- '0');
            }
        }
        return sum_e == sum_o;
    }

int main(){
    string s;
    cin>>s;
    cout<<isBalanced(s)<<endl;
}