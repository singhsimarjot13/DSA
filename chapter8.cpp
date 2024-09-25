#include <iostream>
#include <climits>
using namespace std;
void displayArray(int arr[],int sz){
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//pass by reference function
void changeArr(int arr[],int sz){
    cout<<"in function"<<endl;
    for(int i=0;i<sz;i++){
        arr[i]*=2;
    }
}
int linearSearch(int arr[],int target,int sz){
        for(int i=0;i<sz;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}
int sumAndProduct(int arr[],int sz,int &sum,int &product){
    for(int i=0;i<sz;i++){
        sum+=arr[i];
        product*=arr[i];
    }
}
void swapMinAndMaxArray(int arr[],int sz){
    int min=INT_MAX;
    int max=INT_MIN;
    int minimum_number_index=-1,maximum_number_index=-1;
    for(int i=0;i<sz;i++){
        if(min>arr[i]){
            min=arr[i];
            minimum_number_index=i;
        }
        if(max<arr[i]){
            max=arr[i];
            maximum_number_index=i;
        }
    }
    if(minimum_number_index!=-1 && maximum_number_index!=1){
    int temp=arr[minimum_number_index];
    arr[minimum_number_index]=arr[maximum_number_index];
    arr[maximum_number_index]=temp;}
}
void uniqueValueArray(int arr[],int size){
    for(int i=0;i<size;i++){
        bool isUnique=true;
        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique=false;
                break;
            }
        }
        if(isUnique){
        cout<<arr[i]<<" ";}
    }
            cout<<endl;
}
void intersectionOfTwoArrays(int arr1[],int arr2[],int sz1,int sz2){
    for(int i=0;i<sz1;i++){
        bool already_printed=false;
        for(int k=0;k<i;k++){
            if(arr1[i]==arr1[k]){
                already_printed=true;
                break;
            }
        }
        if(already_printed){
            continue;
        }
        for(int j=0;j<sz2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
}
int main(){
    int marks[5]={99,100,54,36,88};//fix memory of 5
    // double price[]={33.33,34,56};//take 2 auto
    //size 0 to n-1
    // cout<<marks[0]<<endl;
    // int marks[5];
    int sz=sizeof(marks)/sizeof(int);
    // cout<<sz<<endl;
    //input array
    // for(int i=0;i<sz;i++){
    //     cin>>marks[i];
    // }
    //loops on array
    // for(int i=0;i<sz;i++){
    //     cout<<marks[i]<<endl;
    // }
    //q-find largest/smallest in arrays
    // int check=INT_MIN;
    // int index;
    // for(int i=0;i<sz;i++){
    //     if (check<marks[i]){
    //     check=marks[i];
    //     index=i;
    //     }
    //     //alternate-check=max(marks[i],check);
    // }
    // cout<<"here is your greatest number "<<check<<endl;
    // cout<<" and index is "<<index<<endl;
    // //q- for smallest number in array
    // int small_number=INT_MAX;
    // for(int i=0;i<sz;i++){
    //     if(small_number>marks[i]){
    //         small_number=marks[i];
    //         index=i;
    //     }
    //     //alternate-smallest=min(marks[i],smallest); 
    // }
    // cout<<"here is your smallest number "<<small_number;
    // cout<<" and index is "<<index<<endl;

    //pass by reference
    // changeArr(marks,sz);
    // cout<<"in main"<<endl;
    // for(int i=0;i<sz;i++){
    // cout<<marks[i]<<endl;}

    //linear search
    int arr[]={4,2,7,8,1,2,5};
    // int target=50;
    // int ans=linearSearch(arr,target,sizeof(arr)/sizeof(int));
    // cout<<ans;

    //reverse an array
    //2 pointer approach
    int size=sizeof(arr)/sizeof(int);
    // int start,stop;
    // for(int i=0;i<size;i++){
    //     start=i;
    //     stop=size-1-i;
    //     if(start==stop){
    //         break;
    //     }
    //     int temp=arr[start];
    //     arr[start]=arr[stop];
    //     arr[stop]=temp;
    // }
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    //lecture sol of reverse of an arry
    // int start=0,stop=size-1;
    // while(start<stop){
    //     swap(arr[start],arr[stop]);
    //     start++;stop--;
    // }
    //     for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    //homework problems
    //q1-WAF for sum and product of all numbers in array
    // int sum=0,product=1;
    // sumAndProduct(arr,size,sum,product);
    // cout<<sum<<" "<<product<<endl;
    //q2-to swap min and max in array
    // displayArray(arr,size);
    // swapMinAndMaxArray(arr,size);
    // displayArray(arr,size);
    //q3-WAF to print all unique values in array
    // uniqueValueArray(arr,size);
    //q4-intersection of 2 arrays-
    int arr2[]={4,2,7,1,9,9};
    int size2=sizeof(arr2)/sizeof(int);
    intersectionOfTwoArrays(arr,arr2,size,size2);




    return 0;
}