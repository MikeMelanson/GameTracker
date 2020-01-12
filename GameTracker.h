#ifndef _GameTracker_GameTracker_h
#define _GameTracker_GameTracker_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <GameTracker/GameTracker.lay>
#include <CtrlCore/lay.h>

class GameTracker : public WithGameTrackerLayout<TopWindow> {
public:
	typedef GameTracker CLASSNAME;
	GameTracker();
};

#endif
