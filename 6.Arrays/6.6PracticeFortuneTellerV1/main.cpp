#include <iostream>
#include <ctime>

int main(){
    
    //srand has to run once per program run
    std::srand(std::time(0)); //Seed
    
    char prediction0[] {"As I succeed, you'll succeed...Amen!"};
    char prediction1[] {"As I make progress, you'll make progress...Amen!"};
    char prediction2[] {"Whatever you do shall prosper...Amen!"};
    char prediction3[] {"They shall rise up against you one way & shall flee seven ways...Amen!"};
    char prediction4[] {"With long life will I satisfy you & show you my Salvation...Amen!"};
    char prediction5[] {"Whatever you lay your hands on shall prosper...Amen!"};
    char prediction6[] {"Underneath thee are the everlasting arms, HE shall not fail thee...Amen!"};
    char prediction7[] {"Your going out and your coming in shall be ordered by the Lord...Amen!"};
    char prediction8[] {"Your latter end shall be GREATER than your beginning...Amen!"};
    char prediction9[] {"When thou passeth through the fire, it shall not burn thee...Amen!"};

    bool end {false};
    const int max_length {20};
    char name[max_length] {};

    std::cout << "What is your name my friend? " << std::endl;

    std::cin.getline(name, max_length); //Get input with spaces

    while (!end)
    {
        std::cout << "Oh dear " << name << " you're very welcome!" << std::endl;
        size_t random_num = static_cast<size_t>((std::rand() % 11));

        switch (random_num) { // 0 ~ 10

        case 0 : 
            std::cout << prediction0 << std::endl;
        break;
        case 1 : 
            std::cout << prediction1 << std::endl;
        break;
        case 2 : 
            std::cout << prediction2 << std::endl;
        break;
        case 3 : 
            std::cout << prediction3 << std::endl;
        break;
        case 4 : 
            std::cout << prediction4 << std::endl;
        break;
        case 5 : 
            std::cout << prediction5 << std::endl;
        break;
        case 6 : 
            std::cout << prediction6 << std::endl;
        break;
        case 7 : 
            std::cout << prediction7 << std::endl;
        break;
        case 8 : 
            std::cout << prediction8 << std::endl;
        break;
        case 9 : 
            std::cout << prediction9 << std::endl;
        break;
        default:
            std::cout << "What I'm I supposed to be seeing? " << std::endl;
        }

        std::cout << "Do you want to try again? " << std::endl;
        
        char go_on;
        std::cin >> go_on;

        end = ((go_on == 'Y' || go_on == 'y')) ? false : true;
    }
    
    std::cout << "That's all the prayers available at this time! You're welcome..." << std::endl;

    return 0;
}