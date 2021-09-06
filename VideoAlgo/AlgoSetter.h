#pragma once
#include "eAlgo.h"
#include <iostream>
class AlgoSetter
{
public:
	AlgoSetter(VideoQuality::e_Quality vQual) : m_vQual(vQual) {}
	VideoQuality::VideoData getVideoData();
private:
	VideoQuality::e_Quality m_vQual;
};

