#pragma once

#include "pch.h"
#include <SimpleIni.h>

static CSimpleIni ini;

namespace util {
	VOID LoadConfig();
	static const char* ClientVersion;
	static const char* ConfigChannel;
	static const char* ConfigBaseUrl;
	static const char* PublicRSAKey;
	static const char* PrivateRSAKey;
	const char* GetConfigChannel();
	const char* GetConfigBaseUrl();
	const char* GetPublicRSAKey();
	const char* GetPrivateRSAKey();
	bool GetEnableValue(const char* a_pKey, bool a_pDefault);
	long GetOffsetValue(const char* a_pKey, long a_pDefault);
	VOID SaveConfig();
	VOID InitConsole();
	VOID DisableLogReport();
	VOID DisableVMProtect();
	VOID Dump(VOID* ptr, int buflen);
	VOID HexDump(VOID* ptr, int buflen);
	std::string ConvertToString(VOID* ptr);
}
