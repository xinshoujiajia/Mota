#include "Zs.h"
#include "SpriteComponent.h"
#include "Game.h"

Zs::Zs(Game* game)
:Actor(game)
{
	SpriteComponent* sc = new SpriteComponent(this, 200);
	sc->SetTexture(game->GetTexture("Assets/ZS.png"));
}