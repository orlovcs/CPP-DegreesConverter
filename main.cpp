#include <iostream>
#include <string>
int main(int argc, const char * argv[]) {
    // insert code here...
    const int numArgs = argc - 1;
    if (numArgs>0 && strcmp(argv[0],"-f")){
        std::cout << "Enter farenheit" << std::endl;
        double f;
        std::cin >> f;
        std::cout << f << " farenheit in celsius is " << (f - 32)/1.8<< std::endl;

    }else{
        std::cout << "Enter Celsuis" << std::endl;
        double c;
        std::cin >> c;
        std::cout << c << " celsius in farenheit is " << c * 1.8 + 32<< std::endl;

    }
    return 0;
}

