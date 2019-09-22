#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(cin>>s1)
    {
        cin>>s2;
        int r1=s1.length(),r2=s2.length(),r3;
    r3=r1;
    if(r2>r3)
        r3=r2;
        int p1,p2;
        string st1,st2;
        st1.resize(r3),st2.resize(r3);
        for(p1=r1-1,p2=r3-1;p1>=0;p1--,p2--)
            st1[p2]=s1[p1];
        for(p1=0;p1<r3-r1;p1++)
            st1[p1]='0';
        for(p1=r2-1,p2=r3-1;p1>=0;p1--,p2--)
            st2[p2]=s2[p1];
        for(p1=0;p1<r3-r2;p1++)
            st2[p1]='0';
            if(st1==st2)
            {
                s1=st1;
                s2=st1;
            }
            else if(st1>st2)
            {
                s1=st1;
                s2=st2;
            }
            else
            {
                s1=st2;
                s2=st1;
            }
            p1=0;
            int ck=0;
            while(p1<s1.length())
            {
                if(s1[p1]!='0')
                {
                    ck++;
                    break;
                }
                p1++;
            }
            if(ck==0)
            {
                s1="0";
            }
            else
            {
            s1=s1.substr(p1);
            }
            p1=0,ck=0;
            while(p1<s2.length())
            {
                if(s2[p1]!='0')
                {
                    ck++;
                    break;
                }
                p1++;
            }
            if(ck==0)
            {
                s2="0";
            }
            else
            {
            s2=s2.substr(p1);
            }
    int l1=s1.length(),l2=s2.length();
            string arr[l2];
            for(int i=0; i<l2; i++)
                arr[i].resize(2*l1);
            for(int i=l2-1,k=0; i>=0; i--,k++)
            {
                int t=l1+1+k;
                int d=2*l1-t;
                for(int u=0; u<d; u++)
                    arr[k][u]='0';
                int w;
                for(int v=1,w=2*l1-1; v<=k; v++,w--)
                    arr[k][w]='0';
                int n1;
                if(s2[i]=='1')
                    n1=1;
                else if(s2[i]=='2')
                    n1=2;
                else if(s2[i]=='0')
                    n1=0;
                else if(s2[i]=='3')
                    n1=3;
                else if(s2[i]=='4')
                    n1=4;
                else if(s2[i]=='5')
                    n1=5;
                else if(s2[i]=='6')
                    n1=6;
                else if(s2[i]=='7')
                    n1=7;
                else if(s2[i]=='8')
                    n1=8;
                else if(s2[i]=='9')
                    n1=9;
                int s=2*l1-k-1,j1,carry=0;
                for(int j=l1-1,j1=s; j>=0; j--,j1--)
                {
                    int n2;
                    if(s1[j]=='1')
                        n2=1;
                    else if(s1[j]=='2')
                        n2=2;
                    else if(s1[j]=='0')
                        n2=0;
                    else if(s1[j]=='3')
                        n2=3;
                    else if(s1[j]=='4')
                        n2=4;
                    else if(s1[j]=='5')
                        n2=5;
                    else if(s1[j]=='6')
                        n2=6;
                    else if(s1[j]=='7')
                        n2=7;
                    else if(s1[j]=='8')
                        n2=8;
                    else if(s1[j]=='9')
                        n2=9;
                    int mul=n1*n2+carry;
                    int rem=mul%10;
                    if(rem==0)
                        arr[k][j1]='0';
                    else if(rem==1)
                        arr[k][j1]='1';
                    else if(rem==2)
                        arr[k][j1]='2';
                    else if(rem==3)
                        arr[k][j1]='3';
                    else if(rem==4)
                        arr[k][j1]='4';
                    else if(rem==5)
                        arr[k][j1]='5';
                    else if(rem==6)
                        arr[k][j1]='6';
                    else if(rem==7)
                        arr[k][j1]='7';
                    else if(rem==8)
                        arr[k][j1]='8';
                    else if(rem==9)
                        arr[k][j1]='9';
                    carry=mul/10;
                }
                if(carry==0)
                    arr[k][d]='0';
                else if(carry==1)
                    arr[k][d]='1';
                else if(carry==2)
                    arr[k][d]='2';
                else if(carry==3)
                    arr[k][d]='3';
                else if(carry==4)
                    arr[k][d]='4';
                else if(carry==5)
                    arr[k][d]='5';
                else if(carry==6)
                    arr[k][d]='6';
                else if(carry==7)
                    arr[k][d]='7';
                else if(carry==8)
                    arr[k][d]='8';
                else if(carry==9)
                    arr[k][d]='9';
            }
            string s;
            s.resize(2*l1+1);
            int carry2=0,c=2*l1;
            for(int i=2*l1-1; i>=0; i--)
            {
                int sum=0;
                for(int j=0; j<l2; j++)
                {
                    int va;
                    if(arr[j][i]=='0')
                        va=0;
                    else if(arr[j][i]=='1')
                        va=1;
                    else if(arr[j][i]=='2')
                        va=2;
                    else if(arr[j][i]=='3')
                        va=3;
                    else if(arr[j][i]=='4')
                        va=4;
                    else if(arr[j][i]=='5')
                        va=5;
                    else if(arr[j][i]=='6')
                        va=6;
                    else if(arr[j][i]=='7')
                        va=7;
                    else if(arr[j][i]=='8')
                        va=8;
                    else if(arr[j][i]=='9')
                        va=9;
                    sum=sum+va;
                }
                int rem2=((sum+carry2)%10);
                if(rem2==0)
                    s[c]='0';
                else if(rem2==1)
                    s[c]='1';
                else if(rem2==2)
                    s[c]='2';
                else if(rem2==3)
                    s[c]='3';
                else if(rem2==4)
                    s[c]='4';
                else if(rem2==5)
                    s[c]='5';
                else if(rem2==6)
                    s[c]='6';
                else if(rem2==7)
                    s[c]='7';
                else if(rem2==8)
                    s[c]='8';
                else if(rem2==9)
                    s[c]='9';
                carry2=(sum+carry2)/10;
                c--;
            }
            if(carry2==0)
                s[0]='0';
            else if(carry2==1)
                s[0]='1';
            else if(carry2==2)
                s[0]='2';
            else if(carry2==3)
                s[0]='3';
            else if(carry2==4)
                s[0]='4';
            else if(carry2==5)
                s[0]='5';
            else if(carry2==6)
                s[0]='6';
            else if(carry2==7)
                s[0]='7';
            else if(carry2==8)
                s[0]='8';
            else if(carry2==9)
                s[0]='9';
            int h=0;
            while(h<s.length())
            {
                if(s[h]!='0')
                {
                   ck++;
                   break;
                }
                h++;
            }
            if(ck==0)
            {
                s1="0";
            }
            else
            {
              s1=s.substr(h);
            }
            cout<<s1<<endl;
    }
    return 0;
}
