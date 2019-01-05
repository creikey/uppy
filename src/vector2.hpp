#ifndef HPP_VECTOR2
#define HPP_VECTOR2

template<typename T>
struct Vector2
{
    T x;
    T y;
    Vector2(T in_x, T in_y): x(in_x), y(in_y) {}
    Vector2() {}
};

#endif // HPP_VECTOR2