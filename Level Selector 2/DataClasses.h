#pragma once
#include <variant>
namespace DataClasses
{
	
	// these are a family of types, but i dont know which one im going to be returning from the calling function until runtime.
	class FieldData
	{
		int x = 1;
	};
	class MenuData
	{
		int y = 2;
	};
	class CombatData
	{
		int z = 3;
	};
	class PauseData
	{
		int w = 4;
	};
	std::variant<FieldData, MenuData, CombatData, PauseData> DataVariant;


}
