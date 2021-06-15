
#include <iostream>

using namespace std;
int main()
{
    int ch,r,cl;
    int k=0;
    cout<<"1.Upper Triangle:"<<endl;
    cout<<"2.Lower Triangle:"<<endl;
    cin>>ch;
    cout<<"Enter number of rows= ";
    cin>>r;
    cout<<"Enter number of columns= ";
    cin>>cl;
    int arr[r][cl];
    int new_arr[(r*(r+1))/2];
    for(int i=0;i<r;i++){
        for(int j=0;j<cl;j++){
            cout<<"Enter element= "<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"Your Array= "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<cl;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    if(ch==1){
        for(int i=0;i<r;i++){
            for(int j=0;j<i+1;j++){
                new_arr[k]=arr[j][i];
                k=k+1;
            }
        }
        cout<<"New Array= "<<endl;
        for(int i=0;i<(r*(r+1))/2;i++){
            cout<<new_arr[i]<<" ";
        }
    }
    else{
        for(int i=0;i<r;i++){
            for(int j=i;j<r-i;j++){
                new_arr[k]=arr[j][i];
                k=k+1;
            }
        }
        cout<<"New Array= "<<endl;
        for(int i=0;i<(r*(r+1))/2;i++){
            cout<<new_arr[i]<<" ";
        }
    }
            
    
    return 0;
}
