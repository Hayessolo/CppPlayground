#include "Progression.hpp"

/**
 * Constructor for Progression
 * Initializes the Progression with the first value (default is 0).
 * @param f: The first value of the progression.
 */
Progression::Progression(long f) : first(f), cur(f) {}

/**
 * Virtual destructor for Progression
 * Ensures proper destruction in derived classes.
 */
Progression::~Progression() {}

/**
 * firstValue function
 * Resets the progression to the first value and returns it.
 * @return The first value of the progression.
 */
long Progression::firstValue() {
    cur = first; // Reset the current value
    return cur;
}

/**
 * nextValue function
 * Advances the progression to the next value and returns it.
 * @return The next value of the progression.
 */
long Progression::nextValue() {
    ++cur; // Default behavior: increment by 1
    return cur;
}

/**
 * printProgression function
 * Resets the progression and prints its first 'n' values.
 * @param n: The number of values to print.
 */
void Progression::printProgression(int n) {
    std::cout << firstValue(); // Print the first value
    for (int i = 2; i <= n; ++i) {
        std::cout << ' ' << nextValue(); // Print 2 through n values
    }
    std::cout << std::endl;
}
