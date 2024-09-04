#include <iostream>
using namespace std;
int main()
{
int a;
cin>>a;
int i=2;
while(i<a/2){
    if(a%i==0){
        cout<<"it is not prime\n";
        return 0;
    }
    else{
        i++;
    }

}
    cout<<"it is prime\n";
return 0;
}