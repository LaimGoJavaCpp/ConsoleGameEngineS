#include "App.h"

#include "player.h"

void main()
{
	App app;
	app.Init();
	player* pl = new player;
	pl->init();
	app.addObject(pl);
	pl->setX(5);
	pl->setY(5);
	app.addScene(Scene());
	app.setSelectScene(app.getScene(1));
	Cube* b = new Cube();
	b->init();
	b->setX(2);
	b->setY(2);
	app.addObject(b);
	app.Update();
}