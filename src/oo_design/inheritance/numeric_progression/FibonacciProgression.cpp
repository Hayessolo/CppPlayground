#include "FibonacciProgression.hpp"

/**
 * Constructor for FibonacciProgression
 * Initializes the FibonacciProgression with the first two elements of the sequence (default is 0 and 1).
 * @param f: The first element of the Fibonacci sequence.
 * @param s: The second element of the Fibonacci sequence.
 */
FibonacciProgression::FibonacciProgression(long f, long s) : Progression(f), second(s), prev(second - first) {}

/**
 * firstValue function
 * Resets the progression and returns the first value.
 * @return The first value in the Fibonacci progression.
 */
long FibonacciProgression::firstValue() {
    cur = first; // Reset current value
    prev = second - first; // Create a fictitious prev
    return cur;
}

/**
 * nextValue function
 * Advances the progression by summing the current and previous values.
 * @return The next value in the Fibonacci progression.
 */
long FibonacciProgression::nextValue() {
    long temp = prev; // Store the old previous value
    prev = cur; // Update previous to the current value
    cur += temp; // Calculate the next value
    return cur; // Return the next value
}
