#include <iostream>
#include <string>

using namespace std;

string findTheHighestValue(string maxValue, string value)
{
    if(value.size() > maxValue.size()){
        return value;
    }
    return maxValue;
}

string findTheLowestValue(string minValue, string value)
{
    if(value.size() < minValue.size()){
        return value;
    }
    return minValue;
}


int main()
{
    string binaryNumber;
    string maxValue = "";
    string minValue = "";
    int maxNumberIndex = 1, minNumberIndex = 1;
    int i = 1;

    while(getline(cin, binaryNumber))
    {
        if(i==1)
        {
            maxValue = binaryNumber;
            minValue = binaryNumber;
        }
        maxValue = findTheHighestValue(maxValue, binaryNumber);
        minValue = findTheLowestValue(minValue, binaryNumber);
       // maxValue = [](string maxVal, string val) -> string{ return (val.size() > maxVal.size()) ? val : maxVal;}(maxValue, binaryNumber);
        //minValue = [](string minVal, string val) -> string{ return (val.size() < minVal.size()) ? val : minVal;}(minValue, binaryNumber);
        if(minValue == binaryNumber)
        {
            minNumberIndex = i;
        }
        if(maxValue == binaryNumber)
        {
            maxNumberIndex = i;
        }
        i+=1;
    }

    cout << minNumberIndex << "  " << minValue << endl;
    cout << maxNumberIndex << "  " << maxValue << endl;

    return 0;
}
