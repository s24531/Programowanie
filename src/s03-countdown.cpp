#include <iostream>
#include <string>
<<<<<<< HEAD
=======
#include <unistd.h>
>>>>>>> d080a0e9e9d07eddf984d71c0e9fe6f641c9e3c3

auto main (int argc, char* argv []) -> int
{
    auto const a = std::stoi(argv[1]);
    for(auto i=a;i>=0;--i)
    {
        std::cout << i << "\n";
<<<<<<< HEAD
=======
        sleep(1);
>>>>>>> d080a0e9e9d07eddf984d71c0e9fe6f641c9e3c3
    }
    return 0;
}

