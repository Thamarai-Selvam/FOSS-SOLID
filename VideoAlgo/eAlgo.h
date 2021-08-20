#pragma once
#include <string>
using namespace std;

struct VideoQuality {
	enum class e_Quality { m_SD, m_HD, m_FHD, m_2K, m_UHD, m_4K };

	typedef struct {
		string Quality;
		string OtherNames;
		string AspectRatio;
	}VideoData;

};

static VideoQuality::VideoData m_SD = { "640 x 480",	"480p",	 "4:3" };
//static VideoQuality::VideoData m_HD = { "1280 x 720",	"720p",	 "16:9" };
//static VideoQuality::VideoData m_FHD = { "1920 x 1080",	"1080p", "16:9" };
//static VideoQuality::VideoData m_2K = { "2048 x 1152",	"2k",	 "1:1.77" };
//static VideoQuality::VideoData m_UHD = { "3840 x 2160",	"2160p", "16:9" };
//static VideoQuality::VideoData m_4K = { "4096 x 2160",	"4k",	 "1:1.9" };

struct Quality {
	string m_SD = "640 x 480";
	string m_HD = "1280 x 720";
	string m_FHD = "1920 x 1080";
	string m_2K = "2048 x 1152";
	string m_UHD = "3840 x 2160";
	string m_4K = "4096 x 2160";
}static vQuality;

struct OtherNames {
	string m_SD = "480p";
	string m_HD = "720p";
	string m_FHD = "1080p";
	string m_2K = "2k";
	string m_UHD = "2160p";
	string m_4K = "4k";
}static vOtherNames;

struct AspectRatio {
	string m_SD = "4:3";
	string m_HD = "16:9";
	string m_FHD = "16:9";
	string m_2K = "1:1.77";
	string m_UHD = "16:9";
	string m_4K = "1:1.9";
}static vAspectRatio;