// Q. Find the target element in an array using
// 1. linear _search
// 2. binary_search

#include <iostream>
using namespace std;

int linear_search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;    
}

int binary_search(int arr[],int size,int target){
    // array must be sorted in ascending order 
    int start=0;
    int end=size-1;
    while(start <= end){
        int mid=start+(end-start)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int nums[] = {21,43,58,64,72,75,89};
    int target1 = 58; 

    int ans1=linear_search(nums,sizeof(nums),target1);
    cout<<"Element found at "<<ans1<<" using linear search"<<endl;

    int ans2=binary_search(nums,sizeof(nums),target1);
    cout<<"Element found at "<<ans2<<" using binary search";
    

}