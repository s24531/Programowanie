#include <iostream>
#include <string>
#include <unistd.h>

auto main (int argc, char* argv []) -> int
{
    auto const a = std::stoi(argv[1]);
    for(auto i=a;i>=0;--i)
    {
        std::cout << i << "\n";
        sleep(1);
    }
    return 0;
}

