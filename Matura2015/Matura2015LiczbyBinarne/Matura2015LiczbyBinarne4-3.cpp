#include <iostream>
#include <string>

using namespace std;

string whichNumberIsHigher(string firstNumber, string secondNumber)
{
    int i=0;
    while(firstNumber[i]==secondNumber[i])
    {
        i+=1;
    }

    if(firstNumber[i]=='1')
    {
        return firstNumber;
    }
    return secondNumber;

}

string whichNumberIsLower(string firstNumber, string secondNumber)
{
    int i=0;
    while(firstNumber[i]==secondNumber[i])
    {
        i+=1;
    }

    if(firstNumber[i]=='0')
    {
        return firstNumber;
    }
    return secondNumber;

}

string findTheHighestValue(string maxValue, string value)
{
    if(value.size() == maxValue.size())
    {
        return whichNumberIsHigher(maxValue, value);
    }

    else if(value.size() > maxValue.size())
    {
        return value;
    }

    return maxValue;
}

string findTheLowestValue(string minValue, string value)
{
    if(value.size() == minValue.size())
    {
        return whichNumberIsLower(minValue, value);
    }
    if(value.size() < minValue.size())
    {
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
