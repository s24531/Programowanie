#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int
{

    bool OpcjaN = false;
    bool OpcjaR = false;
    bool OpcjaL = false;

    auto zlicz = 0;

    auto rozmiar = argc - 1;

    if (argc <= 1)
    {
        std::cout << "Uzupełnij dane!\n";
        return 1;
    }

    for (int i = 1; i < rozmiar; ++i)
    {
        if (std::string(argv[i])=="-n")
        {
            OpcjaN = true;
            zlicz++;
        }
        else if (std::string(argv[i])=="-r")
        {
            OpcjaR = true;
            zlicz++;
        }
        else if (std::string(argv[i])=="-l")
        {
            OpcjaL = true;
            zlicz++;
        }
        else
        {
            break;
        }
        
    }

    if(OpcjaL==true)
    {
        if (OpcjaR==true)
        {
            for (auto i = rozmiar; i >= zlicz + 1; --i)
            {
                std::cout << argv[i] << "\n";
            }
        }
        else
        {
            for (auto i = zlicz - 1; i <= rozmiar; ++i)
            {
                std::cout << argv[i] << "\n";
            }
        }
    }
    else
    {
        if (OpcjaR==true)
        {
            for (auto i = rozmiar; i >= zlicz + 1; --i)
            {
                std::cout << argv[i] << " ";
            }
        }
        else
        {
            for (auto i = zlicz + 1; i <= rozmiar; ++i)
            {
                std::cout << argv[i] << " ";
            }
        }
    }

    if (OpcjaN==false)
    {
        std::cout << "\n";
    }

    return 0;
}