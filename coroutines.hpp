#pragma once
#include <functional>
void yield();
void await(std::function<int(int)> func, int param);
void new_coroutine(std::function<int(int)> func, int param);
void coroutines_dispatcher();
