#include <iostream>
#include <string>

using namespace std;

bool isNumberDivisibleBy2(string binaryNumber)
{
    if(binaryNumber[binaryNumber.size()-1] == '0')
    {
        return true;
    }

    return false;
}


bool isNumberDivisibleBy8(string binaryNumber)
{
    int lastNumberIndex = binaryNumber.size()-1;

    for(int i=0; i<3; i++)
    {
        if(binaryNumber[lastNumberIndex-i] != '0')
        {
            return false;
        }
    }
    return true;

}


int main()
{
    string binaryNumber = "";
    int quantityOfNumbersDivisibleBy2 = 0;
    int quantityOfNumbersDivisibleBy8 = 0;


    while(getline(cin, binaryNumber))
    {
        if(isNumberDivisibleBy2(binaryNumber))
        {
            quantityOfNumbersDivisibleBy2 += 1;
        }

        if(isNumberDivisibleBy8(binaryNumber))
        {
            quantityOfNumbersDivisibleBy8 += 1;
        }

    }

    cout << quantityOfNumbersDivisibleBy2 << endl;
    cout << quantityOfNumbersDivisibleBy8 << endl;
}
