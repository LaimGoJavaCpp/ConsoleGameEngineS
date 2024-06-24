#include "App.h"

using namespace std::this_thread;
using namespace std::chrono;

void App::Init()
{
	isExit = false;
	Scenes.push_back(Scene());
	selecteScene = &Scenes.at(0);
	system("color 3");
}

void App::Update()
{
	while (!isExit)
	{
		system("cls");

		int i = 0;
		for (int y = 0; y < 50; y++)
		{
			for (int x = 0; x < 50 * 2; x++)
			{
				if (i < selecteScene->objects.size() && selecteScene->objects[i]->getX() == x && selecteScene->objects[i]->getY() == y)
				{
					selecteScene->objects[i]->draw();
					i += 1;
				}
				else
					std::cout << ".";
			}
			std::cout << std::endl;
		}
		for (int i = 0; i < selecteScene->objects.size(); i++)
		{
			selecteScene->objects[i]->update();
		}
	}
}



void App::addObject(Object* obj)
{
	selecteScene->objects.push_back(obj);
}

void App::addScene(Scene scene)
{
	Scenes.push_back(scene);
}

Scene* App::getScene(int index)
{
	return &Scenes[index];
}

void App::setSelectScene(Scene* s)
{
	selecteScene = s;
}