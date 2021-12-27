#include <iostream>
#include <stdlib.h>

auto exit1 () -> void
{
    std::cout << "ERR\n";
}

auto main() -> int
{
    int kalk;

    std::cout << "Kalkulator macierzowy\nProszę wybrać odpowiednią opcję:\n";
    std::cout << "1. Dodawanie i odejmowanie macierzy.\n";
    std::cout << "2. Mnożenie macierzy.\n";
    std::cout << "3. Transpozycja macierzy.\n";
    std::cout << "4. Obliczanie wyznacznika macierzy kwadratowej.\n";
    std::cout << "Opcja: ";
    std::cin >> kalk;

    switch(kalk)
    {
        case 1:
        {
            int wym1, wym2;
            
            std::cout << "Podaj ilosc wierszy pierwszej macierzy: "; 
            std::cin >> wym1;
            std::cout << "Podaj ilość kolumn pierwszej macierzy: ";
            std::cin >> wym2;

            int *macierzA = new int [wym1 * wym2];


            int wym3, wym4;

            std::cout << "Podaj ilosc wierszy drugiej macierzy: "; 
            std::cin >> wym3;
            std::cout << "Podaj ilość kolumn drugiej macierzy: ";
            std::cin >> wym4;

            int *macierzB = new int [wym3 * wym4];
            

            int *dodaj =  new int [wym1 * wym2];
            int *odejmij = new int [wym1 * wym2];
            
            //jeśli macierze mają inne rozmiary to zakończ program
            if(wym1!=wym3 || wym2!=wym4)
            {   
                atexit(exit1);
                exit(0);
            }

            //wprowadzanie liczb do pierwszej macierzy
            std::cout << "Wprowadź elementy w pierwszej macierzy: \n";
            for(auto i = 0; i < wym1; i++)
            {
                for(auto j = 0; j < wym2; j++)
                {
                    std::cout << "A[" << i+1 << "][" << j+1 << "]: ";
                    std::cin >> macierzA[i*wym2+j];
                }
            }

            //wprowadzanie liczb do drugiej macierzy
            std::cout << "Wprowadź elementy w drugiej macierzy: \n";
            for(auto i = 0; i < wym3; i++)
            {
                for(auto j = 0; j < wym4; j++)
                {   
                    std::cout << "B[" << i+1 << "][" << j+1 << "]: ";
                    std::cin >> macierzB[i*wym4+j];
                }
            }

            //dodawanie i odejmowanie macierz
            for(auto i = 0; i < wym1; i++)
            {
                for(auto j = 0; j < wym2; j++)
                {
                    dodaj[i*wym1+j] = macierzA[i*wym1+j] + macierzB[i*wym3+j];
                    odejmij[i*wym1+j] = macierzA[i*wym1+j] - macierzB[i*wym3+j];
                }
            }

            //wyświetlenie wyniku dodawania
            std::cout << "Wynik dodawania: \n";
            for(auto i = 0; i < wym1; i++)
            {
                for(auto j = 0; j < wym2; j++)
                {
                    std::cout << dodaj[i*wym1+j];
                    if(j==wym2-1)
                    {
                        std::cout << "\n";
                    }
                    else
                    {
                        std::cout << " ";
                    }
                }
            }

            //wyświetlenie wyniku odejmowania
            std::cout << "Wynik odejmowania: \n";
            for(auto i = 0; i < wym1; i++)
            {
                for(auto j = 0; j < wym2; j++)
                {
                    std::cout << odejmij[i*wym1+j];
                    if(j==wym2-1)
                    {
                        std::cout << "\n";
                    }
                    else
                    {
                        std::cout << " ";
                    }
                }
            }

            break;
        }
        case 2:
        {

            break;
        }
        case 3:
        {


            break;
        }
        case 4:
        {



            break;
        }
    }
    return 0;
}

