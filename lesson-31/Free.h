#pragma once
#include "Soft.h"
class Free : public Soft
{
public:
	Free();
	Free(string name, string company);

	void showInfo()const override;

	bool isAvaible()const override;
};

