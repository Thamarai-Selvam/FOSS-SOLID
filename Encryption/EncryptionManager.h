#pragma once
#include <string>
#include "FileManager.h"
#include "DatabaseManager.h"
class EncryptionManager
{
public:
	EncryptionManager();
	~EncryptionManager();
	void encrypt(DatabaseManager* fmPtr);
	std::string getEncryptedData();

private:

};

