#include <iostream>
#include <string>

using namespace std;

bool isThereMoreZeroNumbers(string number)
{
    int i=0;
    int quantityOfZero = 0;

    while(i<number.size())
    {
        if(number[i] == '0')
        {
            quantityOfZero += 1;
        }
        i+=1;
    }

    if(quantityOfZero > (number.size() - quantityOfZero))
        return true;

    return false;
}

int main()
{
    string binaryNumber;
    int howManyNumbersHaveMoreZero = 0;

    while(getline(cin, binaryNumber))
    {
        if(isThereMoreZeroNumbers(binaryNumber))
            howManyNumbersHaveMoreZero += 1;
    }
    cout << howManyNumbersHaveMoreZero << endl;

    return 0;
}
