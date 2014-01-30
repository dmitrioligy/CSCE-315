
// Primary Include
#ifndef _Player_H_                  
#define _Player_H_

// Default Include
#include <string>
#include "Games.h"
#include "Achievement.h"

using namespace std;


class Player 
{

	private:

		int _player_id;
		string _player_name;
		string _player_ign;

	public:
		
		vector<string> friend_list;
		vector<Games> games_played;

		Player();
		~Player();

		// Accessor functions for external classes
		int 	player_id();
		string 	player_name();
		int 	player_ign();

		// Internal functions
		void 	Add_Player(int player_id, string player_name);
		void	Plays(int player_id, int game_id, string player_ign);
		void	Summarize_Player(int player_id);
		void 	Achieve(int player_id, int game_id, int achv_id);

};

#endif


/*	
	Relevent Functions:
		AddPlayer player_id, player_name
		




*/