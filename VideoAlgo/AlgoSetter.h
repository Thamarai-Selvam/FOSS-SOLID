#pragma once
#include "eAlgo.h"
class AlgoSetter
{
public:
	AlgoSetter(VideoQuality vQual) : m_vQual(vQual) {}
	int getPixels();
private:
	VideoQuality m_vQual;
};

