#include <sstream>
#include <iomanip>
#include <iostream>
namespace convert {
    void convertNum(double& num) {
        std::stringstream stream;

        // sets the decimal place to only 1 place
        stream << std::fixed << std::setprecision(1) << num;

        std::string str = stream.str();
        std::cout << str << std::endl;
    }
};