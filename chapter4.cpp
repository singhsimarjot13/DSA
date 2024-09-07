#include <iostream>
using namespace std;
int main(){
    int n_rows;
    cout<<"Enter the number of rows in making of pattern"<<endl;
    cin>>n_rows;
    // for(int i=0;i<=n_rows-1;i++){
        //yeha bhi declare kar sakte char and loop ko int mein hii rakhe aese char ch='A';
        // for(char j='A';j<=65+n_rows-1;j++){
        //     cout<<j;
            //cout>>ch;
            //ch+=1;
    //     }
    //     cout<<endl;
    // }

    // char a='A';
    // for(int i=0;i<n_rows;i++){
    //     for(int j=0;j<n_rows;j++){
    //         cout<<a<<' ';
    //         a+=1;
    //     }
    //     cout<<endl;
    // }
    //right angled triangle
    // char ch=64;
    //     for(int i=0;i<n_rows;i++){
    //         ch++;
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch;

    //     }
    //     cout<<endl;
    // }

    //     for(int i=0;i<n_rows;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1;

    //     }
    //     cout<<endl;
    // }

    // reverse triangle pattern
    //     for(int i=0;i<n_rows;i++){
    //     for(int j=i+1;j>0;j--){
    //         char a=(char)j+64;
    //         cout<<a;
    //     }
    //     cout<<endl;
    // }

    //floyd's triangle pattern
    // char a='A';
    //     for(int i=0;i<n_rows;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<a<<' ';
    //         a++;
    //     }
    //     cout<<endl;
    // }

    //inverted triangle pattern
    //     for(int i=0;i<n_rows;i++){
    //         for(int j=0;j<i;j++){
    //             cout<<' ';
    //         }
    //     for(int j=n_rows-i;j>0;j--){
    //         char a=(char)i+65;
    //         cout<<a;
    //     }
    //     cout<<endl;
    // }

    //pyramid pattern
    // for(int i=0;i<n_rows;i++){
    //     for(int j=0;j<n_rows-i-1;j++){
    //         cout<<' ';
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1;}
    //     for(int k=i;k>0;k--){
    //             cout<<k;
    //         }
        
    //     cout<<endl;
    // }
    //hollow diamond pattern
    // for(int i=0;i<n_rows;i++){
    //     for(int j=0;j<n_rows-i-1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=0){
    //     for(int j=0;j<2*i-1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";}
    //     cout<<endl;
    // }
    // for(int i=n_rows-1;i>=0;i--){
    //     for(int j=0;j<n_rows-i-1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=0){
    //     for(int j=0;j<2*i-1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     cout<<endl;
    // }
    // }

    //butterfly pattern
    for(int i=0;i<n_rows;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(n_rows-i)-2;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n_rows;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(n_rows-i);j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}