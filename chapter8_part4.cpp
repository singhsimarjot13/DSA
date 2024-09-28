#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> pairsum(vector<int> v,int target){
    vector <int> ans;
    for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
        if(v[i]+v[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
}
vector<int> optimum_pairsum(vector<int> v,int target){
    vector<int> ans;
    int j=v.size()-1;
    int i=0;
    while(j>i){
        int pairsum=v[i]+v[j];
        if(pairsum>target){
            j--;
        }else if(pairsum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int majorityElement(vector<int> v){
    for(int val:v){
        int freq=0;
        for(int ele:v){
            if(ele==val){
                freq++;
            }
        }
        if (freq>v.size()/2){
            return val;
        }
    }
    return -1;
}
//slightly optimized way
int slightopt_majority_element(vector<int> v){
    sort(v.begin(),v.end());
    int freq=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            freq++;
            if(freq>v.size()/2){
                return v[i];
            }
        }else{
            freq=1;
        }
    }
    return -1;
}
//moore algorith most optimised technique
int moore_majority_element(vector<int> v){
    int freq=0,ans=0;
    for(int i=0;i<v.size();i++){
        if(freq==0){
            ans=v[i];
        }
        if(ans==v[i]){
            freq++;
        }else{
            freq--;
        }

        }
        //variation if element does'nt exist
        int count=0;
        for(int val:v){
            if(val==ans){
                count++;
            }
        }
        if(count>v.size()/2){
            return ans;
        }else{
            return -1;
        }
    }



int main(){
vector<int> ans={2,7,11,15};
vector<int> ans1={1,2,2,1,1};
int target_sum=9;
// vector <int> new_answer=pairsum(ans,target_sum);
vector<int> new_answer=optimum_pairsum(ans,target_sum);
cout<<new_answer[0]<<" "<<new_answer[1]<<endl;
cout<<majorityElement(ans1)<<endl;
cout<<slightopt_majority_element(ans1)<<endl;
cout<<moore_majority_element(ans1)<<endl;

    return 0;
}