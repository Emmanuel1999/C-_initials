#include <iostream>
#include <iomanip>


int main(){
   
   //std::endl : for creating new line character on the output stream,
   //           similar to /n.

   std::cout << "Hello" ;
   std::cout << "World";

   std::cout << std::endl;
   std::cout << "-------------------" << std::endl;

   std::cout << "Hello" << std::endl;
   std::cout << "World" << std::endl;

   std::cout << std::endl;

   std::cout << "Hello\n";
   std::cout << "World\n";
   
   //==================================================================================
    std::cout << std::endl;

   //std::flush : flushes the output buffer to its final destination.
   std::cout << "The effect isn't really visible now but later could be useful." << std::endl << std::flush;
   //After the std::flush, we can be sure that the above message has been delivered to the stream
   // This can come in handy in some application.

   //========================================================================================
   std::cout << std::endl;

    //std::setw() : Adjusts the field width for the item about to be printed.
    // The setw() manipulator affects only the next value to be printed.

   std::cout << "Unformated table : " << std::endl;
   std::cout << "Opatola" << "  " << "Emmanuel" << " 23" << std::endl;
   std::cout << "Micheal" << "  " << "Jordan" << " 53" << std::endl;
   std::cout << "Shinhu" << "  " << "Kamikaze" << " 78" << std::endl;
   std::cout << "Jamiu" << "  " << "Collins" << " 27" << std::endl;
   std::cout << "Sijioke" << "  " << "Nkaneami" << " 33" << std::endl;
   std::cout << "Chibuzor" << "  " << "Ndubusi" << " 25" << std::endl;

   std::cout << std::endl;

   std::cout << "Formatted table : " << std::endl;
   std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
   std::cout << std::setw(10) << "Opatola" << std::setw(10) << "Emmanuel" << std::setw(5) << "23" << std::endl;
   std::cout << std::setw(10) << "Micheal" << std::setw(10) << "Jordan" << std::setw(5) << "53" << std::endl;
   std::cout << std::setw(10) << "Shinhu" << std::setw(10) << "Kamikaze" << std::setw(5) << "78" << std::endl;
   std::cout << std::setw(10) << "Jamiu" << std::setw(10) << "Collins" << std::setw(5) << "27" << std::endl;
   std::cout << std::setw(10) << "Sijioke" << std::setw(10) << "Nkaneami" << std::setw(5) << "33" << std::endl;
   std::cout << std::setw(10) << "Chibuzor" << std::setw(10) << "Ndubusi" << std::setw(5) << "25" << std::endl;

   std::cout << std::endl;
   std::cout << "Formatted table with variables : " << std::endl;

   int col_width {14};

   std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Age" << std::endl;
   std::cout << std::setw(col_width) << "Opatola" << std::setw(col_width) << "Emmanuel" << std::setw(col_width) << "23" << std::endl;
   std::cout << std::setw(col_width) << "Micheal" << std::setw(col_width) << "Jordan" << std::setw(col_width) << "53" << std::endl;
   std::cout << std::setw(col_width) << "Shinhu" << std::setw(col_width) << "Kamikaze" << std::setw(col_width) << "78" << std::endl;
   std::cout << std::setw(col_width) << "Jamiu" << std::setw(col_width) << "Collins" << std::setw(col_width) << "27" << std::endl;
   std::cout << std::setw(col_width) << "Sijioke" << std::setw(col_width) << "Nkaneami" << std::setw(col_width) << "33" << std::endl;
   std::cout << std::setw(col_width) << "Chibuzor" << std::setw(col_width) << "Ndubusi" << std::setw(col_width) << "25" << std::endl;

   //===============================================================
   
   std::cout << std::endl;

   //Justify : Values can be justified in their fields. There are 3 manipulators for 
   //          adjusting the the justification: left, right and  internal.

   //right justified
   std::cout << std::endl;
   std::cout << "Right justified table (default) : " << std::endl;

   col_width = 20;
   std::cout << std::right; // This is done by default. Data is justified to the right by default.

   std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Age" << std::endl;
   std::cout << std::setw(col_width) << "Opatola" << std::setw(col_width) << "Emmanuel" << std::setw(col_width) << "23" << std::endl;
   std::cout << std::setw(col_width) << "Micheal" << std::setw(col_width) << "Jordan" << std::setw(col_width) << "53" << std::endl;
   std::cout << std::setw(col_width) << "Shinhu" << std::setw(col_width) << "Kamikaze" << std::setw(col_width) << "78" << std::endl;
   std::cout << std::setw(col_width) << "Jamiu" << std::setw(col_width) << "Collins" << std::setw(col_width) << "27" << std::endl;
   std::cout << std::setw(col_width) << "Sijioke" << std::setw(col_width) << "Nkaneami" << std::setw(col_width) << "33" << std::endl;
   std::cout << std::setw(col_width) << "Chibuzor" << std::setw(col_width) << "Ndubusi" << std::setw(col_width) << "25" << std::endl;

   std::cout << std::endl;

   //left justified

   std::cout << std::endl;
   std::cout << "Left justified table " << std::endl;

   col_width = 20;

   std::cout << std::left;

   std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Age" << std::endl;
   std::cout << std::setw(col_width) << "Opatola" << std::setw(col_width) << "Emmanuel" << std::setw(col_width) << "23" << std::endl;
   std::cout << std::setw(col_width) << "Micheal" << std::setw(col_width) << "Jordan" << std::setw(col_width) << "53" << std::endl;
   std::cout << std::setw(col_width) << "Shinhu" << std::setw(col_width) << "Kamikaze" << std::setw(col_width) << "78" << std::endl;
   std::cout << std::setw(col_width) << "Jamiu" << std::setw(col_width) << "Collins" << std::setw(col_width) << "27" << std::endl;
   std::cout << std::setw(col_width) << "Sijioke" << std::setw(col_width) << "Nkaneami" << std::setw(col_width) << "33" << std::endl;
   std::cout << std::setw(col_width) << "Chibuzor" << std::setw(col_width) << "Ndubusi" << std::setw(col_width) << "25" << std::endl;

   //internal justified : sign is left justified, data is right justified
   std::cout << std::endl;
   std::cout << "Internal Justified : " << std::endl;
   std::cout << std::right;
   std::cout << std::setw(10) << -123.45 << std::endl;
   std::cout << std::internal;
   std::cout << std::setw(10) << -123.45 << std::endl;
    
   // ==================================================================================
   std::cout << std::endl;

   //Setfill 

   std::cout << std::endl;
   std::cout << "Table with fill characters " << std::endl;

   col_width = 20;

   std::cout << std::left;
   std::cout << std:: setfill('-'); // The fill character
   std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
   std::cout << std::setw(col_width) << "Opatola" << std::setw(col_width) << "Emmanuel" << std::setw(col_width/2) << "23" << std::endl;
   std::cout << std::setw(col_width) << "Micheal" << std::setw(col_width) << "Jordan" << std::setw(col_width/2) << "53" << std::endl;
   std::cout << std::setw(col_width) << "Shinhu" << std::setw(col_width) << "Kamikaze" << std::setw(col_width/2) << "78" << std::endl;
   std::cout << std::setw(col_width) << "Jamiu" << std::setw(col_width) << "Collins" << std::setw(col_width/2) << "27" << std::endl;
   std::cout << std::setw(col_width) << "Sijioke" << std::setw(col_width) << "Nkaneami" << std::setw(col_width/2) << "33" << std::endl;
   std::cout << std::setw(col_width) << "Chibuzor" << std::setw(col_width) << "Ndubusi" << std::setw(col_width/2) << "25" << std::endl;

   //================================================================================================

   std::cout << std::endl;

   //boolalpha and noboolalpha : control bool output format : 1/0 or true/false

   bool condition {true};
   bool other_condition {false};

   std::cout << "Condition : " << condition << std::endl;
   std::cout << "Other condition : " << other_condition << std::endl;

   std::cout << std::endl;
   std::cout << std::boolalpha;

   std::cout << "Condition : " << condition << std::endl;
   std::cout << "Other condition : " << other_condition << std::endl;

   std::cout << std::endl;
   std::cout << std::noboolalpha;

   std::cout << "Condition (Noboolalpha) : " << condition << std::endl;
   std::cout << "Other condition (Noboolalpha): " << other_condition << std::endl;
   
   std::cout << std::endl;

   //====================================================================================================

   //showpos and noshowpos : show or hide the + sign for positive numbers

   int pos_num {34};
   int neg_num {-45};

   std::cout << "pos_num : " << pos_num << std::endl;
   std::cout << "neg_num : " << neg_num << std::endl;
   
   std::cout << std::endl;
   std::cout << std::showpos;
   std::cout << "pos_num : " << pos_num << std::endl;
   std::cout << "neg_num : " << neg_num << std::endl;


   std::cout << std::endl;
   std::cout << std::noshowpos;
   std::cout << "pos_num (noshowpos) : " << pos_num << std::endl;
   std::cout << "neg_num (noshowpos) : " << neg_num << std::endl;

   //====================================================================================================================
   std::cout << std::endl;

   //different number systems : std::dec, std::hex, std::oct 
   //Observation: There is no std::bin.

   int pos_int {717171};
   int neg_int {-473492};
   double double_var {34.32134};

   std::cout << std::endl;
   std::cout << "default base format : " << std::endl;
   std::cout << "pos_int : " << pos_int << std::endl;
   std::cout << "neg_int : " << neg_int << std::endl;
   std::cout << "double_var : " << double_var << std::endl;
   
   std::cout << std::endl;
   std::cout << "pos_int in different bases : " << std::endl; 
   std::cout << "pos_int(dec) : " << std::dec << pos_int << std::endl;
   std::cout << "pos_int(hex) : " << std::hex << pos_int << std::endl;
   std::cout << "pos_int(oct) : " << std::oct << pos_int << std::endl;

   std::cout << std::endl;
   std::cout << "neg_int in different bases : " << std::endl;
   std::cout << "neg_int(dec) : " << std::dec << neg_int << std::endl;
   std::cout << "neg_int(hex) : " << std::hex << neg_int << std::endl;
   std::cout << "neg_int(oct) : " << std::oct << neg_int << std::endl;

   std::cout << std::endl;
   std::cout << "double_var in different bases : " << std::endl;
   std::cout << "double_var(dec) : " << std::dec << double_var << std::endl;
   std::cout << "double_var(hex) : " << std::hex << double_var << std::endl;
   std::cout << "double_var(oct) : " << std::oct << double_var << std::endl;

   //====================================================================================
   std::cout << std::endl;
   
   //Uppercase and nonuppercase 

   pos_int = 717171;

   std::cout << std::endl;
   std::cout << "pos_int (no uppercase : default) : " << std::endl; 
   std::cout << "pos_int(dec) : " << std::dec << pos_int << std::endl;
   std::cout << "pos_int(hex) : " << std::hex << pos_int << std::endl;
   std::cout << "pos_int(oct) : " << std::oct << pos_int << std::endl;

   std::cout << std::endl;
   std::cout << "pos_int (uppercase) : " << std::endl;
   std::cout << std::uppercase; 
   std::cout << "pos_int(dec) : " << std::dec << pos_int << std::endl;
   std::cout << "pos_int(hex) : " << std::hex << pos_int << std::endl;
   std::cout << "pos_int(oct) : " << std::oct << pos_int << std::endl;

   //==============================================================================
   std::cout << std::endl;

   //fixed and scientific : for floating point (double ) values

   double a {3.1415926535897932384626433832795 };
   double b {2006.0};
   double c {1.34e-10};

   std::cout << std::endl;
   std::cout << "double values (default: use scientific when necessary) : " << std::endl;
   std::cout << "a : " << a << std::endl;
   std::cout << "b : " << b << std::endl;
   std::cout << "c : " << c << std::endl;

   std::cout << std::endl;
   std::cout << "double values (fixed) : " << std::endl;
   std::cout << std::fixed;
   std::cout << "a : " << a << std::endl;
   std::cout << "b : " << b << std::endl;
   std::cout << "c : " << c << std::endl;

   std::cout << std::endl;
   std::cout << "double values (scientific) : " << std::endl;
   std::cout << std::scientific;
   std::cout << "a : " << a << std::endl;
   std::cout << "b : " << b << std::endl;
   std::cout << "c : " << c << std::endl;

   std::cout << std::endl;
   std::cout << "double values (back to defaults) : " << std::endl;
   std::cout.unsetf(std::ios::scientific | std::ios::fixed); //hack
   std::cout << "a : " << a << std::endl;
   std::cout << "b : " << b << std::endl;
   std::cout << "c : " << c << std::endl;

   //==================================================================================
   std::cout << std::endl;

   //setprecision() : the number of digits printed out for a floating point number. Default is 7.

   a = 3.1415926535897932384626433832795; //If more than 15, the rest figures would result in garbage.

   std::cout << "a (default precision(6)) : " << a << std::endl;
   std::cout << std::setprecision(10);
   std::cout << "a (precision(10)) : " << a << std::endl;
   std::cout << std::setprecision(20);
   std::cout << "a (precision(20)) : " << a << std::endl;
   
   //NB. If the precision is bigger than the supported type get ready to print out garbage.

   //========================================================================================================
   std::cout << std::endl;

   //showpoint and noshowpoint : show trailing zeros if necessary.
   //Force output of the decimal point

   double d {34.10};
   double e {101.99};
   double f {23.0};
   int g {45};

   std::cout << std::endl;
   std::cout << "noshowpoint (default) : " << std::endl;
   std::cout << "d : " << d << std::endl;
   std::cout << "e : " << e << std::endl;
   std::cout << "f : " << f << std::endl;//23
   std::cout << "g : " << g << std::endl; 

   std::cout << std::endl;
   std::cout << "showpoint : " << std::endl;
   std::cout << std::showpoint;
   std::cout << "d : " << d << std::endl;
   std::cout << "e : " << e << std::endl;
   std::cout << "f : " << f << std::endl;//23.0
   std::cout << "g : " << g << std::endl;

   return 0;
}