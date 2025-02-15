#include <iostream>
#include "coroutines.hpp"
using namespace std;
int lol(int a) {
    for(int i = 0;i<a;i++) {
        cout<<"coroutine task: "<<i<<endl;
        yield();
    }
    return a+1;
}
int main() {
    for(int i = 0;i<15;i++)
        new_coroutine(static_cast<std::function<int(int)>>(lol), 15);
    coroutines_dispatcher();
}