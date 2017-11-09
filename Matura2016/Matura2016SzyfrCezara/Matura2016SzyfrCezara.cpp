#include <iostream>
#include <string>

using namespace std;

string szyfrCezara(string zdanie, int przesuniecie)
{
    string noweZdanie = "";

    for(int i=0; i < zdanie.length(); i++)
    {
        if(zdanie[i] == ' '){
            noweZdanie += ' ';
        }
        else{
            if((zdanie[i]+przesuniecie%26) > 90){
                noweZdanie += zdanie[i]+przesuniecie%26 - 25;
            }
            else{
                noweZdanie += zdanie[i] + przesuniecie%26;
            }
        }
    }
    return noweZdanie;

}

string odszyfrowanieCezar(string zdanieZaszyfrowane, int przesuniecie)
{
    string noweZdanie = "";

    for(int i=0; i<zdanieZaszyfrowane.length(); i++)
    {
        if(zdanieZaszyfrowane[i] - przesuniecie%26 < 65){
            noweZdanie += zdanieZaszyfrowane[i] - przesuniecie%26 + 26;
        }
        else{
            noweZdanie += zdanieZaszyfrowane[i] - przesuniecie%26;
        }
        }
    return noweZdanie;
}


bool czyDobrzeZaszyfrowane(string slowo, string slowoSzyfr)
{
    int i = 1;
    int przesuniecie = (slowoSzyfr[0]-slowo[0] + 26)%26;

    while(i<slowo.length())
    {
        if((slowoSzyfr[i]- slowo[i] + 26)%26 == przesuniecie){
            i +=1;
        }
        else{
            return false;
        }
    }

    return true;
}


int main ()
{
    string zdanie, noweZdanie;
    string slowo, slowoSzyfr;
    int przesuniecie = 107; // 26 - ilosc liter w alfabecie lacinskim

    /*while(getline(cin, zdanie)){
        noweZdanie = szyfrCezara(zdanie, przesuniecie);
        cout << noweZdanie << endl;
    }*/

    /*while(cin >> zdanie >> przesuniecie)
    {
        noweZdanie = odszyfrowanieCezar(zdanie, przesuniecie);
        cout << noweZdanie << endl;
    }*/

    while(cin >> slowo >> slowoSzyfr){
    if(!czyDobrzeZaszyfrowane(slowo, slowoSzyfr))
        cout << slowo << endl;
    }

    return 0;
}
