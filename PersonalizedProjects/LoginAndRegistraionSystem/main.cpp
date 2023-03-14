#include <iostream>
#include <fstream>
#include <string>

//using namespace std; //Prefer typing std:: infront of the keywords

bool IsLoggedIn() 
{
    std::string username, password, un, pw;


    std::cout << "Enter username: ";
    std::cin >> username;

    

    std::cout << "Enter password: ";
    std::cin >> password;

    std::ifstream read(username + ".txt");
    std::getline(read, un);
    std::getline(read, pw);

    if(un == username && pw == password)
    {
        return true;
    }else{
        return false;
    }

    //return un == username && pw == password; //Alternative to the if statement above

}

int main () {

    int choice;

    std::cout << "1: Register" << std::endl;
    std::cout << "2: Login" << std::endl;
    std::cout << "Your choice..." << std::endl;
    std::cin >> choice;


    if (choice == 1)
    {
        std::string username, password;

        std::cout << "Select a username: ";
        std::cin >> username;
        

        std::cout << "Select a password: ";
        std::cin >> password;

        std::ofstream file;
        file.open(username + ".txt");
        file << username << std::endl;
        file << password << std::endl;
        file.close();

        return main();

    }else if (choice == 2) {
        bool status = IsLoggedIn();

        if (!status)
        {
            std::cout << "Unable to login!" << std::endl;
            std::system("PAUSE");
            return 0;
        }else {
            std::cout << "Successfully logged in!" << std::endl;
            return 1;
        }
        
    }

       
}