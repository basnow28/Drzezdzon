#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

long long int binToDec(long long int binaryNumber)
{
    long long int decNumber = 0;
    long long int i = 0;
    while(binaryNumber > 0)
    {
        decNumber += (binaryNumber%2) * pow(2,i);
        i+=1;
        binaryNumber/=10;
    }
    return decNumber;
}

vector <long long int> decToBin(long long int decimalNumber)
{
    vector <long long int> binaryNumber;

    while(decimalNumber != 0)
    {
        binaryNumber.push_back(decimalNumber%2);
        decimalNumber /=2;
    }
    return binaryNumber;
}

char letterInNumericalSystem(int number)
{
    switch(number)
    {
    case 10:
        return 'A';
    break;
    case 11:
        return 'B';
    break;
    case 12:
        return 'C';
    break;
    case 13:
        return 'D';
    break;
    case 14:
        return 'E';
    break;
    case 15:
        return 'F';
    break;
    case 16:
        return 'G';
    break;
    default:
        break;
    }
}

string decToWhatever(long long int decimalNumber, int numericalSystem)
{
    string changedNumber = "";
    cout << "I am here!" << endl;

    while(decimalNumber != 0)
    {
        int i = decimalNumber%numericalSystem;
        cout << i << endl;
        if(i >= 10)
        {
            changedNumber += letterInNumericalSystem(i);
            cout << letterInNumericalSystem(i) << endl;
        }
        else
        {
            changedNumber += (i) + 48;
        }
        decimalNumber /= numericalSystem;
    }

    return changedNumber;
}


void displayNumber(vector <long long int> numberToDisplay)
{
    for(int i=numberToDisplay.size()-1; i>=0; i--)
    {
        cout << numberToDisplay[i];
    }
}

void displayNumber(string numberToDisplay)
{
    for(int i=numberToDisplay.size()-1; i>=0; i--)
    {
        cout << numberToDisplay[i];
    }
}
int main ()
{
    int whatSystemToChange;
    long long int number, changedNumber;

    cout << "What do you want to do? \n 1. Bin -> Dec \n 2. Dec -> Bin \n 3. Dec -> Whatever (3-16)" << endl;
    cin >> whatSystemToChange;


    switch(whatSystemToChange)
    {
    case 1:{
        cin >> number;
        changedNumber = binToDec(number);
        cout << changedNumber << endl;
        break;
    }
    case 2:{
        cin >> number;
        vector <long long int> numberToBin = decToBin(number);
        displayNumber(numberToBin);
        break;
    }
    case 3:{
        int numericalSystem;
        cout << "Enter decimal number: " << endl;
        cin >> number;
        cout << "Enter numerical system" << endl;
        cin >> numericalSystem;
        string changedNumber = decToWhatever(number,numericalSystem);
        displayNumber(changedNumber);
        break;
    }
    default:
        break;
    }
    return 0;
}
