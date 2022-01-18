#include <bits/stdc++.h>
using namespace std;
float f(float P,int Size)
{
    float r =P;
    for (int i=1; i<Size; i++)
    {
        if(i%2==0)
            r=r*(P+i);
        else
            r=r*(P-i);
    }
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
    int  Size=7;
    float P,h,sum,x[20], y[20][20];
    x[0] = 1.00;
    x[1] = 1.05;
    x[2] = 1.10;
    x[3] = 1.15;
    x[4] = 1.20;
    x[5] = 1.25;
    x[6] = 1.30;

    y[0][0] = 2.7183;
    y[1][0] = 2.8577;
    y[2][0] = 3.0042;
    y[3][0] = 3.1582;
    y[4][0] = 3.3201;
    y[5][0] = 3.4903;
    y[6][0] = 3.6693;
    for(int r=1; r<Size; r++)
    {
        for(int c=0; c<Size-r; c++)
            y[c][r] = y[c+1][r-1] - y[c][r-1];
    }



    cout <<"-----------------------------------------------------"<< endl;
    cout <<"\tForward DIFFERENCE TABLE" << endl;
    cout <<"-----------------------------------------------------"<< endl;
    cout <<"X\t"<<"Y\t"<<"DY0\t"<<"DY1\t"<<"DY2\t"<<"DY3\t"<< endl;
    cout <<"-----------------------------------------------------"<< endl;
    for(int r=0; r<Size; r++)
    {
        cout<<x[r];
        for(int c=0; c<Size-r; c++)
            cout<<fixed<<setprecision(4)<<"\t"<<y[r][c];
        cout<<endl;
    }
    cout <<"-----------------------------------------------------"<< endl;


    h = (x[1] - x[0]);
    P = 0.02 / h;
    cout<<"P value is: "<<P<<endl;

    sum = y[Size/2][0];
    cout<<endl<<sum;
    for (int i = 1; i < Size; i++)
    {
        sum=sum+(f(P,i)*y[(Size/2)][i])/fac(i);
        cout<<" + ("<<f(P,i)<<"/"<<fac(i)<<")*"<<y[(Size/2)][i];
    }
    cout<<endl<<endl<<"Gauss Forward Interpolation: "<<sum<<endl;
    return 0;
}

