#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<bool> arr(n+1,true);
    arr[0] = false;
    arr[1] = false;

    for(int i=2;i<=(n/2);i++){
        if(arr[i]){
            for(int j=i*i;j<=n;j=j+i){
                arr[j] = false;
            }
        }
    }

    for(int i=0;i<=n;i++){
        if(arr[i]){
            cout<<i<<endl;
        }
    }
}