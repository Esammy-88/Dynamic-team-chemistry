#ifndef TEAM_CHEMISTRY_H
#define TEAM_CHEMISTRY_H

#include <vector>
#include <string>
#include <map>

// Forward declarations
class Player;
class Chemistry;
class Morale;
class Playbook;
class Event;

// Class representing a football team
class Team {
public:
    Team(const std::string& name);
    void updateChemistry();
    void addPlayer(Player* player);
    void conductPractice();
    
    int getChemistryLevel() const;
    std::string getName() const;
    
private:
    std::string name;
    int chemistryLevel;
    std::vector<Player*> roster;
};

// Class representing an individual player
class Player {
public:
    Player(const std::string& name, const std::string& position);
    void interactWithTeammate(Player* teammate);
    void updateMorale(int change);
    
    std::string getName() const;
    std::string getPosition() const;
    
private:
    std::string name;
    std::string position;
    Morale* morale;
    Chemistry* chemistry;
};

// Class representing a coach
class Coach {
public:
    Coach(const std::string& name, const std::string& leadershipStyle);
    void conductPractice(Team* team);
    
private:
    std::string name;
    std::string leadershipStyle;
};

// Class representing a practice session
class PracticeSession {
public:
    PracticeSession(Team* team, const std::string& sessionType);
    void impactChemistry();
    
private:
    Team* team;
    std::string sessionType;
    int effectiveness;
};

// Class representing a game
class Game {
public:
    Game(const std::vector<Team*>& teams);
    void updateTeamChemistry();
    
private:
    std::vector<Team*> teams;
    std::map<Player*, int> playerPerformance;  // Stores player performance ratings
};

// Class representing chemistry between players
class Chemistry {
public:
    Chemistry();
    void adjustChemistry(Player* player1, Player* player2, int change);
    
private:
    std::map<Player*, int> playerRelationships;
};

// Class representing a team's playbook
class Playbook {
public:
    Playbook();
    void evaluateEffectiveness(int teamChemistry);
    
private:
    std::vector<std::string> plays;
};

// Class representing in-game events affecting team dynamics
class Event {
public:
    Event(const std::string& eventType, int impact);
    void applyEffect(Team* team);
    
private:
    std::string eventType;
    int impact;
};

// Class representing a player's morale level
class Morale {
public:
    Morale(Player* player, int level);
    void adjustMorale(int change);
    
private:
    Player* player;
    int level;
};

#endif // TEAM_CHEMISTRY_H
