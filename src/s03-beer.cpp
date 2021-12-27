#include <iostream>
#include <string>

auto main (int argc, char* argv []) -> int
{
	auto const a = std::stoi(argv[1]);
    
    for(auto i=a; i>=0; --i)
    {
        auto b = a;
        if(i>1)
        {
            std::cout << i << " bottles of beer on the wall, " << i << " of beer.\n";
            std::cout << "Take one down, pass it around,\n";
        }
        if(i==1)
        {
            std::cout << i << " bottle of beer on the wall, " << i << " of beer.\n";
            std::cout << "Take one down, pass it around,\n";
        }        
        if(i==0)
        {
            std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
            std::cout << "Go to the store and buy some more, " << b << " bottles of beer on the wall...\n";
        }
    }
    
    return 0;
}
