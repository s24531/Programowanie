#include <iostream>
#include <vector>
#include <string>

struct student
{
  
  std::string imie;
  int srednia;
  
    student(std::string i, int s)
    {
        imie = i;
        srednia = s;
    }
    
};

auto get_best_student(std::vector<student> uczen) -> void
{
    int ocena = 0;
    std::string name;

        for(int i = 0;i < uczen.size(); i++)
        {
            if(uczen[i].srednia > ocena)
            {
                ocena = uczen[i].srednia;
                name = uczen[i].imie;
            }
        }
    
    std::cout << "Imię: " << name << "\n";
    std::cout << "Ocena: " << ocena << "\n";
    
}

int main()
{
    std::vector<student> stud;
    auto ocen = std::vector<double> {3,5,4,1};

    student st1("Maciek",ocen[0]);
    student st2("Bartek",ocen[1]);
    student st3("Paweł",ocen[2]);
    student st4("Jan",ocen[3]);

    stud.push_back(st1);
    stud.push_back(st2);
    stud.push_back(st3);
    stud.push_back(st4);
       
    get_best_student(stud);


    return 0;
}