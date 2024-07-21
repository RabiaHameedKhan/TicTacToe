# include <iostream>
using namespace std;


	char board[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void board_display(){
	
		
				cout<<"\t\t\t\t\tWelcome to Tic Tac Toe Game!"<<endl;
	cout<<"\nPlayer 1: [x]\nPlayer 2: [O]"<<endl;
	
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
	cout<<"\t\t     |     |     \n";
}

void playerTurn(){
	int choice;
		cout<<"\nPlayer 1 [X] turn: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			board[0][0]='X';
			break;
		case 2:
			board[0][1]='X';
			break;
		case 3:
			board[0][2]='X';
			break;
		case 4:
			board[1][0]='X';
			break;
		case 5:
			board[1][1]='X';
			break;
		case 6:
			board[1][2]='X';
			break;
		case 7:
			board[2][0]='X';
			break;
		case 8:
			board[2][1]='X';
			break;
		case 9:
			board[2][2]='X';
			break;
			default: 
			cout<<"Invalid Choice"<<endl;
			break;
		}
}

int main(){

	int choice;
	
	board_display();
	

	
	board_display();
	playerTurn();
	
//	cout<<"\nPlayer 2 [O] turn: ";
//	cin>>choice;
			
	}
	

