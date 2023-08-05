#include GameEntry.hpp

GameEntry::GameEntry(const std::string n, int n) : name(n),scor(s) {}

std::string GameEntry::getName() const{
  return name;
}

int GameEntry::getScore( ) const {
	return score;
}
