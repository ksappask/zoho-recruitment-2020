#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    if(n<=0)
    {
        cout<<"N Should be Greater than Zero !!!";
        return 0;
    }
    
    int arr[n][n];
    
    int a=0,b=0;
    
    int temp=n;
    
    int k=n;
    
    while(k--)
    {
    
    for(int i=a;i<n;i++)
    {
        for(int j=b;j<n;j++)
        {
           arr[i][j]=temp;
        }
    }
    
    a++;
    b++;
    temp--;
    
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
