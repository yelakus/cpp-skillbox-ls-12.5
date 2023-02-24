#include <iostream>
#include <string>

int main() {
    std::string names[10];
    for (auto & name : names){ // это мне подсказал Clion, тут был код for (int i = 0; i < 10; ++i)
        std::cin >> name;
    }

    int num = 1;
    for (int i = 0; i < 3; ++i){
        std::cout << "Input flat num (1-10)" << std::endl;
        std::cin >> num;
        if (num <= 0 || num > 10) std::cout << "Incorrect input" << std::endl;
        else std::cout << names[num-1] << std::endl;
    }
}
