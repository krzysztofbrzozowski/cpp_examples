#include <iostream>

#include "tbd_url.h"

using namespace std;

// URL::URL(const std::string& prot, const std::string& res) : protocol(prot), resource(res) {}

void URL::print() const {
	std::cout << protocol << "://" << resource << "\n";
}