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
	std::string CORE                     = "Valkyrie"; // Core/Loader name
	std::string CORE_LOWER               = "valkyrie"; // Core/Loader name (lowercase)
	std::string CORE_VERSION             = "0.1-dev";
	std::string VERSION                  = "0.1-dev";
	std::string LOADER_REPO              = "https://github.com/tomeczeklmaodev/toasterscriptloader/";
	std::string SCRIPT_SRC               = "tomeczeklmaodev/scripts/"; // This repository does not exist, will be created later
	std::string SCRIPT_EXT               = "vslx"; // File extension for scripts
	bool IS_PREALPHA                     = true;
	bool IS_ALPHA                        = false;
	bool IS_BETA                         = false;
	bool IS_RELEASECANDIDATE             = false;
	bool IS_RTM                          = false;
	std::string PREALPHA_VERSION         = CORE_LOWER + "_" + CORE_VERSION + ":(pre-alpha build)";
	std::string ALPHA_VERSION            = CORE_LOWER + "_" + CORE_VERSION + ":(alpha build)";
	std::string BETA_VERSION             = CORE_LOWER + "_" + CORE_VERSION + ":(beta build)";
	std::string RELEASECANDIDATE_VERSION = CORE_LOWER + "_" + CORE_VERSION + ":(release-candidate build)";
	std::string RTM_VERSION              = CORE_LOWER + "_" + CORE_VERSION + ":(rtm build)";
}