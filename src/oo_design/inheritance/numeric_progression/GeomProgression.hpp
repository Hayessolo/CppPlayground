ifndef GEOMPROGRESSION_HPP
#define GEOMPROGRESSION_HPP

/**
 * GeomProgression Class
 * Represents a geometric progression where the next value is obtained by multiplying the current value by a fixed base value.
 */

// Include necessary headers and libraries if needed

// Define the GeomProgression class that inherits from the Progression class
class GeomProgression : public Progression {
public:
    /**
     * Constructor for GeomProgression
     * @param b: The base value for the geometric progression (default is 2).
     */
    GeomProgression(long b = 2);

    // Override the nextValue function for geometric progression
    virtual long nextValue();

protected:
    long base; // The base value for the geometric progression
};

#endif // GEOMPROGRESSION_HPP
