#pragma once
#include <functional>
#include <cstdarg>
#include <cstdint>
void yield();
void await(std::function<int(int)> func, int param);
void coroutine_printf(int fd, const char* format, ...);
void coroutine_write(int fd, void* buffer, size_t len);
void coroutine_read(int fd, void* buffer, size_t len);
