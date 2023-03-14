#include <iostream>
#include <memory>
#include "dog.h"

using namespace std;

int main(){
    
    //Shared pointers to fundamental types
    /*
    {
        shared_ptr<int> int_ptr_1 {new int{20}};

        cout << "The pointed to value is: " << *int_ptr_1 << endl;
        *int_ptr_1 = 40; //use the pointer to assign
        cout << "The pointed to value is: " << *int_ptr_1 << endl;
        cout << "Use count: " << int_ptr_1.use_count() << endl;//1

        
        cout << endl;
        cout << "*******************************" << endl;

        //Copying
        shared_ptr<int> int_ptr_2 = int_ptr_1; //Use count: 2
        
        cout << "The pointed to value is (through int_ptr_2): " << *int_ptr_2 << endl;
        *int_ptr_2 = 90;
        cout << "The pointed to value is (through int_ptr_2): " << *int_ptr_2 << endl;
        
        cout << "Use count for int_ptr_1: " << int_ptr_1.use_count() << endl;
        cout << "Use count for int_ptr_2: " << int_ptr_2.use_count() << endl;
        cout << endl;

        //Other ways to initialize shared pointers
        cout << "******************************************" << endl;
        shared_ptr<int> int_ptr_3; //nullptr
        int_ptr_3 = int_ptr_1; //Use count:3

        shared_ptr<int> int_ptr_4 {nullptr};
        int_ptr_4 = int_ptr_1; //Use count:4

        shared_ptr<int> int_ptr_5 {int_ptr_1}; //Use count:5
        

        cout << "The pointed value is (through int_ptr_5): " << *int_ptr_5 << endl;
        *int_ptr_5 = 100;
        cout << "The pointed value is (through int_ptr_5): " << *int_ptr_5 << endl;
        cout << endl;

        cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << endl;
        cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << endl;
        cout << "Use count for int_ptr_3 : " << int_ptr_3.use_count() << endl;
        cout << "Use count for int_ptr_4 : " << int_ptr_4.use_count() << endl;
        cout << "Use count for int_ptr_5 : " << int_ptr_5.use_count() << endl;
        cout << endl;

        //Use a shared pointer to manage an already existing piece of memory
        cout << "*********************************" << endl;
        cout << "Use a pointer to manage an already existing piece of memory: " << endl;
        int* int_ptr_raw = new int(33);

        shared_ptr<int> int_ptr_6 {int_ptr_raw};
        int_ptr_raw = nullptr;
        cout << "The value pointed to by int_ptr_raw is (through int_ptr_6): " << *int_ptr_6 << endl;//33
        cout << "Use count for int_ptr_6 : " << int_ptr_6.use_count() << endl; //1
        cout << "Raw pointer: " << int_ptr_raw << endl;//0
        cout << "*int_ptr_6.get(): " << int_ptr_6.get() << endl;
        cout << endl;

        //Reset : decrement the use count and sets the pointer to nullptr
        cout << "Reset.... " << endl;
        int_ptr_5.reset(); //decrements reference count and sets int_ptr_5, you'll get 0
                        //after this if you show use count, for int_ptr_5, you'll get 0
        
        cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << endl;
        cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << endl;    
        cout << "Use count for int_ptr_3 : " << int_ptr_3.use_count() << endl;
        cout << "Use count for int_ptr_4 : " << int_ptr_4.use_count() << endl;
        cout << "Use count for int_ptr_5 : " << int_ptr_5.use_count() << endl;
        cout << "int_ptr_5.get(): " << int_ptr_5.get() << endl;
        cout << endl;

        //Can get the raw pointer address to use the ptr in if statements (castable to bool)
        cout << "**************************************" << endl;
        cout << "Casting to bool and usint in if statements..." << endl;
        cout << "int_ptr_4: " << int_ptr_4 << endl;
        cout << "int_ptr_4.get(): " << int_ptr_4.get() << endl;
        cout << boolalpha;
        cout << "int_ptr_4->bool: " << static_cast<bool>(int_ptr_4) << endl;
        cout << "int_ptr_5->bool: " << static_cast<bool>(int_ptr_5) << endl;

        if(int_ptr_4) {
            cout << "int_ptr_4 pointing to something valid!" << endl; //True
        }else {
            cout << "int_ptr_4 pointing to nullptr" << endl;
        }

        cout << "Resetting the pointers..." << endl;
        int_ptr_4.reset();
        int_ptr_3.reset();
        int_ptr_2.reset();
        int_ptr_1.reset();

        cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << endl;
        cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << endl;
        cout << "Use count for int_ptr_3 : " << int_ptr_3.use_count() << endl;
        cout << "Use count for int_ptr_4 : " << int_ptr_4.use_count() << endl;
        cout << "Use count for int_ptr_5 : " << int_ptr_5.use_count() << endl;
    
    }
    */

    //Shared pointers with custom types
    /*
    {
		shared_ptr<Dog> dog_ptr_1{ new Dog("Dog1")};
        dog_ptr_1->print_info();
        
        cout << "Use count : " << dog_ptr_1.use_count() << endl;
        
        shared_ptr<Dog> dog_ptr_2 = dog_ptr_1; // Use count : 2
        
        cout << "Use count for dog_ptr_1 : " << dog_ptr_1.use_count() << endl;
        cout << "Use count for dog_ptr_2 : " << dog_ptr_2.use_count() << endl;

		//Initializing
        cout << endl;
		cout << "Initializing..." << endl;
        shared_ptr<Dog> dog_ptr_3;
        dog_ptr_3 = dog_ptr_1; // Use count : 3

        shared_ptr<Dog> dog_ptr_4{nullptr};
        dog_ptr_4 = dog_ptr_1; // Use count : 4
        
        shared_ptr<Dog> dog_ptr_5{dog_ptr_1}; // Use count : 5
          
        cout << endl;
        cout << "Use count for dog_ptr_1 : " << dog_ptr_1.use_count() << endl;
        cout << "Use count for dog_ptr_2 : " << dog_ptr_2.use_count() << endl;
        cout << "Use count for dog_ptr_3 : " << dog_ptr_3.use_count() << endl;
        cout << "Use count for dog_ptr_4 : " << dog_ptr_4.use_count() << endl;
        cout << "Use count for dog_ptr_5 : " << dog_ptr_5.use_count() << endl;
        
        //Can also initialize from an already existing raw pointer
        
        cout << endl;
		cout << "********************************" << endl;
        cout << "Initializing from already existing raw pointer" << endl;
        
        Dog * dog_ptr_raw = new Dog("Ralso");
        shared_ptr<Dog> dog_ptr_6 {dog_ptr_raw};
        dog_ptr_raw = nullptr;

        dog_ptr_6->print_info();
        cout << "Use count for dog_ptr_6 is : " << dog_ptr_6.use_count() << endl;
        cout << "dog_ptr_raw : " << dog_ptr_raw << endl;


       //Reset : decrements the use count and sets the pointer to nullptr
        cout << endl;
        cout << "Resetting" << endl;
        dog_ptr_5.reset(); // decrements reference count and sets int_ptr5 to nullptr
                        // after this if you show use count, for int_ptr5,you'll get 0
        cout << "Use count for dog_ptr_1 : " << dog_ptr_1.use_count() << endl;
        cout << "Use count for dog_ptr_2 : " << dog_ptr_2.use_count() << endl;
        cout << "Use count for dog_ptr_3 : " << dog_ptr_3.use_count() << endl;
        cout << "Use count for dog_ptr_4 : " << dog_ptr_4.use_count() << endl;
        cout << "Use count for dog_ptr_5 : " << dog_ptr_5.use_count() << endl;
		
		
        //Can get the raw pointer address and use the ptr in if statements
		cout << endl;
		cout << "Casting to bool and using in if statements..." << endl;
        cout << "dog_ptr_4 : " << dog_ptr_4 << endl;
        cout << "dog_ptr_4.get() : " << dog_ptr_4.get() << endl;
        cout << "dog_ptr_4->bool : " << static_cast<bool>(dog_ptr_4) << endl;
        cout << "dog_ptr_5->bool : " << static_cast<bool>(dog_ptr_5) << endl;
        
        if(dog_ptr_5){
            cout << "dog_ptr_5 pointing to something valid" << endl;
        }else{
            cout << "dog_ptr_5 pointing to nullptr" << endl;
        }
        
    }
    */

       //make_shared
   {
		shared_ptr<int> int_ptr_6 = make_shared<int>(55);
        cout << "The value pointed to by int_ptr_6 is : " << *int_ptr_6 << endl;
        
        shared_ptr<Dog> dog_ptr_6 = make_shared<Dog>("Salz");
        dog_ptr_6->print_info();
        
        cout << "int_ptr_6 use count : " << int_ptr_6.use_count() << endl;//1
        cout << "dog_ptr_6 use count : " << dog_ptr_6.use_count() << endl;//1


		//Share the object(data) with other shared_ptr's
        cout << endl;
        cout << "Share the object(data) with other shared_ptr's" << endl;
        shared_ptr<int> int_ptr_7 {nullptr};
        int_ptr_7 = int_ptr_6;
        
        shared_ptr<Dog> dog_ptr_7 {nullptr};
        dog_ptr_7 = dog_ptr_6;
        
        cout << "int_ptr6 use count : " << int_ptr_6.use_count() << endl;
        cout << "dog_ptr6 use count : " << dog_ptr_6.use_count() << endl;


        cout << endl;
        cout << "Reset ptr6's" << endl;
        int_ptr_6.reset(); // decrement reference count, and set int_ptr6 to nullptr
                            // if reference count is zero, release the managed memory
        dog_ptr_6.reset();
        cout << "int_ptr_6 use count : " << int_ptr_6.use_count() << endl;
        cout << "dog_ptr_6 use count : " << dog_ptr_6.use_count() << endl;
		cout << "int_ptr_7 use count : " << int_ptr_7.use_count() << endl;
        cout << "dog_ptr_7 use count : " << dog_ptr_7.use_count() << endl;    

   }

    return 0;
}