#include <iostream>
#include "coroutines.hpp"
using namespace std;
int lol(int a) {
    cout<<"a"<<endl;
    yield();
    cout<<"a"<<endl;
    return a+1;
}
int lol1(int a) {
    cout<<"b"<<endl;
    yield();
    cout<<"b"<<endl;
    return a+2;
}
int main() {
    new_coroutine(static_cast<std::function<int(int)>>(lol), 0);
    new_coroutine(static_cast<std::function<int(int)>>(lol1), 1);
    coroutines_dispatcher();
}