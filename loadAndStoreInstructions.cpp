#include"header.h"
string pop(string stacks[],int &n)
{
	if(n==0)
		return"00";
	else
		return stacks[--n];
}
void ldax(memory ob[],string B,string C,int j,string &A)
{
	int i=0;
	while(i<j)
	{
		 if(ob[i].search() == (B + C))
		 		A=ob[i].locdata();
		  i++;
	}
}
void stax(memory ob[], string B, string C, int j, string A)
{
	int i=0;
	while (i<j)
	{
		if(ob[i].search() == (B + C))
			    ob[i].memdata(A);
		 i++;
	}
}
void lxi(string &h,string &l,string loc)
{
	h=loc.substr(0,2);
	l=loc.substr(2,2);
}
void xchg(string &d, string &e, string &h, string &l)
{
    string a;
    a = d;
    d = h;
    h = a;
    a = e;
    e = l;
    l = a;
}
void xthl(string &h, string &l,string stacks[],int &n)
{
    push(h,stacks,n);
    push(l,stacks,n);
    string a = pop(stacks,n);
    string b = pop(stacks,n);
    stacks[++n] = h;
    stacks[++n] = l;
    h = a;
    l = b;
}
void push(string v,string stacks[],int &n)
{
	stacks[n++]=v;
	return;
}

void sphl(string h,string l,string sp[])
{
	sp[0]=l;
	sp[1]=h;
}
void mov(string &a,string b)
{
	a=b;
}
string mvi(string &a,string data)
{
	return data;
}
void lda(string &a,string data)
{
	a=data;
}

