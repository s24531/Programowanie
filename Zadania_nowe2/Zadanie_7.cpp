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

auto enter_into_group(std::vector<student> stud, std::string uczen) -> void
{
  stud.push_back(uczen);

  //std::cout << stud[0].imie;
}

auto main() -> int
{
  std::vector<student> p;

  student st1("Bartek");

  enter_into_group(p, st1.imie);


    return 0;
}