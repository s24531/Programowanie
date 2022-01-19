#include <iostream>
#include <vector>
#include <string>

struct student
{
  
  std::string imie;
  float srednia;
  std::vector<int> oc;
  
    student(std::string i, std::vector<int> oc)
    {
        imie = i;
        int suma = 0;

        for(auto i = 0; i < oc.size(); i++)
        {
            suma+=oc[i];
        }

        srednia = suma/oc.size();
    }
    
};

auto get_best_student(std::vector<student> uczen) -> void
{
    float bestmark = 0;    
    std::string bestname;

    for(auto i = 0; i < uczen.size(); i++)
    {
        if(uczen[i].srednia > bestmark)
        {
            bestmark =  uczen[i].srednia;
            bestname = uczen[i].imie;
        }
    }
    
    std::cout << "Imię: " << bestname << "\n";
    std::cout << "Średnia: " << bestmark << "\n";
    
}

int main()
{
    std::vector<student> stud;

    std::vector<int> mark1 = {3,5,4,1};
    std::vector<int> mark2 = {1,4,2,5};
    std::vector<int> mark3 = {2,2,6,3};
    std::vector<int> mark4 = {4,6,4,2};

    student st1("Maciek",mark1);
    student st2("Bartek",mark2);
    student st3("Paweł",mark3);
    student st4("Jan",mark4);

    stud.push_back(st1);
    stud.push_back(st2);
    stud.push_back(st3);
    stud.push_back(st4);
       
    get_best_student(stud);


    return 0;
}