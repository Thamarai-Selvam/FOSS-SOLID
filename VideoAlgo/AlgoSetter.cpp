#include "AlgoSetter.h"

VideoQuality::VideoData AlgoSetter::getVideoData()
{
    switch (m_vQual) {
        case VideoQuality::e_Quality::m_SD:
            return m_SD;
        case VideoQuality::e_Quality::m_HD:
            return VideoQuality::VideoData{ vQuality.m_HD, vOtherNames.m_HD, vAspectRatio.m_HD };
        case VideoQuality::e_Quality::m_FHD:
            return VideoQuality::VideoData{ vQuality.m_FHD, vOtherNames.m_FHD, vAspectRatio.m_FHD };
        case VideoQuality::e_Quality::m_2K:
            return VideoQuality::VideoData{ vQuality.m_2K, vOtherNames.m_2K, vAspectRatio.m_2K };
        case VideoQuality::e_Quality::m_UHD:
            return VideoQuality::VideoData{ vQuality.m_UHD, vOtherNames.m_UHD, vAspectRatio.m_UHD };
        case VideoQuality::e_Quality::m_4K:
            return VideoQuality::VideoData{ vQuality.m_4K, vOtherNames.m_4K, vAspectRatio.m_4K };
        case VideoQuality::e_Quality::m_8K:
            return VideoQuality::VideoData{ vQuality.m_8K, vOtherNames.m_8K, vAspectRatio.m_8K };
        default:
            return VideoQuality::VideoData{"Not Defined", "Not Defined" ,"Not Defined"};
    }
}
