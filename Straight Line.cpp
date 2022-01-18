#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Size=4;
    float x[Size], y[Size], Xsum=0, Ysum=0, X2sum=0, XYsum=0, Y=0, S=0;
    x[0]=0;
    x[1]=2;
    x[2]=5;
    x[3]=7;

    y[0]=-1;
    y[1]=5;
    y[2]=12;
    y[3]=20;

    cout <<"   Straight Line Table" << endl;
    cout <<"+-------------------------+"<< endl;
    cout <<"|X\t"<<"Y\t"<<"X2\t"<<"XY\t"<< endl;
    cout <<"+-------------------------+"<< endl;
    for(int i=0; i<Size; i++)
    {
        Xsum=Xsum+x[i];
        Ysum=Ysum+y[i];
        X2sum=X2sum+(x[i]*x[i]);
        XYsum=XYsum+(x[i]*y[i]);
        cout<<x[i]<<"\t"<<y[i]<<"\t"<<(x[i]*x[i])<<"\t"<<(x[i]*y[i])<<endl;
    }
    cout <<"+-------------------------+"<< endl;
    cout<<Xsum<<"\t"<<Ysum<<"\t"<<X2sum<<"\t"<<XYsum<<"\t"<<endl<<endl;

    float A1 = ((Size*XYsum) - (Xsum*Ysum)) / ((Size*X2sum) - (Xsum*Xsum)) ;
    float Ao = (Ysum/Size) - (A1*(Xsum/Size));

    cout<<endl<<"A1: "<<A1<<"\tAo: "<<Ao<<endl;

    cout <<endl<<endl<<"+---------------------+"<< endl;
    cout <<"Y[Ao+A1*xi]\t"<<"S[yi-Y]"<<endl;
    cout <<"+---------------------+"<< endl;
    for(int i=0; i<Size; i++)
    {
        Y = Ao + (A1*x[i]);
        S =S+ pow((y[i]-Y),2);
        cout<<fixed<<setprecision(4)<<Y<<"\t\t"<<pow((y[i]-Y),2)<<endl;
        Y=0;
    }
    cout <<"+---------------------+"<< endl;
    cout<<"\t\t"<<S<<endl;

    return 0;
}
