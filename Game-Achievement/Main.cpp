/*
********************************************
*	Author: 	Dmitry Ionan
*	Course: 	CSCE 315-501 
*	Teacher: 	Dr. Andruid Kerne
*	Date:		1/16/2014
********************************************/

// Default Includes
#include <iostream>
#include <string>

// Class Includes
#include "Player.h"
#include "Game.h"
#include "Achievment.h"


using namespace std;


int main ()
{




	return 0;
}


//////////////////////////////////////////////////////////////////////////
//							Program Description							//
//////////////////////////////////////////////////////////////////////////
/*

Goal:
	Due Monday 1/27 @ 6:00 p.m.
	You will create an application for keeping track of video game players, what games 
	they play, their achievements in those games, and friendships between players. The 
	application will also compile some of these data sources to output informative reports. 
	This application will be similar in nature to Valve's Steam service or the website 
	trueachievements.com.
	The application will be implemented as a command-line-interface application. All
	input will be taken from standard input.
	The possible line formats are:
	

Classes:
	Player: player_ID, player_name, player_IGN, friend_list

	Game: game_ID, game_name
	
	Achievement: game_ID, achiev_ID, achiev_name, achiev_pts
	
Functions:
		AddPlayer <Player ID> <Player Name>
	Add player to the database. <Player ID> is a positive integer identifier for the 
	player. <Player Name> is a string enclosed by double quotes ("Andruid Kerne").
	
		AddGame <Game ID> <Game Name>
	Add game to the database. <Game ID> is a positive integer identifier for the game. 
	<Game Name> is a string enclosed by double quotes (i.e. "Mirror's Edge").
	
		AddAchievement <Game ID> <Achievement ID> <Achievement Name> <Achievement Points>
	Add achievement to the game denoted by <Game ID>. <Achievement ID> is an integer 
	identifier for the achievement. <Achievement Name> is a string enclosed by double 
	quotes (i.e. "Head over heels"). <Achievement Points> is an integer indicating how
	 many gamer points the achievement is worth.
	
		Plays <Player ID> <Game ID> <Player IGN>
	Add entry for player playing a specific game. <Player IGN> is a string identifier 
	for that that player's particular in game name for the specified game.
	
	AddFriends <Player ID1> <Player ID2>
	Makes players 1 & 2 friends. Friends are mutual.
	
		Achieve <Player ID> <Game ID> <Achievement ID>
	Adds achievement indicated to <Player ID>'s record.
	
	FriendsWhoPlay <Player ID> <Game ID>
	Report which of player's friends play the specified game.
	
	ComparePlayers <Player ID1> <Player ID2> <Game ID>
	Print report comparing player 1 and player 2's achievement records.
	
		SummarizePlayer <Player ID>
	Print record of all of the player's friends, games, and gamer point totals.
	
		SummarizeGame <Game ID>
	Print a record of all players who play the specified game and the number of times 
	each of its achievements have been accomplished.
	
		SummarizeAchievement <Game ID> <Achievement ID>
	Print a list of all players who have achieved an achievement, and the percentage of 
	players who play that game who have the achievement.
	
	AchievementRanking
	Print a summary ranking all players by their total number of gamer points.
	Players, games, achievements, and data relationships are guaranteed to exist before 
	being operated on. IDs are guaranteed to to be unique within their space (i.e. a 
	game's achievements will all have mutually exclusive identifiers).


Example:
The reports should be well formatted to facilitate making sense of the output data.
 For example, this could be the output for the SummarizePlayer command.

Player: Bill Hamilton    Total Gamerscore: 1136 pts

        Name                     Achievements      Gamerscore     IGN
        -------------------------------------------------------------------------
Games:  1. Mirror's Edge         25/25             320 pts        1337FaithRunner1337
        2. Dark Souls            11/12             450 pts        AmazingAchievosAhead
        3. Dishonored            12/25             246 pts        Splinez
        4. Deadlight             5/40              120 pts        ApocalypticJumper666
        5. League of Legends     N/A               N/A            Splinez

            Name                 Gamerscore
        ------------------------------------------------
Friends:    Lennart Nacke        10,456 pts
            Nic Lupfer           620 pts
            Andrew Webb          420 pts
            Andruid Kerne        10 pts    

As for grading, 45% of the grade will depend on how well the code works, the formatting 
of your output, and the implementation of the functionality described. The remaining 55% 
will be based on how well you have done with naming, style, and commenting in the code.

*/