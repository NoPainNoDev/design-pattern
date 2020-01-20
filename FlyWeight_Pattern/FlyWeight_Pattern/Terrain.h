#pragma once
class Texture
{
private:
	void* TextureInfo;
};

class Terrain
{
public:
	Terrain(int movementCost, bool isWater, Texture texture)
		: _movementCost(movementCost),
		_isWater(isWater),
		_texture(texture)
	{

	}
	~Terrain();

	int getMovementCost() const { return _movementCost; }
	bool isWater() const { return _isWater; }
	const Texture& getTexture() const { return _texture; }

private:
	int _movementCost;
	bool _isWater;
	Texture _texture;
};

