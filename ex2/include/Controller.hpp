#pragma once
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>
#include <conio.h>
#include <Windows.h>

#include "Board.hpp"
#include "King.hpp"
#include "Player.hpp"

const int amountOfLevels = 3;
const int numOfPlayers = 4;

enum playersKeys 
{
         KING = 75,      // 'K'
         MAGE = 77,     // 'M'
         WARRIOR = 87, // 'W'
         TILE = 84    // 'T'
};

enum Keys
{
    PlayersKey = 112,
    Space = 32,
    KB_Escape = 27,
    SpecialKey = 224,
};

enum SpecialKeys
{
    KB_Up = 72,
    KB_Down = 80,
    KB_Left = 75,
    KB_Right = 77,
};

class Controller
{
public:
    Controller();
    void findPlayersLocation(int);
    void playLevel(int);
    void runGame();
    int decideActivePlayer(int&);
    bool handleKeyBoardKey(int);
    void handleSpecialKey(int, int);
    
private:
    Board m_board;
    King m_King;
    Player m_Player;
    
};