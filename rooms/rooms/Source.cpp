#include <iostream>
#include<string>
#include<Windows.h>

using namespace std;

int main() {
	char input = 'a';
	int room = 1;
	string input2;
	string inventory[6];
	cout << "You wake up in a closet there is tape over your mouth and your hands are bounded." << endl;
	cout << "you struggle and slide the ropes off your hand and pull the tape off of your mouth" << endl;
	cout << "Time to go" << endl;

	while (input != 'q') 
		switch (room) {
		case 1:
			cout << "The closet is very cramped and you're starting to get claustrophobic" << endl;
			cout << "you can push the closet door open " << endl;
			getline(cin, input2);
			if (input2.compare("forward") == 0) {
				room = 2;
			}
			else
				cout << "can't go that way" << endl;
			break;

		case 2:
			cout << "You are in some kind of bedroom there is a small door that seems to be locked" << endl;
			cout << "you decide to go to the door and it has a note saying GOOD LUCK" << endl;
			cout << "Then there is a hatch to the left that seems to go below the somthing" << endl;
			cout << "do you have the keys??" << endl;
			getline(cin, input2);
			if (input2.compare("yes") == 0 && inventory[2] == "keys") {
					room = 7;
			}

			else if (input2.compare("no") == 0) {
				if (input2.compare("back") == 0) {
					room = 1;
				}
			}
				else if (input2.compare("left") == 0) {
					room = 3;
				}
				
			else cout << "can't go that way" << endl;
			break;

			if (input2.compare("Inventory")) {
				cout << "____________________________" << endl;
				for (int i = 0; i < 6; i++) {
					cout << " Items " << " - " << inventory[i];
					cout << endl;
				}
				cout << "_____________________________" << endl << endl;;
			}
		
		case 3:
			cout << "you go through the hatchet and you see pipes along the walls like they are forcing somthing like gas or oil" << endl;
			cout << "you keep going down the hall and you run into two doors one in front of you and one to the left" << endl;
			getline(cin, input2);
			if (input2.compare("back") == 0) {
				room = 2;
			}
			else if (input2.compare("left") == 0) {
				room = 4;
			}
				else if (input == 'f')
					room = 6;
				else cout << "can't go that way" << endl;
				break;
		case 4:
			cout << "you enter into the room and you see a poker table, a bar and a sofa " << endl;
			cout << "you can go right behind the bar and see the liquor or you can go forward towards the poker table " << endl;
			getline(cin, input2);
			if (input2.compare("right") == 0)
				room = 6;
			else if (input2.compare("forward") == 0)
				room = 5;
			else if (input2.compare("back") == 0)
				room = 3;
			else cout << "can't go that way" << endl;
			break;
		case 5:
			cout << "you go the poker table and you see a bottle of liquor, it seems to be half empty and just opened" << endl;
			cout << "you decide to go back where you were and now you can go to the bar" << endl;
			getline(cin, input2);
			if (input2.compare("back") == 0)
				room = 4;
			else cout << "can't go that way" << endl;
			break;
		
		case 6:
		cout << "you go behind the bar and see a set of keys and also sunglasses" << endl;
		cout << "you should grab the keys, I think there was a lock somewhere" << endl;
		getline(cin, input2);
		if (input2.compare("keys") == 0) {
			inventory[2] = "keys";
			cout << endl << endl;
			cout << "You got keys" << endl;

			for (int i = 0;i < 6;i++)
				cout << inventory[i] << endl;
		
				cout << "Would you like to grab the sunglasses??" << endl;
				getline(cin, input2);
				if (input2.compare("yes") == 0) {
					inventory[1] = "sunglasses";
					cout << endl << endl;
				}
			
		}
		
		if (input2.compare("back") == 0) 
			room = 4;
		
		else if (input2.compare("back") != 0) {
			cout << "cant go that way" << endl;
			for (int i = 0;i < 6;i++)

				cout << inventory[i] << endl;

		}
			 break;

			 
		case 7:
			cout << "You unlock the door to to seem to see that now your outside at night" << endl;
			cout << "It seems to be that your on a boat, yes of course" << endl;
			cout << "It all makes sense the pipes, the hachets and the fact the door leads to outside" << endl;
			cout << "you need to leave now! you can see a gun with 10 bullets, also you see a pair of binoculars" << endl;
			getline(cin, input2); 
			if (input2.compare("bullets") == 0) {
				inventory[4] = "bullets(10)";
				cout << "You got the gun and the bullets" << endl;
				cout << endl << endl;
			}
			
			else if (input2.compare("forward") == 0) {
				room = 8;
			}
			else if (input2.compare("left") == 0){
			room = 10;
			
			}
			break;
		case 8:
			cout << "Oh No! you've been spotted, you run to the front of the boat, hoping a miricale would happend" << endl;
			cout << "Let's remember who has control here" << endl;
			cout << "As your sitting there the guards eventually find you and take below deck once again to meet the drug lord you meet at the bar" << endl;
			cout << "you have two options he says" << endl;
			cout << "ethier A. you take a bullet through the head" << endl;
			cout << "or B. you get slit in the throat" << endl;
			cin >> input;
			if (input == 'a') {
				room = 9;
			}
			else if (input == 'b') {
				room = 9;
			}
			else 
				cout << "cant go that way" << endl;
	
			break;
		case 9:
			cout << "you had a chance you took the easy way out" << endl;
			cout << "GAME OVER" << endl;
			getline(cin, input2);
			if (input2.compare("quit") == 0)
				return 0;
			break;
		case 10:
			PlaySound(TEXT("trumpet.wav"), NULL, SND_FILENAME);
			cout << "congratulations you escaped" << endl;
			cout << "LEt's take second to think" << endl;
			cout << "Do you think that if you did spill that drink you wouldn't get in this mess" << endl;
			cout << "Or maybe do you think that there was more to it" << endl;
			cout << "I doont know, all i know is that you escaped and decide to retire " << endl;
			return 0;
			break;
		





		
	} // While


} //Main
