#include <iostream>
#include <vector>
#include <any>

int main() {
    std::vector<std::any> mixedVector;

    mixedVector.push_back(10);
    mixedVector.push_back(3.14);
    mixedVector.push_back("Hello");

    for (const auto& element : mixedVector) {
        if (element.type() == typeid(int)) {
            std::cout << "Integer: " << std::any_cast<int>(element) << std::endl;
        } else if (element.type() == typeid(double)) {
            std::cout << "Double: " << std::any_cast<double>(element) << std::endl;3
        } else if (element.type() == typeid(const char*)) {
            std::cout << "String: " << std::any_cast<const char*>(element) << std::endl;
        }
    }

    return 0;
}
