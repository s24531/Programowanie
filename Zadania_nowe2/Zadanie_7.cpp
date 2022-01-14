#include <iostream>
#include <vector>
#include <string>

struct group
{
  
  std::string nazwa;
  std::vector<std::string> studenci;

    
};

auto enter_into_group(std::vector<group> stud, std::string student) -> void
{
    stud.push_back(student);


}


int main()
{
    std::string imie;
    std::vector<group> stud;

    std::cout << "Podaj imie studenta: ";
    std::cin >> imie;

    group st1("Maciek");
    group st2("Bartek");
    group st3("Paweł");
    group st4("Jan");

    stud.push_back(st1);
    stud.push_back(st2);
    stud.push_back(st3);
    stud.push_back(st4);

    enter_into_group(stud, imie);

    return 0;
}