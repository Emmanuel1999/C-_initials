#include <iostream>

namespace Levl1{
    namespace Levl2{
        namespace levl3{
            const double weight{33.4};
        }
    }
}
using namespace std;

int main(){
    
    //Namespace aliases;
    namespace Data = Levl1::Levl2::levl3;

    //std::cout << "Weight: " << Levl1::Levl2::levl3::weight << std::endl;
    cout << "weight: " << Data::weight << endl;
    cout << "weight: " << Data::weight << endl; 

    return 0;
}