#include <iostream>
#include <vector>
using namespace std;
int containerWithMostWater(vector<int> v){//Brute froce approach
  int width,height,max_water=0;
  for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
        height=min(v[i],v[j]);
        width=j-i;
        max_water=max(max_water,width*height);
    }
  }    
  return max_water;
}
int optimunApproach(vector<int> v){
    int width,height,max_water=0,left=0,right=v.size()-1;
    for(int i=0;right>left;i++){
        height=min(v[left],v[right]);
        width=right-left;
        max_water=max(max_water,height*width);
        if(v[left]>v[right]){
            right--;
        }else{
            left++;
        }
    }
    return max_water;
}
int main(){
    vector<int> v={1,8,6,2,5,4,8,3,7};
    cout<<containerWithMostWater(v)<<endl;
    cout<<optimunApproach(v)<<endl;
    return 0;
}