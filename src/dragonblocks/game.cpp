#include "block_def.hpp" 
#include "game.hpp" 
#include "mapgen.hpp" 

using namespace dragonblocks;

Game::Game(Mapgen *m) : mapgen(m)
{
	grass_texture.load("textures/grass.png");
	grass_side_texture.load("textures/grass_side.png");
	dirt_texture.load("textures/dirt.png");
	stone_texture.load("textures/stone.png");
	
	air = new BlockDef("dragonblocks:air");
	grass = new BlockDef("dragonblocks:grass", {grass_side_texture, grass_side_texture, grass_side_texture, grass_side_texture, dirt_texture, grass_texture});
	dirt = new BlockDef("dragonblocks:dirt", dirt_texture);
	stone = new BlockDef("dragonblocks:stone", stone_texture);
	
	mapgen->air_def = air;
	mapgen->grass_def = grass;
	mapgen->dirt_def = dirt;
	mapgen->stone_def = stone;
}
