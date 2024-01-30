#include<iostream>
#include<vector>

using namespace std;

int peak(vector<int>&arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] <= arr[mid+1]){
            s = mid + 1;

        }
        else e = mid;
    }
    return s;
}

int main(){

    vector<int> arr = {1,2,5,4,3};
    cout<<peak(arr);
    cout<<"hi";

    return 0;
}