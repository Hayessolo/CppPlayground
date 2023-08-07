#include "Scores.hpp"

Scores::Scores(int maxEnt) : maxEntries(maxEnt), numEntries(0) {
    entries = new GameEntry[maxEntries];
}

Scores::~Scores() {
    delete[] entries;
}

void Scores::add(const GameEntry& e) {
    int newScore = e.getScore();
    
    if (numEntries == maxEntries || newScore <= entries[maxEntries - 1].getScore()) {
        return; // Ignore if array is full or score is not high enough
    }

    int i = numEntries - 1;
    while (i >= 0 && newScore > entries[i].getScore()) {
        entries[i + 1] = entries[i]; // Shift right
        i--;
    }
    entries[i + 1] = e; // Insert the new entry
    numEntries++;
}

GameEntry Scores::remove(int i) {
    if (i < 0 || i >= numEntries) {
        throw IndexOutOfBounds("Invalid index");
    }

    GameEntry e = entries[i]; // Save the removed object
    for (int j = i + 1; j < numEntries; j++) {
        entries[j - 1] = entries[j]; // Shift entries left
    }
    numEntries--;
    return e; // Return the removed object
}
