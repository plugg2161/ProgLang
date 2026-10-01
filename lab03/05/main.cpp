#include <iostream>
#include <string>
#include <vector>

int main() {
    typedef unsigned long long Age;
    Age age = 25;
    std::vector<std::string> names = {"Alexander", "Valera"};
    auto first = names.begin();

    decltype(names.begin()) second;

    double price = 53.5;
    int roundedDown = static_cast<int>(price);

    std::size_t bytes = sizeof(Age);
    second = names.end() - 1;
    std::cout << age << '\n';
    std::cout << *first << '\n';
    std::cout << *second << '\n';
    std::cout << roundedDown << '\n';
    std::cout << bytes << '\n';

    return 0;
}
