#pragma once

#include <string>
//=========================Versioning=========================
// These rules apply to SL_VERSION and SL_CORE_VERSION
//
// X.Y.Z-STR:
// X:                major release identifier
// Y:                minor release identifier
// Z:                patch identifier
// STR:              one of the strings below
//
// dev:              early builds, not functional
// alpha:            pre-beta builds, somehow functional
// beta:             unstable public builds, more likely to
//                   be functional, many bugs might appear
// rc:               release candidate, preview version
// stable:           full release
//============================================================
namespace SL_STR
{
	std::string CORE         = "Flashpoint"; // Core/Loader name
	std::string CORE_VERSION = "0.1-dev";
	std::string VERSION      = "0.1-dev";
	std::string LOADER_REPO  = "https://github.com/tomeczeklmaodev/toasterscriptloader/";
	std::string SCRIPT_SRC   = "tomeczeklmaodev/scripts/"; // This repository does not exist, will be created later
	std::string SCRIPT_EXT   = "slx"; // File extension for scripts
} // Why the fuck did I create a namespace for those strings?