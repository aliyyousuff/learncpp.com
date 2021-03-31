#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

//Define an enumerated type to choose between the following monster races: orcs, goblins, trolls, ogres, and skeletons.

enum Monsters
{
    m_orcs,
    m_goblins,
    m_trolls,
    m_ogres,
    m_skeletons,

};

int main()
{
	Monsters monster{ m_trolls };
 
	return 0;
}
