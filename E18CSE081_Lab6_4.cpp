#include <iostream>

using namespace std;

bool prime(int num)
{
    int flag=0;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return false;
    else
        return true;
}

int main()
{
    int n;
    cin>>n;
    if(n%10==n)
        cout<<(10+n);
    else if(n%10!=n && prime(n)==true)
        cout<<"\nNot Possible";
    else if(n%10!=n && prime(n)==false)
    {
        for(int i=1;i<n/2;i++)
        {
            int n1 = n/i;
            if(n1%10==n1)
            {
                cout<<(10*i+n1);
                break;
            }
        }
    }

}
