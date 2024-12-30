#pragma once
#include <gl2d/gl2d.h>

struct TiledRenderer
{
	float backgroundSize = 1000;
	gl2d::Texture texture;

	void render(gl2d::Renderer2D& renderer);
};