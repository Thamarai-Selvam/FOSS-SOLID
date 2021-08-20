#pragma once
#include <string>
using namespace std;

struct VideoQuality {
	enum class e_Quality { m_SD, m_HD, m_FHD, m_2K, m_UHD, m_4K };

	struct Quality {
		string m_SD = "640 x 480";
		string m_HD = "1280 x 720";
		string m_FHD = "1920 x 1080";
		string m_2K = "2048 x 1152";
		string m_UHD = "3840 x 2160";
		string m_4K = "4096 x 2160";
	};
	
	struct OtherNames {
		string m_SD = "480p";
		string m_HD = "720p";
		string m_FHD = "1080p";
		string m_2K = "2k";
		string m_UHD = "2160p";
		string m_4K = "4k";
	};

	struct AspectRatio {
		string m_SD = "4:3";
		string m_HD = "16:9";
		string m_FHD = "16:9";
		string m_2K = "1:1.77";
		string m_UHD = "16:9";
		string m_4K = "1:1.9";
	};
};
	
