#include "schoolSystem.h"


int main()
{
    schoolSystem s;
    s.mainScreen();
    
    int selection;
    std::cin >> selection;

    switch(selection)
    {
        case 1:
        {
            s.addStudent();
            break;
        }
        case 2:
        {
            //s.addNote();
            break;
        }
        case 3:
        {
            //s.searchStudent();
            break;
        }
        case 4:
        {
            //s.readKardex();
            break;
        }
        case 5:
        {
           //s.printKardex();
            break;
        }
        case 6:
        {
            return 0;
        }
        default:
        {
            std::cout << "Incorrect input!\n";
            break;
        }
    }

    return 0;
}