#pragma once
#include "IVideoAlgo.h"

class SDVideoAlgo : public IVideoAlgo
{
public:
	SDVideoAlgo();
	~SDVideoAlgo();
	// Inherited via IVideoAlgo
	virtual IVideoData getVideoData() override;
};
