#include <iostream>
#include <vector>
using namespace std;
void linearSearch(vector<int> &v,int target){
    int count=-1;
    bool found=false;
    for(int val:v){
        count++;
        if(val==target){
            cout<<"your target is found at this index "<<count<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"target not found"<<endl;
    }
}
void reverseVector(vector<int> &v){
    int temp;
    for(int i=0;i<v.size()/2;i++){
        temp=v[i];
        v[i]=v[v.size()-1-i];
        v[v.size()-1-i]=temp;
    }
}
int main()
{
    // vector<int> vec; // size->0
    // vector<int> vec={1,2,3};
    // vector<int> vec(3,1);
    // for(int val:vec){
    //     cout<<i<<" ";
    // }
    // vec.push_back(25);
    //     for(int val:vec){
    //     cout<<val<<" ";
    // }
    // cout<<vec.at(0);
    // vec.push_back(22);
    // vec.push_back(22);
    // vec.push_back(22);
    // vec.push_back(22);
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;

    //single number question 
    // vector<int> v={1,1,2,2,5};
    // int ans=0;
    // for(int val:v){
    //     ans=ans^val;
    // }
    // cout<<ans;

    //homework problems
    vector<int> v={1,2,3,4,5,6,7,9,101};
    // linearSearch(v,9);
    reverseVector(v);
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}