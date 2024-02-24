#include <iostream>
#include <string>

using namespace std;


class URL {
    string protocol;
    string resource;

    public:
        URL(string prot, string res){
            protocol = prot;
            resource = res;
        }
        void print() {
            cout << protocol << "://" << resource; 
        };
};

int main() {
    URL url("http", "example.com/index.html");
	url.print();
}