#include "LevelSelector.h" 






int main()
{
	//I still need to figure out how to use a different index for the function call here depending on player input, but this works ..kinda 
	auto Mode = GameLoop::LevelSelector (Encounters::Encounter1, Levels::Level1);
	std::get<0>(Mode.first)(std::get<0>(Mode.second));
}


