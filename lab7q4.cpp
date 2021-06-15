#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void read_array(int arr[],int l){
    for(int i=0;i<l;i++){
        cout<<"enter the element of array";
        cin>>arr[i];
    }
}
void arrange_array(int arr[],int l) {
    sort(arr, arr + l);
}
void display_array(int arr[],int l) {
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}
int binarysearch(int arr[],int l,int value) {

    int r=l;
    l=0;
    int x=value;
     while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}
int main(){
int l;
int value;
cout<<"enter number of elements in array";
cin>>l;
cout<<"enter the number to find"<<endl;
cin>>value;
int arr[l];
read_array(arr, l);
arrange_array(arr,l);
display_array(arr,l);
cout<<"element found at "<<binarysearch(arr,l,value)<<endl;

}

