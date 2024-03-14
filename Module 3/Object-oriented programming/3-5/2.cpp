#include <iostream>
#include <cstring>

class Last {
    public:
    std::string str_1;
    std::string str_2;
};

int main() {
    Last sam{"asd", "asdvazxcv"};
    std::cout<<sam.str_1<<'\t'<<sam.str_2;
}