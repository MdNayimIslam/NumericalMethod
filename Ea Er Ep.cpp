#include <bits/stdc++.h>
using namespace std;
int main()

{
float True_value = 48.0474;
float Measured_value = 0.0042;

float Absolute_Error = True_value - Measured_value;
cout<< "Absolute Error: " << setprecision(4) << Absolute_Error << endl;

float Relative_Error = Absolute_Error /True_value;
cout<< "Relative Error: " << setprecision(4) << Relative_Error << endl;

float Percentage_Error = Relative_Error*100 ;
cout<< "Percentage Error: " << setprecision(4) << Percentage_Error << "%" << endl;

return 0;
}

