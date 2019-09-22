#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter total number of rows: ";
    cin>>n;
    n++;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(j==0||j==i-1)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }

}
