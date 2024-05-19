#include<bits/stdc++.h>
using namespace std;
int max(int arr[],int size){
    int maxvalue=arr[0];
    for (int i=0;i < size;i++){
    if(arr[i]>maxvalue){
        maxvalue=arr[i];
    }
    }
    cout<<maxvalue;
    return maxvalue;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int maximum=max(arr,size);
    return 0;
}


