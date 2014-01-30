
// Primary Include
#ifndef _Achievement_H_                  
#define _Achievement_H_

// Default Include
#include <string>
#include "Games.h"
#include "Player.h"

using namespace std;


class Achievement 
{

	private:

		string 	_achv_name;
		int 	_achv_id;
		int 	_achv_pts;

	public:

		vector<Player> players;

		Achievement();
		~Achievement();

		// Accessor functions for external classes
		string 	achv_name();
		int 	achv_id();
		int 	achv_pts();

		// Internal functions
		void Summarize_Achievement(int game_id, int achv_id);
		void Achievement_Ranking();

};




#endif