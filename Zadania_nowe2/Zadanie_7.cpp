#include <iostream>
#include <vector>
#include <string>

struct student
{
  std::string imie;
  
  student(std::string i)
  {
    imie = i;
  }


};

struct group
{
  std::string nazwa;
  std::vector<student> studenci;

  group(std::string a, std::vector<student> s)
  {
    nazwa = a;
    studenci = s;
  }
   
};

auto enter_into_group(std::vector<student> stud, student uczen) -> void
{
  stud.push_back(uczen);

  std::cout << uczen.imie << "\n"; //<-- wyświetlony student z grupy
}

auto main() -> int
{
  std::vector<student> p;

  student st1("Bartek");

  enter_into_group(p, st1);


    return 0;
}