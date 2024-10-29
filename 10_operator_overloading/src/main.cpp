#include <iostream>
#define log(x) std::cout << x << std::endl;

class Vector2 {
public:
    float x,y;

    Vector2() = delete;

    Vector2(float x, float y)
        : x(x), y(y) {}

    Vector2 operator+(const Vector2& other) {
        return Vector2(x + other.x, y + other.y);
    }

    bool operator==(const Vector2& other) {
        return x == other.x && y == other.y;
    } 

    bool operator!=(const Vector2& other) {
        return x != other.x || y != other.y;
    } 
};

std::ostream& operator<<(std::ostream& stream, const Vector2& v) {
    stream << "(" << v.x << ", " << v.y << ")";
    return stream;
}

int main() {
    Vector2 position(100.22, 233.54);
    Vector2 speed(11.5, 23.12);

    Vector2 updatedPosition = position + speed;

    log(position); 
    log(speed); 
    log(updatedPosition); 
    
    Vector2 a(10.0, 20.0);
    Vector2 b(10.0, 20.0);
    Vector2 c(10.0, 21.0);

    log((a == b));
    log((a == c));

    log((a != b));
    log((a != c));

    return 0;
}
