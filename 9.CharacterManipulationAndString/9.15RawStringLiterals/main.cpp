#include <iostream>
#include <string>

int main(){
    
    /*
    //The bad way to do things    
    std::string todo_list {"\tClean the house\n\tWalk the dog\n\tDo the laundry\n\tPick groceries"};
    std::string windows_path {"D:\\sandbox\\testProject\\hello.txt"};
    std::string linux_path {"/home/username/files/hello.txt"};
    std::string hint {" \"\\\\\" escapes a backslash character like \\."};

    std::cout << "todo_list : " << std::endl;
    std::cout << todo_list << std::endl;
    std::cout << "Windows_path : " << windows_path << std::endl;
    std::cout << "Linux_path : " << linux_path << std::endl;
    std::cout << "hint : " << hint << std::endl;
    */

    /*
    //Use raw string literals
    std::string to_do_list {R"( Clean the House
    Walk the dog
    Do Laundry
    Pick groceries)"};

    std::cout << "to_do_list : " << std::endl;
    std::cout << to_do_list << std::endl;
    */

    /*
    //Raw string literals with assignments
    std::string to_do_list = R"(
        Boot the disk
        Start dev cmd
        Open vscode.
    )";

    std::cout << "to do list : " << std::endl;
    std::cout << to_do_list << std::endl;
    */

    /*
    //Raw string literals with assignments
    const char * c_string { R"(
        Boot the disk
        Start dev cmd
        Open vscode.
    )"};
    
    std::cout << "c_string : " << std::endl;
    std::cout << c_string << std::endl;
    */

    /*
    //Fixing other escaped strings
    std::string windows_path1 {R"(D:\sandbox\testProject\hello.txt)"};
    std::string linux_path1 {R"(/home/username/files/hello.txt)"};
    std::string hint1 {R"("\\" escapes a backslash character like \.)"};

    std::cout << "Windows path1 : " << windows_path1 << std::endl;
    std::cout << "linux path1 : " << linux_path1 << std::endl;
    std::cout << "hint1 : " << hint1 << std::endl;
    */

    //Problematic raw string literals
    std::string sentence {R"--(The message was "(Stay out of this!)")--"};

    std::cout << "sentence : " << sentence << std::endl;

    return 0;
}