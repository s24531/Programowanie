#include <iostream>
#include <vector>
#include <string>

struct student
{
  std::string imie;
  std::string nazwisko;
  std::vector<double> oc;
    
};

struct group
{
  std::string nazwa;
  std::vector<student> studenci; 
};

auto enter_into_group(group& stud, student uczen) -> void
{
  stud.studenci.push_back(uczen); 
}

int main()
{
  auto st1 = student {"Maciek","Nowak",{3,5,4,1}};
  auto st2 = student {"Bartek","Sokołowski",{1,4,2,5}};
  auto st3 = student {"Paweł","Kowalski",{2,2,6,3}};
  auto st4 = student {"Jan","Brzęczyszczykiewicz",{4,6,4,2}};;

  auto gr1 = group {"Gracze", {st1,st2}};

  std::cout << "Studenci w grupie Gracze:" << "\n";

  for(auto stud : gr1.studenci)
  {
    std::cout << stud.imie << " " << stud.nazwisko << "\n";
  }
    std::cout << "\n";

    enter_into_group(gr1,st3);
    enter_into_group(gr1,st4);

    std::cout << "Studenci w grupie Gracze po dodaniu dwóch studentów:" << "\n";
    for(auto stud : gr1.studenci)
    {
        std::cout << stud.imie << " " << stud.nazwisko << "\n";
    }

  return 0;
}