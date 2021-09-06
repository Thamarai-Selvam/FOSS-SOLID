#pragma once
#include "IVideoData.h"

class IVideoAlgo
{
public:
	virtual IVideoData getVideoData() = 0;
protected:
	IVideoData myVideoData;
};

