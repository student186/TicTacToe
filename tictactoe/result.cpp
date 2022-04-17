#include <iostream>
#include "boardSymbols.h"
using namespace std;

int result(){ 
	int value = 0; // number to determine winning condition
	// all ways for player O to win
	if ((boardSymbols[0] & boardSymbols[1] & boardSymbols[2]) == boardSymbols[9] || (boardSymbols[3] & boardSymbols[4] & boardSymbols[5]) == boardSymbols[9]
	  || (boardSymbols[6] & boardSymbols[7] & boardSymbols[8]) == boardSymbols[9] || (boardSymbols[0] & boardSymbols[4] & boardSymbols[8]) == boardSymbols[9]
	  || (boardSymbols[2] & boardSymbols[4] & boardSymbols[6]) == boardSymbols[9] || (boardSymbols[0] & boardSymbols[3] & boardSymbols[6]) == boardSymbols[9]
	  || (boardSymbols[1] & boardSymbols[4] & boardSymbols[7]) == boardSymbols[9] || (boardSymbols[2] & boardSymbols[5] & boardSymbols[8]) == boardSymbols[9]){
		value = 1;
	}
	// all ways for player X to win
	else if ((boardSymbols[0] & boardSymbols[1] & boardSymbols[2]) == boardSymbols[10] || (boardSymbols[3] & boardSymbols[4] & boardSymbols[5])== boardSymbols[10]
	  || (boardSymbols[6] & boardSymbols[7] & boardSymbols[8])== boardSymbols[10] || (boardSymbols[0] & boardSymbols[4] & boardSymbols[8])== boardSymbols[10]
	  || (boardSymbols[2] & boardSymbols[4] & boardSymbols[6]) == boardSymbols[10] || (boardSymbols[0] & boardSymbols[3] & boardSymbols[6]) == boardSymbols[10]
	  || (boardSymbols[1] & boardSymbols[4] & boardSymbols[7]) == boardSymbols[10] || (boardSymbols[2] & boardSymbols[5] & boardSymbols[8]) == boardSymbols[10]){
		value = 2;
	}
	// draw
	else{
		value = 3;
	}

	return value;
}
