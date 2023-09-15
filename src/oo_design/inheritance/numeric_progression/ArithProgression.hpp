/*We add a new member variable inc, which provides the value to be added to each new element of the pro gression. We also override#ifndef ARITHPROGRESSION_HPP
#define ARITHPROGRESSION_HPP

#include "Progression.hpp" // Include the base Progression class

/**
 * ArithProgression Class
 * Represents an arithmetic progression where the next value is determined by adding a fixed increment.
 */

// Define the ArithProgression class, derived from Progression
class ArithProgression : public Progression {
public:
    /**
     * Constructor for ArithProgression
     * Initializes the ArithProgression with an increment (default is 1).
     * @param i: The increment value.
     */
    ArithProgression(long i = 1);

    /**
     * nextValue function (override)
     * Advances the progression to the next value by adding the increment.
     * @return The next value of the progression.
     */
    virtual long nextValue() override;

private:
    long inc; // The increment value
};

#endif // ARITHPROGRESSION_HPP
