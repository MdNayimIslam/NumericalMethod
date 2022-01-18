#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Size=5;
    float x[Size], y[Size], z[Size], Xsum=0, Ysum=0, Zsum=0, X2sum=0, Y2sum=0, XYsum=0, ZXsum=0, ZYsum=0, S=0;
    x[0]=0;
    x[1]=1;
    x[2]=2;
    x[3]=4;
    x[4]=6;

    y[0]=0;
    y[1]=1;
    y[2]=3;
    y[3]=2;
    y[4]=8;

    z[0]=2;
    z[1]=4;
    z[2]=3;
    z[3]=16;
    z[4]=8;

    cout <<"\t    Multiple Linear Least Squares Table" << endl;
    cout <<"+----------------------------------------------------------+"<< endl;
    cout <<"X\t"<<"Y\t"<<"Z\t"<<"X2\t"<<"Y2\t"<<"XY\t"<<"ZX\t"<<"ZY\t"<< endl;
    cout <<"+----------------------------------------------------------+"<< endl;
    for(int i=0; i<Size; i++)
    {
        Xsum=Xsum+x[i];
        Ysum=Ysum+y[i];
        Zsum=Zsum+z[i];
        X2sum=X2sum+(x[i]*x[i]);
        Y2sum=Y2sum+(y[i]*y[i]);
        XYsum=XYsum+(x[i]*y[i]);
        ZXsum=ZXsum+(z[i]*x[i]);
        ZYsum=ZYsum+(z[i]*y[i]);
        cout<<x[i]<<"\t"<<y[i]<<"\t"<<z[i]<<"\t"<<(x[i]*x[i])<<"\t"<<(y[i]*y[i])<<"\t"<<(x[i]*y[i])<<"\t"<<(z[i]*x[i])<<"\t"<<(z[i]*y[i])<<endl;
    }
    cout <<"+----------------------------------------------------------+"<< endl;
    cout<<Xsum<<"\t"<<Ysum<<"\t"<<Zsum<<"\t"<<X2sum<<"\t"<<Y2sum<<"\t"<<XYsum<<"\t"<<ZXsum<<"\t"<<ZYsum<<"\t"<<endl<<endl;


    float D = (Size*XYsum*XYsum+Xsum*Xsum*Y2sum+Ysum*X2sum*Ysum) - (Size*X2sum*Y2sum+Xsum*Ysum*XYsum+Ysum*Xsum*XYsum);
    float X = ((Xsum*Y2sum*ZXsum+Ysum*X2sum*ZYsum+Zsum*XYsum*XYsum)-(Xsum*XYsum*ZYsum+Ysum*XYsum*ZXsum+Zsum*X2sum*Y2sum))/D;
    float Y = ((Size*XYsum*ZYsum+Ysum*Ysum*ZXsum+Zsum*Xsum*Y2sum)-(Size*Y2sum*ZXsum+Ysum*Xsum*ZYsum+Zsum*XYsum*Ysum))/D;
    float Z = ((Size*XYsum*ZXsum+Xsum*Xsum*ZYsum+Zsum*X2sum*Ysum)-(Size*X2sum*ZYsum+Xsum*Ysum*ZXsum+Zsum*Xsum*XYsum))/D;

    cout<<endl<<"+-------------------------+"<< endl;
    cout<<Size<<"ao + "<<Xsum<<"a1 + "<<Ysum<<"a2 = "<<Zsum<<endl;
    cout<<Xsum<<"ao + "<<X2sum<<"a1 + "<<XYsum<<"a2 = "<<ZXsum<<endl;
    cout<<Ysum<<"ao + "<<XYsum<<"a1 + "<<Y2sum<<"a2 = "<<ZYsum<<endl;
    cout<<"Ao:"<<X<<"\tA1:"<<Y<<"\ta2:"<<Z<<endl;
    cout<<"+-------------------------+"<< endl;

    return 0;
}
