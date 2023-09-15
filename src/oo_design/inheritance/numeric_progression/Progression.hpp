#ifndef PROGRESSION_HPP
#define PROGRESSION_HPP

/**
 * Progression Class
 * Represents a generic numeric progression where the next value depends on one or more previous values.
 */

// Include necessary headers and libraries if needed

// Define the Progression class
class Progression {
public:
    /**
     * Constructor for Progression
     * Initializes the Progression with the first value (default is 0).
     * @param f: The first value of the progression.
     */
    Progression(long f = 0);

    // Virtual destructor to ensure proper destruction in derived classes
    virtual ~Progression();

    /**
     * firstValue function
     * Resets the progression to the first value and returns it.
     * @return The first value of the progression.
     */
    virtual long firstValue();

    /**
     * nextValue function
     * Advances the progression to the next value and returns it.
     * @return The next value of the progression.
     */
    virtual long nextValue();

    /**
     * printProgression function
     * Resets the progression and prints its first 'n' values.
     * @param n: The number of values to print.
     */
    void printProgression(int n);

protected:
    long first; // The first value of the progression
    long cur;   // The current value of the progression
};

#endif // PROGRESSION_HPP
