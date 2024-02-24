#include <iostream>
#include <vector>
#include <string>


class URL {
    std::string protocol;
    std::string resource;

    public:
        void print() const;
    //     URL(const std::string& prot, const std::string& res);
};

int main() {
    URL url("http", "exaple.com/index.html");
}