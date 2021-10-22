#include "Student.h"
#include <iostream>
#include <string>


auto main() -> int
{
    Student st("Bartek","Sokołowski","s24531",1,4.53);
    std::cout<<st.opis();

    return 0;
}