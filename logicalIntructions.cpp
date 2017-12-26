#include"header.h"
int n;
void stc(int &CF)
{
    CF = 1;
}

void ana(string &a, string r)
{
    int temp1 = hextodec(a);
    int temp2 = hextodec(r);
    temp1 = temp1 & temp2;
    a = dectohex(temp1);
}

void ani(string &a, string r)
{
    int temp1 = hextodec(a);
    int temp2 = hextodec(r);
    temp1 = temp1 & temp2;
    a = dectohex(temp1);
}
void cmc(int &CF)
{
    if(CF == 1)
        CF = 0;
    else
        CF = 1;
}
void cmp(string a, string r,int flag[])
{
    int CF,ZF,SF;
    int tmp1 = hextodec(a);
    int tmp2 = hextodec(r);
    if(tmp1 > tmp2)
    {
        SF = 0;
        CF = 0;
        ZF = 0;
    }
    else if(tmp1 < tmp2)
    {
        SF = 1;
        CF = 1;
        ZF = 0;
    }
    else
    {
        SF = 0;
        CF = 0;
        ZF = 1;
    }
    flag[0]=SF;
    flag[2]=ZF;
    flag[7]=CF;
}
void rlc(string &s)
{
    int r[20],sum=0;
    int l=s.length();
    int i=0;
    while(i<l)
    {
        if(s[i]>64 &&s[i]<71)
             n=s[i]-55;
        else
            n=s[i]-48;
        int k=4*(i+1);
        while(n!=1 && n!=0)
        {
            r[--k]=n%2;
            n=n/2;
        }
        r[--k]=n;
        i++;
    }
    int tmp=r[0];
    while(i<(l*4))
    {
        r[i]=r[i+1];
        i++;
    }
    r[7]=tmp;
    while(i<l*2)
    {
		int t=(l*4)-1-i;
        int tmp=r[i];
        r[i]=r[t];
        r[t]=tmp;
        i++;
    }
    int j=0;
    while(j<l*4)
    {
         if(r[j]==1)
                sum+=pow(2,j);
         j++;
    }
    s=dectohex(sum);
}
int compliment(string s)
{
    int r[100]={0},sum=0,n=0;
    int l=s.length();
    int i=0;
    while(i<l)
    {
        if(s[i]>64 &&s[i]<71)
             n=s[i]-55;
        else
            n=s[i]-48;
        int k=4*(i+1);
        while(n!=1 && n!=0)
        {
            r[k--]=n%2;
            n=n/2;
        }
        r[k--]=n;
        i++;
    }
    while(i<l*2)
    {
		int t=(l*4)-1-i;
        int tmp=r[i];
        r[i]=r[t];
        r[t]=tmp;
        i++;
    }
    int j=0;
    while(j<l*4)
    {
            if(r[j]==1)
                r[j]=0;
            else
                r[j]=1;
            j++;
    }
    while(j<l*4)
    {
            if(r[j]==1)
                sum+=pow(2,j);
            j++;
    }
    return sum;
}
void rrc(string &s)
{
    int r[20],sum=0;
    int l=s.length();
    int i=0;
    while(i<l)
    {
        if(s[i]>64 &&s[i]<71)
             n=s[i]-55;
        else
            n=s[i]-48;
        int k=4*(i+1);
        while(n!=1 && n!=0)
        {
            r[--k]=n%2;
            n=n/2;
        }
        r[--k]=n;
        i++;
    }
    int tmp=r[7];
    i=(l*4)-1;
    while(i>0)
    {
        r[i]=r[i-1];
        i--;
    }
    r[0]=tmp;
    while(i<l*2)
    {
		int t=(l*4)-1-i;
        int tmp=r[i];
        r[i]=r[t];
        r[t]=tmp;
        i++;
    }
    int j=0;
    while(j<l*4)
    {
           if(r[j]==1)
                sum+=pow(2,j);
            j++;
    }
    s=dectohex(sum);
}

void ral(string &s,int &CF)
{
    int r[100]={0},sum=0,n=0;
    int l=s.length();
    int i=0;
    while(i<l)
    {
        if(s[i]>64 &&s[i]<71)
             n=s[i]-55;
        else
            n=s[i]-48;
        int k=4*(i+1);
        while(n!=1 && n!=0)
        {
            r[--k]=n%2;
            n=n/2;
        }
        r[--k]=n;
        i++;
    }
    int tmp=r[0];
    while(i<(l*4)-1)
    {
        r[i]=r[i+1];
        i++;
    }
    r[i]=CF;
    CF=tmp;
    while(i<l*2)
    {
		int t=(l*4)-1-i;
        int tmp=r[i];
        r[i]=r[t];
        r[t]=tmp;
        i++;
    }
    int j=0;
    while(j<l*4)
    {
         if(r[j]==1)
                sum+=pow(2,j);
         j++;
    }
    s=dectohex(sum);
}

void rar(string &s,int &CF)
{
    int r[100]={0},sum=0,n=0;
    int l=s.length();
    int i=0;
    while(i<l)
    {
        if(s[i]>64 &&s[i]<71)
             n=s[i]-55;
        else
            n=s[i]-48;
        int k=4*(i+1);
        while(n!=1 && n!=0)
        {
            r[--k]=n%2;
            n=n/2;
        }
        r[--k]=n;
        i++;
    }
    int tmp=r[7];
    i=l*4;
    while(i>0)
    {
        r[i]=r[i-1];
        i--;
    }
    r[0]=CF;
    CF=tmp;
     while(i<l*2)
    {
		int t=(l*4)-1-i;
        int tmp=r[i];
        r[i]=r[t];
        r[t]=tmp;
        i++;
    }
    int j=0;
    while(j<l*4)
    {
        if(r[j]==1)
            sum+=pow(2,j);
        j++;
    }
    s=dectohex(sum);
}





