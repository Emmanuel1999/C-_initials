#include <iostream>

int main(){
   
   //Braced initializers
   /*
   //variable may contain random garbage value. WARNING

   int elephant_count;

   int lion_count{};//initializes to zero.

   int dog_count {10}; //initializes to 10.
   int cat_count {15}; // initializes to 15.

   //use of expression as initializer
   int domesticated_animals{dog_count + cat_count};

   //initializing new variable without definition
   //int new_number{doesnt_exist};

  //int narrowing_conversion {2.9};//compiler error

  std::cout << "Elephant count : " << elephant_count << std::endl;
  std::cout << "Lion count : " << lion_count << std::endl;
  std::cout << "Dog count : " << dog_count << std::endl;
  std::cout << "Domesticated animals count : " << domesticated_animals << std::endl;
   */

  //Functional initialization

  /*
  int apple_count(5);
  int orange_count(10);
  int fruit_count (apple_count + orange_count);
  
  //int bad_initialization (doesnt_exist3 + doesntexist4);

  //Information lost. Less safe than braced initializers
  int narrowing_conversion_functional (2.9);

   std::cout << "Apple count : " << apple_count << std::endl;
   std::cout << "Orange count : " << orange_count << std::endl;
   std::cout << "Fruit count : " << fruit_count << std::endl;
   std::cout << "Narrowing conversion : " << narrowing_conversion_functional << std::endl;
   */

  //Assignment initialization

  int bike_count = 10;
  int truck_count = 3;
  int vehicle_count = bike_count + truck_count;
  int narrowing_conversion_assignment = 2.9;

  std::cout << "Bike count : " << bike_count << std::endl;
  std::cout << "Truck count : " << truck_count << std::endl;
  std::cout << "Vehicle count : " << vehicle_count << std::endl;
  std::cout << "Narrowing conversion : " << narrowing_conversion_assignment << std::endl;

  //check the size with sizeof

  std::cout << "sizeof int : " << sizeof(int) << std::endl;
  std::cout << "sizeof truck count : " << sizeof truck_count << std::endl;

   return 0;

}