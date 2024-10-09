#include <iostream>
#include <vector>
using namespace std;
int powerExponentialProblem(int n,long number){
    int ans=1;
    if(n==0)
        return 1;
    if(number==-1 && n%2==0)
        return 1;
    if(number==-1&& n%2!=0) return -1;
    if(n<0){
        number=1/number;
        n=-n;
    }
    while(n >0){
        if(n%2==1){
            ans*=number;
        }
        number*=number;
        n/=2;
    }
    return ans;
}
int BuySellStock(vector<int> v){
    int Bestbuy=v[0],max_profit=0;
    for(int i=1;i<v.size()-1;i++){
        if(v[i]>Bestbuy){
            max_profit=max(max_profit,v[i]-Bestbuy);
        }
        Bestbuy=min(Bestbuy,v[i]);
    }
    return max_profit;
}
int main(){
    cout<<powerExponentialProblem(5,3)<<endl;;//binary method solution
    vector<int> v={7,1,5,3,6,4};
    cout<<BuySellStock(v)<<endl;
return 0;
}