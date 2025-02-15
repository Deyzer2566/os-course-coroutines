#pragma once
#include <functional>
#include <cstdarg>
void yield();
void await(std::function<int(int)> func, int param);
void coroutine_printf(int fd, const char* format, ...);
