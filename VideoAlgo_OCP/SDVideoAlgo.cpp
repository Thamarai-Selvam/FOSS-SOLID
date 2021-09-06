#include "SDVideoAlgo.h"

SDVideoAlgo::SDVideoAlgo()
{
    myVideoData = { "640 x 480", "480p", "4:3" };
}

SDVideoAlgo::~SDVideoAlgo()
{
  
}

IVideoData SDVideoAlgo::getVideoData()
{
    return myVideoData;
}
