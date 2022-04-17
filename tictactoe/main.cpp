#include <iostream>
#include "boardSymbols.h"
using namespace std;


int main(){
	drawBoard();
 	playerInput();	// start the game
	int num = result();	// variable to determine the result when game ends
		if (num == 1){
			cout << "\nPlayer O wins" << endl;
		}
		else if (num == 2){
			cout << "\nPlayer X wins" << endl;
		}
		else{
			cout << "\nDraw" << endl;
		}
	return 0;
}

