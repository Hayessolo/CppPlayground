#include "ArithProgression.hpp"

/**
 * Constructor for ArithProgression
 * Initializes the ArithProgression with an increment (default is 1).
 * @param i: The increment value.
 */
ArithProgression::ArithProgression(long i) : Progression(), inc(i) {}

/**
 * nextValue function (override)
 * Advances the progression to the next value by adding the increment.
 * @return The next value of the progression.
 */
long ArithProgression::nextValue() {
    cur += inc; // Advance by adding the increment
    return cur;
}
