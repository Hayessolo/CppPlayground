#include "GeomProgression.hpp"

/**
 * Constructor for GeomProgression
 * Initializes the GeomProgression with a base value (default is 2).
 * @param b: The base value for the geometric progression.
 */
GeomProgression::GeomProgression(long b) : Progression(1), base(b) {}

/**
 * nextValue function
 * Advances the progression by multiplying the current value by the base value.
 * @return The next value in the geometric progression.
 */
long GeomProgression::nextValue() {
    // Multiply the current value by the base to get the next value
    cur *= base;
    
    return cur; // Return the next value
}
