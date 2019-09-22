#include<bits/stdc++.h>
using namespace std;
string operator + (string s1,string s2)
{
    int l1=s1.length(),l2=s2.length(),l;
    l=l1;
    if(l2>l)
        l=l2;
    int i,j;
    string s3,s4;
    s3.resize(l),s4.resize(l);
    for(i=l1-1,j=l-1; i>=0; i--,j--)
        s3[j]=s1[i];
    for(i=0; i<l-l1; i++)
        s3[i]='0';
    for(i=l2-1,j=l-1; i>=0; i--,j--)
        s4[j]=s2[i];
    for(i=0; i<l-l2; i++)
        s4[i]='0';
    // cout<<s3<<endl<<s4<<endl;

    string s5;
    s5.resize(l+1);
    int sum=0;
    for(int i=l-1; i>=0; i--)
    {
        int n1,n2;
        if(s3[i]=='0')
            n1=0;
        else if(s3[i]=='1')
            n1=1;
        else if(s3[i]=='2')
            n1=2;
        else if(s3[i]=='3')
            n1=3;
        else if(s3[i]=='4')
            n1=4;
        else if(s3[i]=='5')
            n1=5;
        else if(s3[i]=='6')
            n1=6;
        else if(s3[i]=='7')
            n1=7;
        else if(s3[i]=='8')
            n1=8;
        else if(s3[i]=='9')
            n1=9;
        //
        if(s4[i]=='0')
            n2=0;
        else if(s4[i]=='1')
            n2=1;
        else if(s4[i]=='2')
            n2=2;
        else if(s4[i]=='3')
            n2=3;
        else if(s4[i]=='4')
            n2=4;
        else if(s4[i]=='5')
            n2=5;
        else if(s4[i]=='6')
            n2=6;
        else if(s4[i]=='7')
            n2=7;
        else if(s4[i]=='8')
            n2=8;
        else if(s4[i]=='9')
            n2=9;
        sum=sum+n1+n2;
        int r=sum%10;
        if(r==0)
            s5[i+1]='0';
        else if(r==1)
            s5[i+1]='1';
        else if(r==2)
            s5[i+1]='2';
        else if(r==3)
            s5[i+1]='3';
        else if(r==4)
            s5[i+1]='4';
        else if(r==5)
            s5[i+1]='5';
        else if(r==6)
            s5[i+1]='6';
        else if(r==7)
            s5[i+1]='7';
        else if(r==8)
            s5[i+1]='8';
        else if(r==9)
            s5[i+1]='9';
        sum=sum/10;

    }
    if(sum==0)
        s5[0]='0';
    else if(sum==1)
        s5[0]='1';
    i=0;
    int dk=0;
    while(i<s5.length())
    {
        if(s5[i]!='0')
        {
            dk++;
            break;
        }

        i++;
    }
    if(dk==0)
    {
        s5="0";
    }
    else
    {
        s5=s5.substr(i);
    }

    return s5;

}
string operator *(string s1,string s2)
{
    int r1=s1.length(),r2=s2.length(),r3;
    r3=r1;
    if(r2>r3)
        r3=r2;
    int p1,p2;
    string st1,st2;
    st1.resize(r3),st2.resize(r3);
    for(p1=r1-1,p2=r3-1; p1>=0; p1--,p2--)
        st1[p2]=s1[p1];
    for(p1=0; p1<r3-r1; p1++)
        st1[p1]='0';
    for(p1=r2-1,p2=r3-1; p1>=0; p1--,p2--)
        st2[p2]=s2[p1];
    for(p1=0; p1<r3-r2; p1++)
        st2[p1]='0';
    // cout<<st1<<endl<<st2<<endl;
    //return 0;
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
    int fk=0;
    while(p1<s1.length())
    {
        if(s1[p1]!='0')
        {
            fk++;
            break;
        }

        p1++;
    }
    if(fk==0)
    {
        s1="0";
    }
    else
    {
        s1=s1.substr(p1);
    }
    p1=0,fk=0;
    while(p1<s2.length())
    {
        if(s2[p1]!='0')
        {
            fk++;
            break;
        }
        p1++;
    }
    if(fk==0)
    {
        s2="0";
    }
    else
    {
        s2=s2.substr(p1);
    }
    //cout<<s1<<endl<<s2<<endl;
    //return 0;



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
    fk=0;
    while(h<s.length())
    {
        if(s[h]!='0')
        {
            fk++;
            break;
        }
        h++;
    }
    if(fk==0)
    {
        s1="0";
    }
    else
    {
        s1=s.substr(h);
    }
    return s1;
}
string operator -(string s1,string s2)
{
    int l1=s1.length(),l2=s2.length(),l;
    l=l1;
    if(l2>l)
        l=l2;
    string s3,s4;
    s3.resize(l),s4.resize(l);
    int i,j;
    for(i=l1-1,j=l-1; i>=0; i--,j--)
        s3[j]=s1[i];
    for(int i=0; i<l-l1; i++)
        s3[i]='0';
    for(i=l2-1,j=l-1; i>=0; i--,j--)
        s4[j]=s2[i];
    for(int i=0; i<l-l2; i++)
        s4[i]='0';
    if(s3==s4)
    {
        s1=s3;
        s2=s3;
    }
    else if(s3>s4)
    {
        s1=s3;
        s2=s4;
    }
    else if(s4>s3)
    {
        s1=s4;
        s2=s3;
        cout<<'-';
    }
    string s5;
    s5.resize(l);
    int carry=0;
    for(i=l-1; i>=0; i--)
    {
        int n1,n2;
        if(s1[i]=='0')
            n1=0;
        else if(s1[i]=='1')
            n1=1;
        else if(s1[i]=='2')
            n1=2;
        else if(s1[i]=='3')
            n1=3;
        else if(s1[i]=='4')
            n1=4;
        else if(s1[i]=='5')
            n1=5;
        else if(s1[i]=='6')
            n1=6;
        else if(s1[i]=='7')
            n1=7;
        else if(s1[i]=='8')
            n1=8;
        else if(s1[i]=='9')
            n1=9;
        //
        if(s2[i]=='0')
            n2=0;
        else if(s2[i]=='1')
            n2=1;
        else if(s2[i]=='2')
            n2=2;
        else if(s2[i]=='3')
            n2=3;
        else if(s2[i]=='4')
            n2=4;
        else if(s2[i]=='5')
            n2=5;
        else if(s2[i]=='6')
            n2=6;
        else if(s2[i]=='7')
            n2=7;
        else if(s2[i]=='8')
            n2=8;
        else if(s2[i]=='9')
            n2=9;
        n2=carry+n2;
        if(n1<n2)
        {
            n1=10+n1;
            carry=1;
        }
        else
        {
            carry=0;
        }
        int ans=n1-n2;
        if(ans==0)
            s5[i]='0';
        else if(ans==1)
            s5[i]='1';
        else if(ans==2)
            s5[i]='2';
        else if(ans==3)
            s5[i]='3';
        else if(ans==4)
            s5[i]='4';
        else if(ans==5)
            s5[i]='5';
        else if(ans==6)
            s5[i]='6';
        else if(ans==7)
            s5[i]='7';
        else if(ans==8)
            s5[i]='8';
        else if(ans==9)
            s5[i]='9';
    }
    int ck=0;
    i=0;
    while(i<s5.length())
    {
        if(s5[i]!='0')
        {
            ck++;
            break;
        }
        i++;
    }
    if(ck==0)
    {
        s5="0";
    }
    else
    {
        s5=s5.substr(i);
    }
    return s5;
}
string operator /(string s1,string s2)
{
    string s8;
    int dk=0,m=0;
    while(m<s1.length())
    {
        if(s1[m]!='0')
        {
            dk++;
            break;
        }
        m++;
    }
    if(dk==0)
    {
        s8="0";
    }
    else
    {
    s2="0"+s2;
    string sum="0", s3="10",rs;
    int l1=s1.length(),l2=s2.length(),c=-1;
    rs.resize(l1);
    for(int i=0; i<l1; i++)
    {
        string n1=s1.substr(i,1),ssum;
        sum=sum*s3+n1;
        ssum.resize(l2);
        int ls=sum.length();
        int k1,k2;
        for(k1=ls-1,k2=l2-1; k1>=0; k1--,k2--)
            ssum[k2]=sum[k1];
        for( k1=0; k1<l2-ls; k1++)
            ssum[k1]='0';
        string j="1",j2="1";
        while(1)
        {
            string s5=s2*j,s6;
            s6.resize(l2);
            int l5=s5.length();
            for(k1=l5-1,k2=l2-1; k1>=0; k1--,k2--)
                s6[k2]=s5[k1];
            for( k1=0; k1<l2-l5; k1++)
                s6[k1]='0';
            if(s6==ssum)
            {
                c++;
                rs[c]=j[0];
                sum="0";
                break;
            }
            else if(s6>ssum)
            {
                string s7=j-j2;
                c++;
                rs[c]=s7[0];
                sum=ssum-(s7*s2);
                break;
            }
            j=j+j2;
        }
    }
    int k=0,check=0;
    while(k<=c)
    {
        if(rs[k]!='0')
        {
            check++;
            break;
        }
        k++;
    }
    if(check==0)
    {
        s8="0";
    }
    else
    {
        s8=rs.substr(k,c-k+1);
    }
    }
    return s8;
}
string operator %(string s1,string s2)
{
    s2="0"+s2;
    string sum="0", s3="10",rs;
    int l1=s1.length(),l2=s2.length(),c=-1;
    rs.resize(l1);
    for(int i=0; i<l1; i++)
    {
        string n1=s1.substr(i,1),ssum;
        sum=sum*s3+n1;
        ssum.resize(l2);
        int ls=sum.length();
        int k1,k2;
        for(k1=ls-1,k2=l2-1; k1>=0; k1--,k2--)
            ssum[k2]=sum[k1];
        for( k1=0; k1<l2-ls; k1++)
            ssum[k1]='0';
        string j="1",j2="1";
        while(1)
        {
            string s5=s2*j,s6;
            s6.resize(l2);
            int l5=s5.length();
            for(k1=l5-1,k2=l2-1; k1>=0; k1--,k2--)
                s6[k2]=s5[k1];
            for( k1=0; k1<l2-l5; k1++)
                s6[k1]='0';
            if(s6==ssum)
            {
                c++;
                rs[c]=j[0];
                sum="0";
                break;
            }
            else if(s6>ssum)
            {
                string s7=j-j2;
                c++;
                rs[c]=s7[0];
                sum=ssum-(s7*s2);
                break;
            }
            j=j+j2;
        }
    }
    return sum;
}
int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        cout<<endl;
        cout<<"addition:: "<<s1+s2<<endl<<endl;
        cout<<"subtraction:: "<<s1-s2<<endl<<endl;
        cout<<"mutiplication:: "<<s1*s2<<endl<<endl;
        cout<<"division:: "<<s1/s2<<endl<<endl;
        cout<<"modulous:: "<<s1%s2<<endl<<endl;
        cout<<endl;
    }
    return 0;
}
