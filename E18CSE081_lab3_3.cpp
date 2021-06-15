/******************************************************************************
Kamakshi Raya - E18CSE081
*******************************************************************************/
#include<iostream>
#include <cmath>
#include<conio.h>
using namespace std;
void Combination(int a[], int reqLen, int start, int currLen, bool check[], int len)
{

	if(currLen > reqLen)
	return;

	else if (currLen == reqLen)
	{
		cout<<"\t";
		for (int i = 0; i < len; i++)
		{
			if (check[i] == true)
			{
				cout<<a[i]<<" ";
			}
		}
		cout<<"\n";
		return;
	}
	// If start equals to len then return since no further element left.
	if (start == len)
	{
		return;
	}

	check[start] = true;
	Combination(a, reqLen, start + 1, currLen + 1, check, len);
	check[start] = false;
	Combination(a, reqLen, start + 1, currLen, check, len);
}

int main()
{
	int i, n;

	cout<<"Enter the number of element array have: ";
	cin>>n;

        bool check[n];
	int arr[n];
	cout<<"\n";


	for(i = 0; i < n; i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>arr[i];
		check[i] = false;
	}

	for(i = 1; i <= n; i++)
	{
		cout<<"\nThe combination of  length "<<i<<" for the given array set:\n";
		Combination(arr, i, 0, 0, check, n);
	}
	return 0;
}


