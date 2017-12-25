#include <iostream>
#include <string>
int main(int argc, const char * argv[]) {
    // insert code here...
    const int numArgs = argc - 1;
    if (numArgs>0 && strcmp(argv[0],"-f")){
        std::cout << "Enter Farenheit" << std::endl;
        
    }else{
        std::cout << "Enter Celsuis" << std::endl;
        
    }
}

