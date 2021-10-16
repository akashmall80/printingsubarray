//Printing subarray of a given array what is subarray? subarray is a smaller part of an array
//our array 1 2 3 4 5
//its subarray
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

//2
//2 3
//2 3 4
//2 3 4 5

//3
//3 4
//3 4 5

//4
//4 5

//5

//Use our pair based approach to find out all the pairs of an array and we will use third variable k that will iterate all those elements
#include<iostream>
using namespace std;
int main()
{

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
