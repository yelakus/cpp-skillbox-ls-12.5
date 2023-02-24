#include <iostream>
#include <cassert>

float travelTime(float distance, float speed){
    assert(speed > 0);
    return distance / speed;
}

int main() {
    float distance, speed;
    std::cout << "Input distance and speed: " << std::endl;
    std::cin >> distance >> speed;

    std::cout << "Time: " << travelTime(distance, speed) << std::endl;

    return 0;
}
