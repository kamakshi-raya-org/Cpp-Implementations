#include <iostream>
#include <utility>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void split(string a[],int start,int end)
{
    //int mid=(start+end)/2;
    if(start<end)
    {
        int mid=(start+end)/2;
        cout<<"\nSplitting [ ";
        for(int i=start;i<end;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"]"<<endl;
        cout<<"Left list = [ ";
        for(int j=start;j<=mid;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<"]  ";

        cout<<"Right list = [ ";
        for(int k=mid+1;k<end;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<"]"<<endl;
        split(a,start,mid);
        split(a,mid+1,end);
    }
    else
    {
        return;
    }
}
int main()
{
    int n;
    cout<<"Number of names?"<<endl;
    cin>>n;
    string names[n];
    int c=0;
    for (int i=0;i<n;i++)
    {
        cin>>names[i];
        c=c+1;
        if(names[i] =="end" || names[i] =="End")
        {
            break;
        }
    }
    cout<<c<<endl;
    split(names,0,c);
    return 0;
}
