#include <iostream>
#include <string>

int main()
{
    int number = (rand()%100)+1;
    int number2;
    srand(time(NULL));
    do{
        std::cout << "guess: ";
        std::cin >> number2;
        if(number<number2)
        {
            std::cout << "number too big!\n";
        }
        else if(number>number2)
        {
            std::cout << "number too small!\n"; 
        }
        else if(number==number2)
        {
            break;
        }
    }
    while(number==number2);
    if(number==number2)
    {
        std::cout << "just right!";
    }

    return 0;
}
