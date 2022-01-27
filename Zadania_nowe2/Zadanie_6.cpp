#include <iostream>
#include <vector>
#include <string>

struct student
{
  std::string imie;
  std::vector<int> oc;
    
};

auto average_of(student Student) -> double
{   
    double wynik=0; 
    double srednia;

    for(auto i=0; i<=Student.oc.size(); i++)
    {
        wynik+=Student.oc[i];
    }
    
    srednia=wynik/Student.oc.size();

    return srednia;
}

auto get_best_student(std::vector<student> uczen) -> student
{
    float bestmark = 0;    
    auto bestname = student{};

    for(auto a : uczen)
    {
        if(average_of(a) > bestmark)
        {
            bestmark = average_of(a);
            bestname = a;
        }
    }
    
    return bestname;
    
}

int main()
{
    auto st1 = student {"Maciek",{3,5,4,1}};
    auto st2 = student {"Bartek",{1,4,2,5}};
    auto st3 = student {"Paweł",{2,2,6,3}};
    auto st4 = student {"Jan",{4,6,4,2}};

    auto stud = std::vector<student> {st1,st2,st3,st4};
       
    std::cout << get_best_student(stud).imie << "\n";


    return 0;
}