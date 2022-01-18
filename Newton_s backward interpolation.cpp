#include <bits/stdc++.h>
using namespace std;
float f(float P,int Size)
{
    float r =P;
    for (int i=1; i<Size; i++)
        r=r*(P+i);
    return r;
}
int fac(int Size)
{
    int r = 1;
    for (int i=2; i<=Size; i++)
        r *=i;
    return r;
}
int main()
{
    int  Size=6;
    float P,h,sum,x[20], y[20][20];
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;
    x[4] = 5;
    x[5] = 6;

    y[0][0] = 24;
    y[1][0] = 35;
    y[2][0] = 47;
    y[3][0] = 59;
    y[4][0] = 66;
    y[5][0] = 79;
    for(int r=1; r<Size; r++)
    {
        for(int c=0; c<Size-r; c++)
            y[c][r] = y[c+1][r-1] - y[c][r-1];
    }



    cout <<"-----------------------------------------------------"<< endl;
    cout <<"\tBACKWARD DIFFERENCE TABLE" << endl;
    cout <<"-----------------------------------------------------"<< endl;
    cout <<"X\t"<<"Y\t"<<"DY0\t"<<"DY1\t"<<"DY2\t"<<"DY3\t"<< endl;
    cout <<"-----------------------------------------------------"<< endl;
    for(int r=0; r<Size; r++)
    {
        cout<<x[r];
        for(int c=0; c<Size-r; c++)
            cout<<"\t"<<y[r][c];
        cout<<endl;
    }
    cout <<"-----------------------------------------------------"<< endl;


    h = (x[1] - x[0]);
    P = (3.5 - x[Size-1]) / h;
    cout<<"P value is: "<<P<<endl;

    sum = y[Size-1][0];
    cout<<endl<<sum;
    for (int i = 1; i < Size; i++)
    {
        sum=sum+(f(P,i)*y[Size-i-1][i])/fac(i);
        cout<<" + ("<<f(P,i)<<"/"<<fac(i)<<")*"<<y[Size-i-1][i];
    }
    cout<<endl<<endl<<"Newton Backward Interpolation: "<<sum<<endl;
    return 0;
}

