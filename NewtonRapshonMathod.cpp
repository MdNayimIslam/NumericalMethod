#include <bits/stdc++.h>
float f(float a)
{
    return a*sin(a)+cos(a);
}
float df(float a)
{
    return a*cos(a);
}
using namespace std;
int main()
{
    float a=3.1416,R;
    int i=1;
    do
    {
        R = (a - (f(a)/df(a)));
        cout<<fixed<<setprecision(4)<<"iterator: "<<i<<"\tXn: "<<a<<"\tf(Xn): "<<f(a)<<"\tdf'(Xn): "<<df(a)<<"\tRoot: "<<R<<endl;
        a = R;
        i++;
    }
    while(4>i);
    return 0;
}
