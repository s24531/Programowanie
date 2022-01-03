#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>  

auto error () -> void
{
    std::cout << "ERR\n";
}

auto check_number (std::string num) -> bool
{
    for (auto i = 0; i < num.length(); i++)
    {
        if(num[0]=='-')
        {
            if(isdigit(num[i+1]))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(isdigit(num[i]))
            {
                return true;
            }
            else
            {
                return false;
            }   
        } 
    }
}

auto enter_matrix (int row1, int col1)
{
    int matrix[20][20];
    std::string num;
    int num1;

    //wprowadzanie liczb do macierzy
    for(auto i = 0; i < row1; i++)
    {
        for(auto j = 0; j < col1; j++)
        {
            std::cout << "A[" << i+1 << "][" << j+1 << "]: ";
            std::cin >> num;
            if(check_number(num))
            {   
                num1 = std::stoi(num);
                matrix[i][j] = num1;
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

auto display_matrix(int matrix[20][20], int row1, int col1) -> void
{
    std::cout << "\nMacierz podana przez użytkownika:\n";
    for(auto i = 0; i < row1; i++)
    {
        for(auto j = 0; j < col1; j++)
        {
            std::cout << matrix[i][j];
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
}

auto Sarrus_method(int matrix[20][20]) -> int
{
    int oper1 = matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1];
    int oper2 = matrix[0][2] * matrix[1][1] * matrix[2][1] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2];
    int result = oper1 - oper2;

    return result;
}

// auto Laplace_method (int matrix, int size) -> int
// {
//     int * tempmatrix = new int[size * size];
//     int oper;
//     int det=0;

//     for (auto i = 0; i < size; i++) 
//     {
//         for(auto j = 0; j < size; j++)
//         {
//             oper = (i)*size+(j+1);
//             tempmatrix[i*size+j] = matrix[oper];
//         }
//     }

//     display_matrix(tempmatrix, size-1, size-1);

//     return det;
// }

auto main() -> int
{
    int calc;

    int matrixA[20][20];
    int row1, col1;
    
    int matrixB[20][20];
    int row2, col2;

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
            std::cout << "Podaj ilosc wierszy pierwszej macierzy: "; 
            std::cin >> row1;
            std::cout << "Podaj ilość kolumn pierwszej macierzy: ";
            std::cin >> col1;

            std::cout << "Wprowadź elementy do pierwszej macierzy: \n";
            matrixA = enter_matrix(row1, col1);
            

            std::cout << "Podaj ilosc wierszy drugiej macierzy: "; 
            std::cin >> row2;
            std::cout << "Podaj ilość kolumn drugiej macierzy: ";
            std::cin >> col2;
            

            //jeśli macierze mają inne rozmiary to zakończ program
            if(row1!=row2 || col1!=col2)
            {   
                atexit(error);
                exit(0);
            }


            std::cout << "Wprowadź elementy do drugiej macierzy: \n";
            matrixB = enter_matrix(row2, col2);        


            int add[20][20];
            int sub[20][20];


            //dodawanie i odejmowanie macierz
            for(auto i = 0; i < row1; i++)
            {
                for(auto j = 0; j < col1; j++)
                {
                    add[i][j] = matrixA[i][j] + matrixB[i][j];
                    sub[i][j] = matrixA[i][j] - matrixB[i][j];
                }
            }


            //wyświetlenie wyniku dodawania
            std::cout << "Wynik dodawania:\n";
            display_matrix(add, row1, col2);


            //wyświetlenie wyniku odejmowania
            std::cout << "Wynik odejmowania:\n";
            display_matrix(sub, row1, col2);


            break;
        }
        case 2:
        {
            
            
            std::cout << "Podaj ilość wierszy pierwszej macierzy: "; 
            std::cin >> row1;
            std::cout << "Podaj ilość kolumn pierwszej macierzy: ";
            std::cin >> col1;

            std::cout << "Wprowadź elementy do pierwszej macierzy: \n";
            matrixA = enter_matrix(row1, col1);


            std::cout << "Podaj ilość wierszy drugiej macierzy: "; 
            std::cin >> row2;
            std::cout << "Podaj ilość kolumn drugiej macierzy: ";
            std::cin >> col2;


            //jeśli liczba kolumn w macierzy A i liczba wierszy w macierzy B są różne to zakończ program
            if(col1!=row2)
            {   
                atexit(error);
                exit(0);
            }


            std::cout << "Wprowadź elementy do drugiej macierzy: \n";
            matrixB = enter_matrix(row2, col2);


            int result[20][20];
            int temp;
            
            for(auto i = 0; i < row1; i++)
            {
                for(auto j = 0; j < col2; j++)
                {
                    temp = 0;
                    for(auto k = 0; k < row1; k++)
                    {
                        temp += matrixA[i][k] * matrixB[k][j];
                    }                 
                    result[i][j] = temp;
                }
            }


            std::cout << "Wynik mnożenia: \n";
            for(auto i = 0; i < row1; i++)
            {
                for(auto j = 0; j < col2; j++)
                {
                    std::cout << result[i][j];
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
            
            
            std::cout << "Podaj ilość wierszy macierzy: "; 
            std::cin >> row1;
            std::cout << "Podaj ilość kolumn macierzy: ";
            std::cin >> col1;

            std::cout << "Wprowadź elementy do macierzy: \n";
            matrixA = enter_matrix(row1, col1);
            

            //wyświetlenie podanej przez uzytkownika macierzy
            display_matrix(matrixA, row1, col1);


            std::swap(row1,col1);


            //wyświetlenie transponowanej macierzy
            std::cout << "\nMacierz transponowana: \n";
            for(auto i = 0; i < row1; i++)
            {
                for(auto j = 0; j < col1; j++)
                {
                    std::cout << matrixA[j][i];
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
            int result1;

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
            matrixA = enter_matrix(row1, col1);

            if(row1 == 1 && col1 == 1)
            {
                result1 = matrixA[0][0]; 
            }
            else if(row1 == 2 && col1 == 2)
            {
                result1 = matrixA[0][0] * matrixA[1][1] - matrixA[0][1] * matrixA[1][1];
            }
            else if(row1 == 3 && col1 == 3)
            {
                //Metoda Sarrusa;
                result1 = Sarrus_method(matrixA);
            }
            else
            {
                //Metoda Laplace'a
                //result1 = Laplace_method(matrixA, row1); //<- potrzebny jest tylko jeden rozmiar jesli obydwie liczby są takie same 
            }

            display_matrix(matrixA, row1, col1);


            std::cout << "\nWyznacznik macierzy: " << result1 << "\n";


            break;
        }
    }
    return 0;
}

