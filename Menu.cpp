#include "Menu.h"


cMenu* Menu = new cMenu();

void cMenu::DrawMenu()
{

}

void cDrawing::Draw()
{
	Cheat->readData();

	String(std::string("Credits: gummy8unny, Killerbear, Ouizzy").c_str(), 10, Process->Size[1] - 20, D3DCOLOR_XRGB(0, 255, 0), false, "small");
	//String(std::to_string(directX->frames).c_str(), 100, 100, D3DCOLOR_XRGB(0, 255, 0), false, "small");

	if (Vars.GUI)
	{
		if (Vars.ESP.Animals.bActive)
			String(std::string("F2: Animals On").c_str(), 10, 5, D3DCOLOR_XRGB(0, 255, 0), false, "small");
		else
			String(std::string("F2: Animals Off").c_str(), 10, 5, D3DCOLOR_XRGB(255, 0, 0), false, "small");

		if (Vars.ESP.Player.bActive)
			String(std::string("F3: Players On").c_str(), 110, 5, D3DCOLOR_XRGB(0, 255, 0), false, "small");
		else
			String(std::string("F3: Players Off").c_str(), 110, 5, D3DCOLOR_XRGB(255, 0, 0), false, "small");

		if (Vars.ESP.Ships.bActive)
			String(std::string("F4: Ships On").c_str(), 210, 5, D3DCOLOR_XRGB(0, 255, 0), false, "small");
		else
			String(std::string("F4: Ships Off").c_str(), 210, 5, D3DCOLOR_XRGB(255, 0, 0), false, "small");

		if (Vars.ESP.Treasure.bActive)
			String(std::string("F5: Treasure On").c_str(), 310, 5, D3DCOLOR_XRGB(0, 255, 0), false, "small");
		else
			String(std::string("F5: Treasure Off").c_str(), 310, 5, D3DCOLOR_XRGB(255, 0, 0), false, "small");
	}

	Line(Process->Size[0]/2 - 4, Process->Size[1]/2, Process->Size[0]/2 + 5, Process->Size[1]/2, D3DCOLOR_XRGB(0, 255, 0));
	Line(Process->Size[0]/2, Process->Size[1]/2-4, Process->Size[0]/2, Process->Size[1]/2+5, D3DCOLOR_XRGB(0, 255, 0));

	if (Menu->menuOpen)
		DrawScoreBoard(30, 100, Cheat->Crews);

	Menu->DrawMenu();
}
