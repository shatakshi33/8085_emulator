#include<iostream>
#include <sstream>
#include <string>
#include<fstream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;

class program
{
    public:
            string memloc,inst;
};
class memory
{
    public:
            string loc,data;
    public:
        void setdata(string location, string info)
        {
            loc = location;
            data = info;
        }
        string search()
        {
            return loc;
        }
        string locdata()
        {
             return data;
        }
        void memdata(string a)
        {
            data = a;
        }
        void sets(string location, string info)
        {
            loc = location;
            data = info;
        }

};

void help();
int check(string location, memory ob[], int j);
void mov(string &a, string b);
string mvi(string  &a, string data);
void lda(string &a, string data);
void sta(string a, string loc);
void lhld(string &l, string &h, string loc);
void shld(string l, string h, string loc);
void ldax(memory ob[], string B,string C, int j,string &A);
void stax(memory ob[], string B, string C, int j, string A);
void in(string &a, string loc);
void out(string a, string loc);
void lxi(string &h, string &l, string loc);
void xchg(string &d, string &e, string &h, string &l);
int hextodec(string s);
string dectohex(int i);
int compliment(string s);
void rlc(string &s);
void rrc(string &s);
void ral(string &s,int &CF);
void rar(string &s,int &CF);
void ana(string &a, string b);
void ani(string &a, string b);
void cmp(string a, string b,int flag[]);
int jump(program ob[],string s);
string instructionsize(string cmd);
int toint(string a);
string tostring(int a);
void push(string v,string stack[],int &n);
string pop(string stack[],int &n);
void stc(int &CF);
void cmc(int &CF);
int subcarry(string A,string B);
int addcarry(int *res);
string checkString(string s);
void zerosignparity(string s,int a[]);
void sets(string loc, string data);
string dectohexmem(int i);



