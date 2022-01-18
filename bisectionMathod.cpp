#include <bits/stdc++.h>
using namespace std;
float f(float x)
{
    return x*x*x -x-4;
}
int main()
{
    float a=1, b=2, Root;
    cout<<"a"<<"\t\t"<<"b"<<"\t\t"<<"f(a)"<<"\t\t"<<"f(b)"<<"\t\t"<<"Root"<<endl;
    do
    {
        Root = (a+b)/2;
        if(f(Root)*f(b)<0)
            a=Root;
        else
            b=Root;
        cout<<fixed<<setprecision(3)<<a<<"\t\t"<<b<<"\t\t"<<f(a)<<"\t\t"<<f(b)<<"\t\t"<<Root<<endl;
    }
    while(fabs(f(Root))>0.001);
    cout<<"the root is:"<<Root<<endl;
    return 0;
}
