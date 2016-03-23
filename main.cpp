#include <iostream>
#include <vector>

using namespace std;


int binsearch(vector<int>& arr,int low,int high, int target){

    if(low>high) return -1;

    int mid=(low+high)/2;

    if(arr[mid]==target) return mid;

    if(arr[mid]>target)
        return binsearch(arr,low,mid-1,target);

    if(arr[mid]<target)
        return binsearch(arr,mid+1,high,target);

}

int binsearch2(vector<int>& arr, int target){

    int low=0,high=arr.size()-1,mid=0;

    while(low<=high){
        mid=(low+high)/2;

        if(arr[mid]==target)
            return mid;

        if(arr[mid]>target){
            high=mid-1;
        }

        if(arr[mid]<target){
            low=mid+1;
        }
    }

    return -1;
}


int main() {

    cout << "Hello, World!" << endl;

    vector<int> nums={1,3,6,7,8,9,11,14,19};

    int target=7;

    int low=0, high=nums.size()-1;

    int pos1=binsearch(nums,low,high,target);
    int pos2=binsearch2(nums,target);

    cout<<pos1<<endl<<pos2<<endl;

    return 0;
}