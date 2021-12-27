#include <iostream>
#include <vector>
#include <string>

void split(std::string zdanie)
{
	std::vector<std::string> slowa;

	std::string temp = "";

	for(int i=0; i<zdanie.length(); i++)
    {	
		if(zdanie[i]==' ')
        {
			slowa.push_back(temp);
			temp = "";
		}
		else
        {
			temp.push_back(zdanie[i]);
		}
		
	}

	slowa.push_back(temp);

	for(int i=0;i<slowa.size();i++)
    {
        std::cout << slowa[i] << " ";
    }
    std::cout << std::endl;
}

auto main() -> int
{
    std::string zdanie;

    std::cout << "Napisz zdanie: ";
    std::getline(std::cin, zdanie);

    std::cout << "Zdanie w wektorze: "; 
    split(zdanie);
    return 0;
}