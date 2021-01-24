// Programm skapat av Adam Rosing 21-11-2020
// Labb2 Kurs introduktion till cpp
//Program för att formatera om indata från fil och skriva ut nya datan till en ny fil

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout<<"Namn på fil du vill läsa från"<<endl;                  //skriver ut fråga till anv
    string filnamn;                                             //deklarerar en variabel sträng
    cin>>filnamn;                                                //input går in i variabeln
    ifstream FIL(filnamn);                                  //läser från den input-filen, kallar strömmen för FIL

    if(!FIL.is_open())
    {
        cout<<"Filen öppnades inte"<<endl;
        return 0;                                            //ifall filen inte skulle öppnas så stannar programmet skriver ut en error text
    }

    cout<<"Var ska det sparas?"<<endl;
    string spara;
    cin>>spara;
    ofstream save(spara);                                        //skapar en utdatafil

    string fnamn, lnamn, adress, persnr, person;          //deklarerar variabler
    
    for (; !FIL.eof();)                        //!.eof(), så länge som det finns char kvar att läsa
    {
        getline(FIL, fnamn, ' ');                            //hämta allt fram tills försa SPACE
        getline(FIL, lnamn);                                //hämta allt fram till \n
        getline(FIL, persnr);                               //hämta allt på raden
        
        long int personnumber = stol(persnr);               //stol konverterar sträng till long int
        int kon = personnumber%100;                         // två sista siffrona i personnummret
        kon = kon/10;                                       //näst sista siffran i personnummret

            if ( kon%2 ==0)
            {
            person = "K";               //ifall det är jämnt = kvinna
            }
            else
            {
            person = "M";               //udda = man
            }
        getline(FIL,adress);                 //hämta allt på raden

        save<<lnamn<<", "<<fnamn<<"["<<person<<"]"<<endl<<adress<<endl;         //skriv ut variablerna, endl indikerar radbrytning
    }
    FIL.close();                                 //stäng in-streamen
    save.close();                                 //stäng ut-streamen

    return 0;


}
