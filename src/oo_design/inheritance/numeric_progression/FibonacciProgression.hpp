#ifndef FIBONACCIPROGRESSION_HPP
#define FIBONACCIPROGRESSION_HPP

/**
 * FibonacciProgression Class
 * Represents a Fibonacci progression where the next value is the sum of the current and previous values.
 */

// Include necessary headers and libraries if needed

// Define the FibonacciProgression class that inherits from the Progression class
class FibonacciProgression : public Progression {
public:
    /**
     * Constructor for FibonacciProgression
     * Initializes the FibonacciProgression with the first two elements of the sequence (default is 0 and 1).
     * @param f: The first element of the Fibonacci sequence.
     * @param s: The second element of the Fibonacci sequence.
     */
    FibonacciProgression(long f = 0, long s = 1);

    // Override the firstValue and nextValue functions for Fibonacci progression
    virtual long firstValue();
    virtual long nextValue();

protected:
    long second; // The second element of the Fibonacci sequence
    long prev;   // The previous value
};

#endif // FIBONACCIPROGRESSION_HPP
