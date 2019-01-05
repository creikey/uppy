#include <iostream>
#include "vector2.hpp"
#include "settings.hpp"

int main(int argc, char ** argv)
{
    Settings set;
    set.screen_size = Vector2<int>(500, 500);
    std::cout << "Hello, World" << std::endl;
}