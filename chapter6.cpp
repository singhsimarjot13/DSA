//decimal to binary
#include <iostream>
using namespace std;
int decimalToBinary(int n){
    int decNum=n;
    int ans=0;
    int pow=1;
    int rem;
    while(decNum>0){
        rem=decNum%2;
        decNum=decNum/2;
        ans+=(rem*pow);
        pow*=10;

    }
    return ans;
}
int binaryToDecimal(int n){
    int rem;
    int ans=0;
    int pow=1;
    while(n >0){
        rem=n%2;
        n=n/10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}
int main(){
//     int decimal;
//     cin>>decimal;
// cout<<decimalToBinary(decimal)<<endl;
// for(int i=1;i<=10;i++){
//     cout<<decimalToBinary(i)<<endl;
// }
cout<<binaryToDecimal(110010);
}