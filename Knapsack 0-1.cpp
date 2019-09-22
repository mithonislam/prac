#include<bits/stdc++.h>
using namespace std;
int Max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{

    cout<<"enter number of object: ";
    int n;
    cin>>n;
    int s=n+1;
    int w[s],p[s];
    w[0]=0,p[0]=0;
    cout<<"enter "<<n<<" profits and weights: "<<endl;
    for(int i=1; i<s; i++)
        cin>>p[i]>>w[i];
    cout<<"enter maximum weight: ";

    int max;
    cin>>max;
    cout<<endl;
    int r=n+1,c=max+1;
    int t[r][c];
    for(int i=0; i<c; i++)
        t[0][i]=0;
    for(int i=0; i<r; i++)
        t[i][0]=0;
    for(int i=1; i<r; i++)
    {

        for(int j=1; j<c; j++)
        {
            if(j<w[i])
                t[i][j]=t[i-1][j];
            else
            {

                int col=j-w[i];

                t[i][j]=Max(t[i-1][j],p[i]+t[i-1][col]);
            }

        }

    }
     cout<<"               ";
    for(int i=0;i<c;i++)
       cout<<i<<"   ";
       cout<<endl<<endl;
    for(int i=0; i<r; i++)
    {

        if(i==0)
            cout<<setw(6)<<"p"<<setw(6)<<"w";
        else
            cout<<setw(6)<<p[i]<<setw(6)<<w[i];

        for(int j=0; j<c; j++)
        {



            cout<<setw(4)<<t[i][j];


        }
        cout<<endl;
    }
    cout<<endl<<endl;
    int i=r-1,j=c-1;
    int v=t[i][j];
    cout<<setw(7)<<"objects"<<setw(7)<<"weight"<<setw(7)<<"Profit"<<endl;
    int W=0,P=0;
    while(v!=0)
    {
        if(v==t[i-1][j])
        {

            i--;
            v=t[i][j];

        }
        else
        {
            cout<<setw(7)<<i<<setw(7)<<w[i]<<setw(7)<<p[i]<<endl;
            W=W+w[i];
            P=P+p[i];
            j=j-w[i];
            i--;
            v=t[i][j];
        }

    }
    cout<<setw(7)<<"Total"<<setw(7)<<setw(7)<<W<<setw(7)<<P<<endl;

}
