#include <iostream>
#include <stdlib.h>
#include <string>

auto error () -> void
{
    std::cout << "ERR\n";
}

auto check_number (std::string num) -> bool
{
    for (auto i = 0; i < num.length(); i++)
    {
        if (isdigit(num[i]))
        {
            return true;
        }
        else
        {
            return false;
        }    
    }
}

auto enter_matrix (int row1, int col2)
{
    int * matrix = new int [row1 * col2];
    std::string num;
    int num1;

    //wprowadzanie liczb do macierzy
    for(auto i = 0; i < row1; i++)
    {
        for(auto j = 0; j < col2; j++)
        {
            std::cout << "A[" << i+1 << "][" << j+1 << "]: ";
            std::cin >> num;
            if(check_number(num))
            {   
                num1 = std::stoi(num);
                matrix[i*col2+j] = num1;
            }
            else
            {
                std::cout << "To nie jest liczba\n";
                j--;
            }
        }
    }
    return matrix;
}

auto display_matrix(int * matrix, int row1, int col2) -> void
{
    for(auto i = 0; i < row1; i++)
    {
        for(auto j = 0; j < col2; j++)
        {
            std::cout << matrix[i*row1+j];
            if(j==col2-1)
            {
                std::cout << "\n";
            }
            else
            {
                std::cout << " ";
            }
        }
    }
}

auto main() -> int
{
    int calc;

    std::cout << "Kalkulator macierzowy\n";
    std::cout << "Proszę wybrać odpowiednią opcję:\n";
    std::cout << "1. Dodawanie i odejmowanie macierzy.\n";
    std::cout << "2. Mnożenie macierzy.\n";
    std::cout << "3. Transpozycja macierzy.\n";
    std::cout << "4. Obliczanie wyznacznika macierzy kwadratowej.\n";
    std::cout << "Opcja: ";
    std::cin >> calc;

    switch(calc)
    {
        case 1:
        {
            int row1, col1;
            
            std::cout << "Podaj ilosc wierszy pierwszej macierzy: "; 
            std::cin >> row1;
            std::cout << "Podaj ilość kolumn pierwszej macierzy: ";
            std::cin >> col1;

            std::cout << "Wprowadź elementy do pierwszej macierzy: \n";
            int * matrixA = enter_matrix(row1, col1);


            int row2, col2;

            std::cout << "Podaj ilosc wierszy drugiej macierzy: "; 
            std::cin >> row2;
            std::cout << "Podaj ilość kolumn drugiej macierzy: ";
            std::cin >> col2;
            
            std::cout << "Wprowadź elementy do drugiej macierzy: \n";
            int * matrixB = enter_matrix(row2, col2);

            
            //jeśli macierze mają inne rozmiary to zakończ program
            if(row1!=row2 || col2!=col2)
            {   
                atexit(error);
                exit(0);
            }       


            int* add =  new int [row1 * col1];
            int* sub = new int [row1 * col1];


            //dodawanie i odejmowanie macierz
            for(auto i = 0; i < row1; i++)
            {
                for(auto j = 0; j < col1; j++)
                {
                    add[i*row1+j] = matrixA[i*row1+j] + matrixB[i*col1+j];
                    sub[i*row1+j] = matrixA[i*row1+j] - matrixB[i*col1+j];
                }
            }


            //wyświetlenie wyniku dodawania
            std::cout << "Wynik dodawania:\n";
            display_matrix(add, row1, col2);


            //wyświetlenie resultu odejmowania
            std::cout << "Wynik odejmowania:\n";
            display_matrix(sub, row1, col2);


            break;
        }
        case 2:
        {
            int row1, col1;
            
            std::cout << "Podaj ilość wierszy pierwszej macierzy: "; 
            std::cin >> row1;
            std::cout << "Podaj ilość kolumn pierwszej macierzy: ";
            std::cin >> col1;

            std::cout << "Wprowadź elementy do pierwszej macierzy: \n";
            int * matrixA = enter_matrix(row1, col1);


            int row2, col2;

            std::cout << "Podaj ilość wierszy drugiej macierzy: "; 
            std::cin >> row2;
            std::cout << "Podaj ilość kolumn drugiej macierzy: ";
            std::cin >> col2;

            std::cout << "Wprowadź elementy do drugiej macierzy: \n";
            int * matrixB = enter_matrix(row2, col2);
            

            //jeśli liczba kolumn w macierzy A i liczba wierszy w macierzy B są różne to zakończ program
            if(col1!=row2)
            {   
                atexit(error);
                exit(0);
            }


            int* result =  new int [col1 * row2];
            int temp;
            
            for(auto i = 0; i < row1; i++)
            {
                for(auto j = 0; j < col2; j++)
                {
                    temp = 0;
                    for(auto k = 0; k < row1; k++)
                    {
                        temp += matrixA[i*col1+k] * matrixB[k*col2+j];
                    }                 
                    result[i*col2+j] = temp;
                }
            }


            std::cout << "Wynik mnożenia: \n";
            for(auto i = 0; i < row1; i++)
            {
                for(auto j = 0; j < col2; j++)
                {
                    std::cout << result[i*col2+j];
                    if(j==col2-1)
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
        case 3:
        {   
            int row1, col1;
            
            std::cout << "Podaj ilość wierszy macierzy: "; 
            std::cin >> row1;
            std::cout << "Podaj ilość kolumn macierzy: ";
            std::cin >> col1;

            std::cout << "Wprowadź elementy do macierzy: \n";
            int* matrixA = enter_matrix(row1, col1);
            

            //wyświetlenie podanej przez uzytkownika macierzy
            display_matrix(matrixA, row1, col1);


            std::swap(row1,col1);


            //wyświetlenie transponowanej macierzy
            std::cout << "Macierz transponowana: \n";
            for(auto i = 0; i < row1; i++)
            {
                for(auto j = 0; j < col1; j++)
                {
                    std::cout << matrixA[j*row1+i];
                    if(j==col1-1)
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
        case 4:
        {
            int row1, col1;
            
            std::cout << "Podaj ilość wierszy macierzy: "; 
            std::cin >> row1;
            std::cout << "Podaj ilość kolumn macierzy: ";
            std::cin >> col1;


            //jeśli liczba kolumn i wierszy nie są sobie równe to zakończ program
            if(row1!=col1)
            {   
                atexit(error);
                exit(0);
            }


            std::cout << "Wprowadź elementy do macierzy: \n";
            int* matrixA = enter_matrix(row1, col1);

            



            break;
        }
    }
    return 0;
}

