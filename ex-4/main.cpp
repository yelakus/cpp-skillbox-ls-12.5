#include <iostream>

int duplicate(const int arr[]){
    int result, sum_1 = 0, sum_2 = 0, min = arr[0];

    for (int i = 0; i < 14; ++i){
        sum_1 += arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    sum_1 += arr[14];
    sum_2 += min;

    for (int i = 1; i < 14; i++){
        sum_2 += min + i;
    }

    result = sum_1 - sum_2;

    return result;
}

int main() {
    int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};

    std::cout << "Duplicate: " << duplicate(numbers) << std::endl;
}
