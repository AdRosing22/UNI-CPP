//Program för att räkna ut minmum, maximum och medelvärde
//Skapat av Adam Rosing 11-11-2020

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int max=INT_MIN, min=INT_MAX, antal = 0, input; //deklarerar flera variabler till int
    double summa = 0.0; //deklararerar double för att få decimalt medelvärde
    
    

    while(cin >> input)  //så längde input är en siffra
    {
        summa += input; //addera varje input
        antal++;       // antalet ökar med 1 varje gång det körs

        if(input > max)  //talet större än tidigare största
        max = input;        

        if(input < min)  //talet mindre än tidigare minsta
        min = input;
    
    }

    double medel = summa / antal;  //medeltal = summa delat antal
    cout<<"MAX:"<<max<<endl;
    cout<<"MIN:"<<min<<endl;
    cout<<"MEDELVÄRDE:"<<medel<<endl;


    return 0;


}
