#include <iostream>
#include <limits>
#include "boardSymbols.h"
using namespace std;

void playerInput(){
	int number = 0;
	char playerSelected = '\0';
	int i = 0;
	char O = boardSymbols[9];
	char X = boardSymbols[10];
	cout << "\n\nChoose O or X to start: ";
	cin >> playerSelected;
	while (playerSelected != O && playerSelected != X){
		cout << "\nPlease type in the correct character: ";
		cin >> playerSelected;
	}
	 
	while (result() != 1 && result() != 2 && i != 9){
		cout << "\n\nSelect a number on the board (" << playerSelected << "'s turn): ";
		cin >> number;

		if (playerSelected == O){
		while (!cin || (number != 1 && number != 2 && number != 3 && number != 4 && number != 5 && number != 6 && number != 7 
		&& number != 8 && number != 1 && number != 9)){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\nPlease type in a valid number: ";
			cin >> number;
		}
			if (number == 1 && boardSymbols[0] != X){
				boardSymbols[0] = O;
				playerSelected = X;
				drawBoard();
				i++;
			}
			else if (number == 2 && boardSymbols[1] != X){
				boardSymbols[1] = O;
				playerSelected = X;
				drawBoard();
				i++;
			}
			else if (number == 3 && boardSymbols[2] != X){
				boardSymbols[2] = O;
				playerSelected = X;
				drawBoard();
				i++;
			}
			else if (number == 4 && boardSymbols[3] != X){
				boardSymbols[3] = O;
				playerSelected = X;
				drawBoard();
				i++;
			}
			else if (number == 5 && boardSymbols[4] != X){
				boardSymbols[4] = O;
				playerSelected = X;
				drawBoard();
				i++;
			}
			else if (number == 6 && boardSymbols[5] != X){
				boardSymbols[5] = O;
				playerSelected = X;
				drawBoard();
				i++;
			}
			else if (number == 7 && boardSymbols[6] != X){
				boardSymbols[6] = O;
				playerSelected = X;
				drawBoard();
				i++;
			}
			else if (number == 8 && boardSymbols[7] != X){
				boardSymbols[7] = O;
				playerSelected = X;
				drawBoard();
				i++;
			}
			else if (number == 9 && boardSymbols[8] != X){
				boardSymbols[8] = O;
				playerSelected = X;
				drawBoard();
				i++;
			}
			else{
				cout << "\n number already chosen, choose another number: ";
			}

		}
		else if (playerSelected == X){
		while (!cin || (number != 1 && number != 2 && number != 3 && number != 4 && number != 5 && number != 6 && number != 7 
		&& number != 8 && number != 9 && number != 10)){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\nPlease type in a valid number: ";
			cin >> number;
				
		}
			if (number == 1 && boardSymbols[0] != O){
				boardSymbols[0] = X;
				playerSelected = O;
				drawBoard();
				i++;
			}
			else if (number == 2 && boardSymbols[1] != O){
				boardSymbols[1] = X;
				playerSelected = O;
				drawBoard();
				i++;
			}
			else if (number == 3 && boardSymbols[2] != O){
				boardSymbols[2] = X;
				playerSelected = O;
				drawBoard();
				i++;
			}
			else if (number == 4 && boardSymbols[3] != O){
				boardSymbols[3] = X;
				playerSelected = O;
				drawBoard();
				i++;
			}
			else if (number == 5 && boardSymbols[4] != O){
				boardSymbols[4] = X;
				playerSelected = O;
				drawBoard();
				i++;
			}
			else if (number == 6 && boardSymbols[5] != O){
				boardSymbols[5] = X;
				playerSelected = O;
				drawBoard();
				i++;
			}
			else if (number == 7 && boardSymbols[6] != O){
				boardSymbols[6] = X;
				playerSelected = O;
				drawBoard();
				i++;
			}
			else if (number == 8 && boardSymbols[7] != O){
				boardSymbols[7] = X;
				playerSelected = O;
				drawBoard();
				i++;
			}
			else if (number == 9 && boardSymbols[8] != O){
				boardSymbols[8] = X;
				playerSelected = O;
				drawBoard();
				i++;
			}

			else{
				cout << "\n- number already chosen, choose another number";
			}	
		}
	}
	result();
}