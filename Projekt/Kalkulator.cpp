#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
#include <vector>  

auto error () -> void
{
    std::cout << "ERR\n";
}

auto enter_into_vector(std::vector<std::vector<int>> matrix, int row, int col, int el) -> std::vector<std::vector<int>>
{  
    for(auto i = 0; i < row; i++) 
    {
        std::vector<int> matrix1;
        for(auto j = 0; j < col; j++)
        {
            matrix1.push_back(el);
        }
        matrix.push_back(matrix1);
    }
    return matrix;
}

auto check_number (std::string num) -> bool
{
    for(auto i = 0; i < num.length(); i++)
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

auto enter_matrix (int row1, int col1) -> std::vector<std::vector<int>>
{
    std::vector<std::vector<int>> matrix;
    std::string num;
    int num1;

    for(int i = 0; i < row1;  i++) 
    {
        std::vector<int> matrix1;
        for(int j = 0; j < col1 ; j++)
        {
            std::cout << "A[" << i+1 << "][" << j+1 << "]: ";
            std::cin >> num;

            if(check_number(num))
            {   
                num1 = std::stoi(num);
                matrix1.push_back(num1);
            }
            else
            {
                std::cout << "To nie jest liczba\n";
                j--;
            }
        }
        matrix.push_back(matrix1);
    }
    return matrix;
}

auto display_matrix(std::vector<std::vector<int>> matrix) -> void
{
    for(auto i = 0; i < matrix.size(); i++)
    {
        for(auto j = 0; j < matrix[i].size(); j++)
        std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
}

auto Sarrus_method(std::vector<std::vector<int>> matrix) -> int
{
    int oper1 = matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1];
    int oper2 = matrix[0][2] * matrix[1][1] * matrix[2][1] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2];
    int result = oper1 - oper2;

    return result;
}

auto Laplace_method(std::vector<std::vector<int>> matrix) -> int
{
    int det = 0;

    for (int p = 0; p < matrix[0].size(); p++)
    {               
        std::vector<std::vector<int>> tempmatrix;
        for (int i = 1; i < matrix.size(); i++)
        {
            std::vector<int> tempRow;
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (j != p)
                {
                    temprow.push_back(matrix[i][j]);
            }
            if (temprow.size() > 0)
            {
                tempmatrix.push_back(tempRow);
            }    
        }
        det = det + matrix[0][p] * pow(-1, p) * Laplace_method(tempmatrix);
    }
    return det;
}

auto main() -> int
{
    int calc;

    std::vector<std::vector<int>> matrixA;    
    int row1, col1;
    
    std::vector<std::vector<int>> matrixB;
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


            std::vector<std::vector<int>> add;
            std::vector<std::vector<int>> sub;
            int addnum, subnum;

            //dodawanie i odejmowanie macierz
            for(auto i = 0; i < row1; i++)
            {
                std::vector<int> add1;
                std::vector<int> sub1;
                for(auto j = 0; j < col1; j++)
                {
                    addnum = matrixA[i][j] + matrixB[i][j];
                    subnum = matrixA[i][j] - matrixB[i][j];
                    add1.push_back(addnum);
                    sub1.push_back(subnum);
                }
                    add.push_back(add1);
                    sub.push_back(sub1);
            }

            
            //wyświetlenie wyniku dodawania
            std::cout << "\nWynik dodawania:\n";
            display_matrix(add);


            //wyświetlenie wyniku odejmowania
            std::cout << "\nWynik odejmowania:\n";
            display_matrix(sub);


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


            std::vector<std::vector<int>> result;
            int temp;
            
            for(auto i = 0; i < row1; i++)
            {
                std::vector<int> result1;
                for(auto j = 0; j < col2; j++)
                {
                    temp = 0;
                    for(auto k = 0; k < row1; k++)
                    {
                        temp = temp + matrixA[i][k] * matrixB[k][j];
                    }                 
                    result1.push_back(temp);
                }
                result.push_back(result1);
            }


            std::cout << "\nWynik mnożenia:\n";
            display_matrix(result);

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
            std::cout << "\nMacierz podana przez użytkownika:\n";
            display_matrix(matrixA);


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
            int result1 = 0;

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
                result1 = matrixA[0][0] * matrixA[1][1] - matrixA[0][1] * matrixA[1][0];
            }
            else if(row1 == 3 && col1 == 3)
            {
                //Metoda Sarrusa;
                result1 = Sarrus_method(matrixA);
            }
            else
            {
                //Metoda Laplace'a
                result1 = Laplace_method(matrixA);
            }

            //wyświetlenie podanej przez uzytkownika macierzy
            std::cout << "\nMacierz podana przez użytkownika:\n";
            display_matrix(matrixA);


            std::cout << "\nWyznacznik macierzy: " << result1 << "\n";


            break;
        }
    }
    return 0;
}

