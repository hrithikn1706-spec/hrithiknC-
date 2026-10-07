#include <iostream>
using namespace std;

class widget {
    int id;
    static int count;
    public:
    widget() {id = ++count;count <<}
}