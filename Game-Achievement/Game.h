
// Primary Include
#ifndef _Game_H_                  
#define _Game_H_

// Default Include
#include <string>
#include "Player.h"
#include "Achievement.h"

using namespace std;


class Game 
{

	private:

		int	_game_id;
		string _game_name;

	public:
		
		vector<Achievement> achievements;
		vector<Player> players;

		Game();
		~Game();

		// Accessor functions for external classes
		int 	game_id();
		string 	game_name();


		// Internal functions
		void	Add_Game(int game_id, string game_name);
		void 	Summarize_Game(int game_id);
		void 	Add_Achievement(int game_id, int achv_id, string achv_name, int achv_pts);


};

#endif


/*	
	Relevent Functions:
		AddPlayer player_id, player_name
		




*/