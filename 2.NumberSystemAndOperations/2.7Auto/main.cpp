#include <iostream>

int main(){
   auto var1 {12};
   auto var2 {13.0};
   auto var3 {14.0f};
   auto var4 {15.0l};
   auto var5 {'e'};

   //int modifier suffixes 
   auto var6 {123u}; //unsigned
   auto var7 {123ul}; //unsigned long
   auto var8 {123ll}; //long long

    std::cout << "Var1 occupies : " << sizeof(var1) << " bytes." << std::endl;
    std::cout << "Var2 occupies : " << sizeof(var2) << " bytes." << std::endl;
    std::cout << "Var3 occupies : " << sizeof(var3) << " bytes." << std::endl;
    std::cout << "Var4 occupies : " << sizeof(var4) << " bytes." << std::endl;
    std::cout << "Var5 occupies : " << sizeof(var5) << " bytes." << std::endl;
    std::cout << "Var6 occupies : " << sizeof(var6) << " bytes." << std::endl;
    std::cout << "Var7 occupies : " << sizeof(var7) << " bytes." << std::endl;
    std::cout << "Var8 occupies : " << sizeof(var8) << " bytes." << std::endl;


   return 0;
}