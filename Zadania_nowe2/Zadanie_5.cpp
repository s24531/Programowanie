#include <iostream>
#include <vector>
#include <string>

auto split(std::string zdanie) -> std::vector<std::string>
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

	return slowa;
}

auto main() -> int
{
    std::string zdanie;

    std::cout << "Napisz zdanie: ";
    std::getline(std::cin, zdanie);

    std::vector<std::string> zd; 

    std::cout << "Zdanie w wektorze: \n"; 
    
    zd = split(zdanie);

    for(int i=0;i<zd.size();i++)
    {
        std::cout << "[" << i << "]" << zd[i] << "\n";
    }

    return 0;
}