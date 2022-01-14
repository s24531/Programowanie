#include <iostream>
#include <vector>
#include <string>

struct group
{
  std::string nazwa;
  std::vector<std::string> studenci;

  group(std::string a, std::vector<std::string> s)
  {
    nazwa = a;
    studenci = s;
  }
   
};

auto enter_into_group(std::vector<std::string> stud, std::string uczen) -> void
{
  stud.push_back(uczen);

}

auto main() -> int
{
  std::vector<std::string> p;

  group st1("Bartek", p);

  enter_into_group(p, st1.nazwa);


    return 0;
}