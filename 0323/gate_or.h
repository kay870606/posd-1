#pragma once

#include "device.h"

class GateOR :public Device
{
public:
	int getOutput() {
		for (int i; i < iPins.size; i++) {
			if (iPins[i]->getOutput == 1)
				return 1;
		}
		return 0;
	}
};