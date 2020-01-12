#include "GameTracker.h"

GameTracker::GameTracker()
{
	CtrlLayout(*this, "Window title");
}

GUI_APP_MAIN
{
	GameTracker().Run();
}
