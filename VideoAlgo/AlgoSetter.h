#pragma once
#include "eAlgo.h"
#include <iostream>
class AlgoSetter
{
public:
	AlgoSetter(VideoQuality::e_Quality vQual) : m_vQual(vQual) {}
	VideoQuality::VideoData getPixels();
private:
	VideoQuality::e_Quality m_vQual;
};

