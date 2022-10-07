#pragma once

#include <string>
//=========================Versioning=========================
// X.Y.Z-STR:
// X:                major release identifier
// Y:                minor release identifier
// Z:                patch identifier
// STR:              one of the strings below
//
// developerpreview: early builds, not functional
// alpha:            pre-beta builds, somehow functional
// beta:             unstable public builds, more likely to
//                   be functional, many bugs might appear
// rc:               release candidate, preview version
// stable:           full release
//============================================================
std::string SL_VERSION = "0.1-developerpreview";
std::string SL_LOADER_REPO = "https://github.com/tomeczeklmaodev/toasterscriptloader/";
std::string SL_SCRIPT_SRC = "tomeczeklmaodev/scripts/";