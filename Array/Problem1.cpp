#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    for(int i=0;i<(n/2);i++){
        int one = arr[i];
        int two = arr[n-i-1];
        arr[i] = two;
        arr[n-1-i] = one;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;

}