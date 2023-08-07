#include <iostream>
#include "GameEntry.hpp"
#include "Scores.hpp"

int main() {
    GameEntry entry1("Player1", 100);
    GameEntry entry2("Player2", 150);
    GameEntry entry3("Player3", 200);

    Scores highScores(5);

    highScores.add(entry1);
    highScores.add(entry2);
    highScores.add(entry3);

    std::cout << "Current High Scores:\n";
    for (int i = 0; i < highScores.getNumEntries(); ++i) {
        GameEntry entry = highScores.getEntry(i);
        std::cout << entry.getName() << ": " << entry.getScore() << "\n";
    }

    return 0;
}
