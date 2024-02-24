#ifndef TBD_URL_H
#define TBD_URL_H

#include <string>

using namespace std;

class URL {
    std::string protocol;
    std::string resource;

    public:
        URL(const std::string& protocol, const std::string& resource);
        void print() const;
};

#endif