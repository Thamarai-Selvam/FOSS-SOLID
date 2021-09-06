#pragma once
#include "IVideoAlgo.h"

class HDVideoAlgo : public IVideoAlgo
{
public:
	HDVideoAlgo();
	~HDVideoAlgo();
	// Inherited via IVideoAlgo
	virtual IVideoData getVideoData() override;
};


