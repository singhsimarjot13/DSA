#include <iostream>
#include <vector>
using namespace std;
vector<int> productOfArraySelf(vector<int> a){//brute force approach
    vector<int> ans;
    for(int i=0;i<a.size();i++){
        int ele=1;
        for(int j=0;j<a.size();j++){
            if(a[j]==a[i]){
                continue;
            }
            ele*=a[j];
        }
        ans.push_back(ele);
    }    
    return ans;
}
vector<int> optimumApproach(vector<int> a){
    // for o(n) space complexity
    vector<int> ans(a.size(),1);
    int suffix=1;
    // vector<int> prefix(a.size(),1),suffix(a.size(),1);
    for(int i=1;i<a.size();i++){
        // prefix[i]=prefix[i-1]*a[i-1];
        ans[i]=ans[i-1]*a[i-1];
    }
    for(int i=a.size()-2;i>=0;i--){
        // suffix[i]=suffix[i+1]*a[i+1];
        suffix*=a[i+1];
        ans[i]*=suffix;
    }
    // for(int i=0;i<a.size();i++){
    //     ans[i]=prefix[i]*suffix[i];
    // }
    return ans;
}
int main(){
    // vector<int> ans=productOfArraySelf({1,2,3,4});
    vector<int> ans=optimumApproach({1,2,3,4});
    for(int a:ans){
        cout<<a<<endl;
    }

    return 0;
}