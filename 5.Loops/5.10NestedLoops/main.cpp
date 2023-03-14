#include <iostream>
#include <iomanip>


int main(){
    
    //Setw on numbers before printing them
    const size_t ROWS {12};
    const size_t COLS {3};

    /*
    std::cout << "Tabular data visualization with nested for Loops : " << std::endl;

    for (size_t row = 0; row < ROWS; ++ row)
    {
        for (size_t col {0}; col < COLS; ++ col) {
            std::cout << "( row " << std::setw(2) << row << ", col " << std::setw(2) << col << " )" << std::endl;
        }

        std::cout << std::endl;
    }
    */

    //While Loop
    /*
    std::cout << std::endl;
    std::cout << "Tabular data visualization with nested while loops : " << std::endl;

    //Remember to reset col to 0 after the inner loop is done for the next row
    //to use the right cols. Try ignoring and see effect...what can happen

    size_t row {0};
    size_t col {0};

    while (row < ROWS)
    {
        while (col < COLS)
        {
            std::cout << "( row " << std::setw(2) << row << ", col " << std::setw(2) << col << " )" << std::endl;
            ++col;
        }
        
        std::cout << std::endl;
        col = 0; //Reset col to 0 to allow printing from col 0. col is in main function now &
        ++row;
    }
    */

    //Do while Loops

    std::cout << std::endl;
    std::cout << "Tabular data visualization with do while loops : " << std::endl;

    size_t row = 0;
    size_t col = 0;

    do //row
    {
        do
        {
            std::cout << "( row " << std::setw(2) << row << ", col " << std::setw(2) << col << " )" << std::endl;
            ++col;
        } while (col < COLS);

        std::cout << std::endl;
        col = 0;    //Resetting col to 0 to allow printing from 0.
        ++row;
        
    } while (row < ROWS);
    
    
       

    return 0;
}