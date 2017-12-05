#include <iostream>

using namespace std;

double valueOfFieldUnderTheCurveX2(long long int range[])
{
    double valueOfField = 0;

    for(double i=range[0]; i<range[1]; i+=0.01)
    {
        valueOfField += i*i*0.01;
    }
    return valueOfField;
}

int main()
{
    long long int range[2] = {0,1};
    cout << valueOfFieldUnderTheCurveX2(range);
    return 0;
}
