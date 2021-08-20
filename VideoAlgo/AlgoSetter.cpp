#include "pch.h"
#include "AlgoSetter.h"

int AlgoSetter::getPixels()
{
    switch (m_vQual) {
        case VideoQuality::m_SD:
            return 480;
        case VideoQuality::m_HD:
            return 720;
        case VideoQuality::m_FHD:
            return 1080;
        case VideoQuality::m_2K:
            return 1152;
        case VideoQuality::m_UHD:
            return 2160;
        case VideoQuality::m_4K:
            return 4096;
        default:
            return 0;
    }
}
