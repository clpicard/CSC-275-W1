#include "Horse.h"
#include "Cat.h"

int main() {
    // Creating objects with parameterized constructors
    Horse horse1(1, "Thunder", "Stable Haven");
    Cat cat1(2, "Whiskers", "Cozy Corner");

    // Calling makeSound() to confirm that these animals are loud and proud
    horse1.makeSound();
    cat1.makeSound();

    return 0;
}
