#include <stdafx.h>

static void OnStart()
{
	int count = 5;

	for (Vehicle veh : GetAllVehs())
	{
		for (int i = 0; i < 6; i++)
		{
			SET_VEHICLE_DOOR_BROKEN(veh, i, false);
		}

		if (--count == 0)
		{
			count = 5;

			WAIT(0);
		}
	}
}

static RegisterEffect registerEffect(EFFECT_BREAK_VEH_DOORS, OnStart);