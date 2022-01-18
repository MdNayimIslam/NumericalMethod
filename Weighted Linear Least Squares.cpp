#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Size=4;
    float w[Size], x[Size], y[Size];
    float Xsum=0, Ysum=0, Wsum=0, WXsum=0, WYsum=0, WX2sum=0, WXYsum=0;

    x[0]=0;
    x[1]=2;
    x[2]=5;
    x[3]=7;

    y[0]=-1;
    y[1]=5;
    y[2]=12;
    y[3]=20;

    w[0]=1;
    w[1]=1;
    w[2]=10;
    w[3]=1;

    cout <<"\tWeighted Linear Least Squares Table"<< endl;
    cout <<"+--------------------------------------------------+"<< endl;
    cout <<"X\t"<<"Y\t"<<"W\t"<<"WX\t"<<"WY\t"<<"WX2\t"<<"WXY"<< endl;
    cout <<"+--------------------------------------------------+"<< endl;
    for(int i=0; i<Size; i++)
    {
        Xsum=Xsum+x[i];
        Ysum=Ysum+y[i];
        Wsum=Wsum+w[i];
        WXsum=WXsum+(w[i]*x[i]);
        WYsum=WYsum+(w[i]*y[i]);
        WX2sum=WX2sum+(w[i]*x[i]*x[i]);
        WXYsum=WXYsum+(w[i]*x[i]*y[i]);
        cout<<x[i]<<"\t"<<y[i]<<"\t"<<w[i]<<"\t"<<(w[i]*x[i])<<"\t"<<(w[i]*y[i])<<"\t"<<(w[i]*x[i]*x[i])<<"\t"<<(w[i]*x[i]*y[i])<<endl;
    }
    cout <<"+--------------------------------------------------+"<< endl;
    cout<<Xsum<<"\t"<<Ysum<<"\t"<<Wsum<<"\t"<<WXsum<<"\t"<<WYsum<<"\t"<<WX2sum<<"\t"<<WXYsum<<"\t"<<endl<<endl;

    float X = (WYsum*WX2sum - WXYsum*WXsum) /(Wsum*WX2sum - WXsum*WXsum);
    float Y = (WYsum*WXsum - WXYsum*Wsum) /(WXsum*WXsum - WX2sum*Wsum);

    cout<<endl<<"+-------------------------+"<< endl;
    cout<<Wsum<<" * ao + "<<WXsum<<" * a1 = "<<WYsum<<endl;
    cout<<WXsum<<" * ao + "<<WX2sum<<" * a1 = "<<WXYsum<<endl;
    cout<<"Ao:"<<X<<"\tA1:"<<Y<<endl;
    cout<<"+-------------------------+"<< endl;

    cout<<endl<<"+-----------------------+"<< endl;
    cout<<"Y = "<<X<<" + "<<Y<<"x"<<endl;
    for(int i=0; i<Size; i++)
        cout<<i+1<<".\t"<<X+Y*x[i]<<endl;
    cout<<"+-----------------------+"<< endl;

    return 0;
}
