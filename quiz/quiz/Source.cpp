#include <iostream>
using namespace std;

int main() {
	int megaman = 0;
	int protoman = 0;
	int zero = 0;
	int plantman = 0;
	char input;

	cout << "what is your favorite color?,Blue(B), Grey(J), Red(R), Green(G)" << endl;
	cin >> input;

	if (input == 'b')
		megaman = megaman + 1;
	else if (input == 'j')
		protoman = protoman + 1;
	else if (input == 'r')
		zero = zero + 1;
	else if (input == 'g')
		plantman = plantman + 1;
	cout << "what is your favorite thing about nature?, lava(L),trees(T), Water(W),animals(A)" << endl;
	cin >> input;

	if (input == 'w')
		megaman = megaman + 1;
	else if (input == 'a')
		protoman = protoman + 1;
	else if (input == 'l')
		zero = zero + 1;
	else if (input == 't')
		plantman = plantman + 1;
	cout << "what if you are stranded on an island what element would you want to manipulate?, Fire(F), Water(W),rock(R),Nature(N)" << endl;
	cin >> input;

	if (input == 'w')
		megaman = megaman + 1;
	else if (input == 'r')
		protoman = protoman + 1;
	else if (input == 'f')
		zero = zero + 1;
	else if (input == 'n')
		plantman = plantman + 1;
	cout << "what is your favorite pet?, dog(D), cat(C), lizard(L),bird(B)" << endl;
	cin >> input;

	if (input == 'd')
		megaman = megaman + 1;
	else if (input == 'c')
		protoman = protoman + 1;
	else if (input == 'b')
		zero = zero + 1;
	else if (input == 'l')
		plantman = plantman + 1;
	cout << "What is your favorite thing to do? play out side(P) play video games(G), sleep(S), nothing(N)" << endl;
		cin >> input;

	if (input == 'g')
		megaman = megaman + 1;
	else if (input == 'p')
		protoman = protoman + 1;
	else if (input == 's')
		zero = zero + 1;
	else if (input == 'n')
		plantman = plantman + 1;
	cout << "what is the most important person to you? Brother(B), Sister(S), Father(F), Mother(M)" << endl;
	cin >> input;

	if (input == 's')
		megaman = megaman + 1;
	else if (input == 'b')
		protoman = protoman + 1;
	else if (input == 'f')
		zero = zero + 1;
	else if (input == 'm')
		plantman = plantman + 1;
	cout << " " << endl;
	
	if ((plantman > zero) && (plantman > megaman) && (plantman > protoman)) {
		cout << "You are plant man" << endl;
	}
	else if ((megaman > protoman) && (megaman > zero) && (megaman > plantman)) {
		cout << "You are megaman" << endl;
	}
	else if ((zero > protoman) && (zero > megaman) && (zero > plantman)) {
		cout << "you are zero" << endl;
	}
	else if ((protoman > zero) && (protoman > megaman) && (protoman > plantman)) {
		cout << "you are protoman" << endl;
	}
	
}