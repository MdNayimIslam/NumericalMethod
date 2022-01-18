#include<bits/stdc++.h>
using namespace std;

float SumX(int Size, float x[])
{
    float sum=0;
    for(int i=0; i<Size; i++)
        sum=sum+x[i];
    return sum;
}

float SumY(int Size, float y[])
{
    float sum=0;
    for(int i=0; i<Size; i++)
        sum=sum+y[i];
    return sum;
}

float SumXY(int Size, float x[], float y[])
{
    float sum=0;
    for(int i=0; i<Size; i++)
        sum=sum+(x[i]*y[i]);
    return sum;
}

float XiYi(float x, float y)
{
    return x*y;
}
float Xi2(float x)
{
    return pow(x,2);
}

float SumX2(int Size, float x[])
{
    float sum=0;
    for(int i=0; i<Size; i++)
        sum=sum+pow(x[i],2);
    return sum;
}

float A1(float Size, float X, float Y, float XY, float X2)
{
    return ((Size*XY)-(X*Y)) / ((Size*X2)-(X*X));
}

float A0(float Size, float X, float Y, float A)
{
    return (Y/Size)-(A*(X/Size));
}

float functionY(float Ao, float A, float x)
{
    return Ao+A*x;
}

float S(float y,float funY)
{
    return y-funY;
}

int main()
{
    int Size=4;
    float X,Y,X2,XY,A,Ao,funY,funS,x[Size],y[Size];

    x[0]=50;
    x[1]=70;
    x[2]=100;
    x[3]=120;
    //x[4]=5;

    y[0]=12;
    y[1]=15;
    y[2]=21;
    y[3]=25;
    //y[4]=5.7;

    X = SumX(Size,x);
    Y = SumY(Size,y);
    X2= SumX2(Size,x);
    XY = SumXY(Size,x,y);

    A= A1(Size,X,Y,XY,X2);
    Ao = A0(Size,X,Y,A);

    cout <<"TABLE:" << endl;
    cout <<"+-------------------------------------------------+"<< endl;
    cout <<"|X\t"<<"Y\t"<<"X2\t"<<"XY\t"<<"Y(fitted)\t"<<"S |"<< endl;
    cout <<"+-------------------------------------------------+"<< endl;
    for(int i=0; i<Size; i++)
    {
        funS = S(y[i],funY);
        funY = functionY(Ao,A,x[i]);
        cout<<"|"<<x[i]<<"\t"<<y[i]<<"\t"<<Xi2(x[i])<<"\t"<<XiYi(x[i],y[i])<<"\t"<<funY<<"\t\t"<<funS<<"|"<<endl;
        funS=0;
        funY=0;
    }
    cout <<"+-------------------------------------------------+"<< endl;
    cout<<" "<<X<<"\t"<<Y<<"\t"<<X2<<"\t"<<XY<<"\t"<<endl<<endl;

    cout <<"._____________________________."<< endl;
    cout<<"| Y = Ao       + A1      * Xi |"<<endl;
    cout<<"| Y = "<<A<<" + "<<Ao<<" * Xi |"<<endl;
    cout <<"+-----------------------------+"<< endl;
    return 0;
}

