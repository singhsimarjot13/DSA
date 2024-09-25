#include <iostream>
using namespace std;
int x=10;//global scope variable
int reverseNumber(int n){
    int r_number=0,digit;
    while(n>0){
        digit=n%10;
        n=n/10;
        r_number=r_number*10+digit;
    }
    return r_number;
}
int main(){
    // int a = 6, b = 10;
    // cout << (a ^ b) << endl;
    // cout << (a & b) << endl;
    // cout << (a | b) << endl;
    // cout << (10 << 2) << endl;
    // cout << (10>>1) << endl;
    // cout<<sizeof(long long)<<endl;
    // if(true){//local scope
    //     int x=3;//local variable
    // }

    //homework
    //q1 how to find a number if a number is power of 2 with loop
    // int n;
    // cin>>n;
    // while(n%2==0){
    //     n=n/2;
    // }
    // cout<<(n==1)<<endl;

    //q2 how to find a number if a number is power of 2 without loop
    // if(n>0 && (n &(n-1))==0){
    //      cout<<true;
    // }else{
    //      cout<<false;
    // }
    //q3 reverse a number
    cout<<reverseNumber(122021);
    return 0 ;
}