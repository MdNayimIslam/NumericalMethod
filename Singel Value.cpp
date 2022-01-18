#include <bits/stdc++.h>
using namespace std;
int main()
{
    float True_value=27.47;

    float Absolute_Error = (float(1)/2)* pow(10,-2);
    cout<< "Absolute Error: " << setprecision(4) << Absolute_Error << endl;

    float Relative_Error = Absolute_Error/True_value;
    cout<< "Relative Error: "<< Relative_Error << endl;
    return 0;
}
