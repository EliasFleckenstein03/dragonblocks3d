#include "box_vertices.hpp"

GLfloat dragonblocks::box_vertices[6][6][5] = {
//  x     y     z      s     t
	-0.5, -0.5, -0.5,  +0.0, +0.0,
	+0.5, -0.5, -0.5,  +1.0, +0.0,
	+0.5, +0.5, -0.5,  +1.0, +1.0,
	+0.5, +0.5, -0.5,  +1.0, +1.0,
	-0.5, +0.5, -0.5,  +0.0, +1.0,
	-0.5, -0.5, -0.5,  +0.0, +0.0,

	-0.5, -0.5, +0.5,  +0.0, +0.0, 
	+0.5, +0.5, +0.5,  +1.0, +1.0,
	+0.5, -0.5, +0.5,  +1.0, +0.0,
	+0.5, +0.5, +0.5,  +1.0, +1.0,
	-0.5, -0.5, +0.5,  +0.0, +0.0,
	-0.5, +0.5, +0.5,  +0.0, +1.0,

	-0.5, +0.5, +0.5,  +1.0, +1.0,
	-0.5, -0.5, -0.5,  +0.0, +0.0,
	-0.5, +0.5, -0.5,  +0.0, +1.0,
	-0.5, -0.5, -0.5,  +0.0, +0.0,
	-0.5, +0.5, +0.5,  +1.0, +1.0,
	-0.5, -0.5, +0.5,  +1.0, +0.0,

	+0.5, +0.5, +0.5,  +1.0, +1.0, 
	+0.5, +0.5, -0.5,  +0.0, +1.0,
	+0.5, -0.5, -0.5,  +0.0, +0.0,
	+0.5, -0.5, -0.5,  +0.0, +0.0,
	+0.5, -0.5, +0.5,  +1.0, +0.0,
	+0.5, +0.5, +0.5,  +1.0, +1.0,

	-0.5, -0.5, -0.5,  +0.0, +1.0,
	+0.5, -0.5, -0.5,  +1.0, +1.0,
	+0.5, -0.5, +0.5,  +1.0, +0.0,
	+0.5, -0.5, +0.5,  +1.0, +0.0,
	-0.5, -0.5, +0.5,  +0.0, +0.0,
	-0.5, -0.5, -0.5,  +0.0, +1.0,

	-0.5, +0.5, -0.5,  +0.0, +1.0,
	+0.5, +0.5, -0.5,  +1.0, +1.0,
	+0.5, +0.5, +0.5,  +1.0, +0.0,
	+0.5, +0.5, +0.5,  +1.0, +0.0,
	-0.5, +0.5, +0.5,  +0.0, +0.0,
	-0.5, +0.5, -0.5,  +0.0, +1.0,
};
