//Program för att räkna hur många gånger ett ord nämns i indata text från fil

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include <list>
using namespace std;

typedef map<string, int> OrdCount_list;

int main()
{

    string filnamn;
    cin>>filnamn;
    ifstream TEXT(filnamn);

    string line, ord;
    int OrdCount;
    OrdCount_list OrdCount;

    while(getline(TEXT, line, ' '))
    {
        int ignorera;

        while((ignorera = line.find_first_of(".,!?()&:-123456789´")))
        {
            line.erase(ignorera, 1);
        }

        
        OrdCount++;


    }
    int nuvarande;
    OrdCount_list::const_iterator nuvarande(OrdCount.begin());
    

    while(nuvarande!=OrdCount.end())
    {
        cout<<nuvarande->first<<" "<<nuvarande->second<<endl;
    }
    return 0;

}
