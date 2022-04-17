#include <iostream>
#include "boardSymbols.h"
using namespace std;

void drawBoard(){
	cout << "     |     |     "<<endl;
	cout << "  " << boardSymbols[0] << "  |  " << boardSymbols[1] << "  |  " << boardSymbols[2] << "  "<< endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << boardSymbols[3] << "  |  " << boardSymbols[4] << "  |  " << boardSymbols[5] << "  "<< endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     "<< endl;
	cout << "  " << boardSymbols[6] << "  |  " << boardSymbols[7] << "  |  " << boardSymbols[8] << "  "<< endl;
	cout << "     |     |     ";
}
