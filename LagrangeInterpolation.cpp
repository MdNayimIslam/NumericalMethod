#include<bits/stdc++.h>
using namespace std;

float lagrange(int Size, float X, float x[], float y[])
{
    float sum=0;
    for (int r=0; r<Size; r++)
    {
        float i=1;
        for (int c=0; c<Size; c++)
        {
            if (r!=c)
                i=i*(X-x[c])/(x[r]-x[c]);
        }
        i = i*y[r];
        sum = sum+i;
    }
    return sum;
}

int main()
{
    int Size=4;
    float x[Size],y[Size],X=135,Result;

    x[0]=300;
    x[1]=304;
    x[2]=305;
    x[3]=307;

    y[0]=2.4771;
    y[1]=2.4829;
    y[2]=2.4843;
    y[3]=2.4871;

    cout <<"TABLE:" << endl;
    cout <<"---------------"<< endl;
    cout <<"X\t"<<"Y\t"<< endl;
    cout <<"---------------"<< endl;
    for(int i=0; i<Size; i++)
        cout<<x[i]<<"\t"<<y[i]<<endl;
    cout <<"---------------"<< endl<<endl;

    Result = lagrange(Size,X,x,y);
    cout<<"X:"<<X<<endl;
    cout<<"f("<<X<<"): "<<Result<<endl;

    return 0;
}
