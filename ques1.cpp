// WAP to implement the following function in the linear array.
// 1. insert new element at specific position
// 2. delete an element either whose value is E1 or value is B1
// 3. to find location of given element
// 4. to display element of linear array

#include <iostream>
using namespace std;

void insert(int nums[],int s,int ele, int pos){
    // nums -> array, s -> size of array, ele -> element to be inserted, pos -> position at whic element is to be inserted
    int last=nums[s-1];
    for(int i=pos;i<s;i++){
        int temp=nums[i];
        nums[i]=ele;
        ele=temp;
    } 
    nums[s]=ele;
}

void delete_by_pos(int nums[],int s,int pos){
    for(int i=pos;i<s-1;i++){
        nums[i]=nums[i+1];
    }
}

void find(int nums[],int s,int tar){
    // display position of target using linear search else return -1
    for (int i=0; i < s; i++){
        if(nums[i] == tar)
        cout<<"Element found at"<<i<<endl;
        return;
    }
    cout<<"Element found"<<endl;
}

void display(int nums[], int s){
    // nums -> array, s -> size of arrays
    for(int i=0;i<s;i++){
        cout<<nums[i]<<", ";
    }
    cout<<""<<endl;
}

int main(){
    int n;
    cout<<"Enter number of elements";
    cin>>n;

    //inputing the array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    display(arr,n); //displaying the normal array

    // insert(arr,n,11,3); //insert element at position 3
    // display(arr,n+1); //n+1 cause size of array is increased by 1 after element is added

    // delete_by_pos(arr,n,3); //delete element at positon 3
    // display(arr,n-1); //n-1 cause size of array is reduced by 1 after deletion of one element
}