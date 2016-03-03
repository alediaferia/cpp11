#include <future>
#include <iostream>

void called_from_async() {
    std::cout << "Async call" << std::endl;
}

int main(int argc, char *argv[]) {
    std::future<void> result(std::async(called_from_async));

    std::cout << "int main(): " << "hello!";

    result.get();

    return 0;
}
