#include <iostream>
#include "coroutines.hpp"
#include "coroutines_api.hpp"
using namespace std;
int lol(int a) {
    std::vector<int> multipliers;
    int b = a;
    for(int i = 2;i<a;) {
        if(b % i == 0) {
            multipliers.push_back(i);
            b/=i;
        } else i++;
    }
    coroutine_printf(1, "Множители числа %d:", a);
    for(int i = 0;i<multipliers.size();i++)
        coroutine_printf(1, "%d ", multipliers[i]);
    coroutine_printf(1, "\n");
    return a+1;
}
int main() {
    for(int i = 15;i<20;i++)
        new_coroutine(static_cast<std::function<int(int)>>(lol), i);
    coroutines_dispatcher();
}