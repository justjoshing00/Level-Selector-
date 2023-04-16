#pragma once
#include <utility>
#include <functional>
#include <string>
#include <iostream>
#include <any>
#include "DataClasses.h"



namespace Processes 
{
	inline void Field(DataClasses::FieldData data)
	{
		std::cout << "field process engaged";
	}
	inline void Menu(DataClasses::MenuData data)
	{
		std::cout << "menu process engaged";
	}
	inline void Combat(DataClasses::CombatData data)
	{
		std::cout << "combat process engaged";
	}
	inline void Pause(DataClasses::PauseData data)
	{
		std::cout << "paused process engaged";
	}
}



enum  Levels 
{
	//i dont knowif level and encounter are the right names anymore
	Level1 = 1,
	Level2,
	Level3,
	Level4,
	Level5,
	Level6,
	Level7,
	Level8,
	Level9,
	Level10,
};
enum Encounters
{
	// i dont know if level and encounter are the right names anymore
	Encounter1 = 1,
	Encounter2,
	Encounter3,
	Encounter4,
	Encounter5,
	Encounter6,
	Encounter7,
	Encounter8,
	Encounter9,
	Encounter10,
	Encounter11,
	Encounter12,
	Encounter13,
	Encounter14,
	Encounter15,
	Encounter16,
	Encounter17,
	Encounter18,
	Encounter19,
	Encounter20,
};



namespace GameLoop
{
	//variant of function objects
	inline std::pair<DataClasses::FunctionVariant,DataClasses::DataVariant> LevelSelector(int enc, int lvl)
	{
		
		switch (enc)
		{
			//TODO:Do something with the zero case here
		case 1:
			if (lvl == 1)
			{
				DataClasses::FieldData FData;
				DataClasses::FunctionVariant ModeFn = Processes::Field;
				auto Mode = std::make_pair(ModeFn, FData);
				return Mode; // rename the processes to reflect the modes the game will be in
			}
		case 2:
			if (lvl == 2)
			{
				DataClasses::MenuData MData;
				DataClasses::FunctionVariant ModeFn = Processes::Menu;
				auto Mode = std::make_pair(ModeFn, MData);
				return Mode; // rename the processes to reflect the modes the game will be in
			}
		case 3:
			if (lvl == 3)
			{
				DataClasses::CombatData CData;
				DataClasses::FunctionVariant ModeFn = Processes::Combat;
				auto Mode = std::make_pair(ModeFn, CData);
				return Mode; // rename the processes to reflect the modes the game will be in
			}
		case 4:
			if (lvl == 4)
			{
				DataClasses::PauseData PData;
				DataClasses::FunctionVariant ModeFn = Processes::Pause;
				auto Mode = std::make_pair(ModeFn, PData);
				return Mode; // rename the processes to reflect the modes the game will be in
			}
		}
	}
	
}