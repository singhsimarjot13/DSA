#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n=7;
    int arr[n]={3,-4,5,4,-1,7,-8};
    // for(int st=0;st<n;st++){
    //     for(int end=st;end<n;end++){
    //         for(int i=st;i<=end;i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    //brute force approach
    int max_sum=INT_MIN;
    // for(int st=0;st<n;st++){
    //     int current_sum=0;
    //     for(int end=st;end<n;end++){
    //         current_sum+=arr[end];
    //         max_sum=max(current_sum,max_sum);
    //     }
    // }

    //Kadane algo
    int current_sum=0;
    for(int i=0;i<n;i++){
        current_sum+=arr[i];
        max_sum=max(current_sum,max_sum);
        if (current_sum<0){
            current_sum=0;
        }
    }

    cout<<"here is your max sum "<<max_sum;
    return 0;
}