#include<bits/stdc++.h>
using namespace std;

int res(int dividend,int divisor)
{
        if(dividend>=INT_MAX and (divisor==1 or divisor==-1))
            return INT_MAX;
        else if(dividend==INT_MIN and divisor==1)
            return INT_MIN;
        else if(dividend==INT_MIN and divisor==-1)
            return INT_MAX;
        
     bool isnegative=false;
if((dividend<0 and divisor>0) or (dividend>0 and divisor<0))
        isnegative=true;
long long  absdividend=abs(dividend);
long long absdivisor=abs(divisor);

         int result=0;
    while(absdividend>=absdivisor)
    {
     long long temp=absdivisor;
     long  long   quotient=1;
        while(temp<=absdividend)
        {
           temp=temp<<1;
           quotient=quotient<<1;
        }
        quotient=quotient>>1;
        temp=temp>>1;
        result+=quotient;
        absdividend-=temp;
    }
        if(isnegative)
            return -result;
        else if(result>INT_MAX)
            return INT_MAX;
        else
            return result;
    }
int main()
{
    int dividend=INT_MAX;
    int divisor=1;
    cout<<res(dividend,divisor);
}