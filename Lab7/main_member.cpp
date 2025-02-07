#include <iostream>

using namespace std;

class Vector {
private:
    int x;
    int y;

public:
    // Blueprint
    Vector() : x(0), y(0) {}

    // Let there be light
    Vector(int xValue, int yValue) : x(xValue), y(yValue) {}

    // Set 'em
    void setX(int xValue) { x = xValue; }
    void setY(int yValue) { y = yValue; }

    // Get 'Em
    int getX() const { return x; }
    int getY() const { return y; }

    // Show Me
    void display() const {
        cout << "(" << x << "," << y << ")" << endl;
    }

    // Add us together
    Vector operator+(const Vector &v2) const {
        return Vector(x + v2.x, y + v2.y);
    }

    // How do I minus?
    Vector operator-(const Vector &v2) const {
        return Vector(x - v2.x, y - v2.y);
    }

    // How do I remove myself?
    Vector operator-() const {
        return Vector(-x, -y);
    }

    // Are we the same?
    bool operator==(const Vector &v2) const {
        return (x == v2.x && y == v2.y);
    }
};

int main() {
    Vector v1(99, 3); // random vector values
    Vector v2(-3, 56);

    Vector sum = v1 + v2;
    Vector diff = v1 - v2;
    Vector neg = -v1;
    bool equal = (v1 == v2);

    cout<< "(" << v1.getX() << "," << v1.getY() << ") - these are my values" << endl;
    cout << "Add Me: "; sum.display();
    cout << "Minus Me: "; diff.display();
    cout << "Remove Me: "; neg.display();
    cout << "Am I equal? " << (equal ? "true" : "false") << endl;

    return 0;
}
