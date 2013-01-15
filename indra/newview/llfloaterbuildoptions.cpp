/** 
 * @file llfloaterbuildoptions.cpp
 * @brief LLFloaterBuildOptions class implementation
 *
 * $LicenseInfo:firstyear=2002&license=viewerlgpl$
 * Second Life Viewer Source Code
 * Copyright (C) 2010, Linden Research, Inc.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation;
 * version 2.1 of the License only.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 * 
 * Linden Research, Inc., 945 Battery Street, San Francisco, CA  94111  USA
 * $/LicenseInfo$
 */

/**
 * Panel for setting global object-editing options, specifically
 * grid size and spacing.
 */ 

#include "llviewerprecompiledheaders.h"

#include "llfloaterbuildoptions.h"
#include "lluictrlfactory.h"

// <FS:CR> FIRE-8882
#include "llcombobox.h"
#include "llviewercontrol.h"
// </FS:CR>

//
// Methods
//
LLFloaterBuildOptions::LLFloaterBuildOptions(const LLSD& key)
  : LLFloater(key)
{
}

LLFloaterBuildOptions::~LLFloaterBuildOptions()
{
}

// <FS:CR> FIRE-8882
BOOL LLFloaterBuildOptions::postBuild()
{
	getChild<LLComboBox>("combo_snap_domain")->setValue(gSavedSettings.getBOOL("FSSnapDomain"));
	return TRUE;
}
// </FS:CR>
