#include <iostream>

class Player{
public: int x, y, speed; // Can be accessed outside class
	// fcn to move the players
	void Move(int xa, int ya)
	{
		x += xa * speed,
		y += ya * speed;
		std::cout << "Player Moved "<<"x: "<<x<<" y: "<<y<<"\n";
	}
protected: int x_prot = 100;
private: int x_priv = 100;
};

class VisualizePlayer : public Player {

public:
	void printPlayer() { 
		std::cout << "i can access public members" << x <<"\n";
		//std::cout << "i can access protected member" << x_prot << "\n";
		//std::cout << "i can access private member " << x_priv << "\n";
	}
	void printPlayerExt();
};

void VisualizePlayer::printPlayerExt() {
	std::cout << "ExtFcn i can access public members" << x << "\n";
	std::cout << "ExtFcn i can access protected member" << x_prot << "\n";
	//std::cout << "ExtFcn i can access private member " << x_priv << "\n";
}

int main()
{
	//Create different players, objects of class Player
	Player Klaus, Elijah;
	VisualizePlayer viz1, viz2;

	viz1.x = 5, viz1.y = 5, viz1.speed = 0;
	//Move Klaus
	viz1.Move(1, 1);
	//Objects for VisualizePlayer
	viz1.printPlayer();

	viz2.x = 5, viz2.y = 5, viz2.speed = 0;
	//Move Elijah
	viz2.Move(1, 1);
	viz2.printPlayer();

	//external function
	viz1.printPlayerExt();

	std::cout << "Press Enter key";
	std::cin.get();
}