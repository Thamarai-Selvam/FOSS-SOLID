#include "HDVideoAlgo.h"

HDVideoAlgo::HDVideoAlgo()
{
	myVideoData = { "1280 x 720", "720p", "16:9" };
}

HDVideoAlgo::~HDVideoAlgo()
{
}

IVideoData HDVideoAlgo::getVideoData()
{
	return myVideoData;
}
