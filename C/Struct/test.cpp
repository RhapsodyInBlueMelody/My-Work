#include <iostream>

struct MyStruct {
    int value1;
    float value2;
    std::string value3;
};

int main() {
    MyStruct nilai = {69, 4.20, "Hello"};
    std::cout << nilai.value1 << " " << nilai.value2 << " " << nilai.value3 << std::endl;
    return 0;
}

