#include <cstdio>
#include <cassert>
#include <stdexcept>
#include <iostream>
#include <functional>

struct scope_guard {
    scope_guard() {
        puts("constructor");
    }
    ~scope_guard() {
        puts("deconstructor");
    }
};

int main() {
    puts("enter main");
    {
        puts("enter");
        scope_guard a;
        puts("left");
    }
    puts("left main");
    return 0;
}
