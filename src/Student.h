#include <iostream>
#include <string>

struct Student
{
    std::string imie;
    std::string nazwisko;
    std::string num_index;
    int semestr;
    float srednia;

     
    std::string opis()
    {
        std::string semestrString = std::to_string(semestr);
        std::string sredniaString = std::to_string(srednia);

        std::string value = "Imię: "+imie +"\n"+"Nazwisko: "+nazwisko +"\n"+"Numer indeksu: "+num_index+"\n" +"Semestr: "+semestrString +"\n"+"Średnia: "+sredniaString+"\n"; 

        return value;
    }
    
    Student(std::string a, std::string b, std::string c, int d, float e)
    {
        imie = a;
        nazwisko = b;
        num_index = c;
        semestr = d;
        srednia = e;
    }
};