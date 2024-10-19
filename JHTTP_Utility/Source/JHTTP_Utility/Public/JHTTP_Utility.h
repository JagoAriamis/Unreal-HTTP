// Copyright 2024 James Law-Foon. All rights reserved

#pragma once

#include "Modules/ModuleManager.h"

class FJHTTP_UtilityModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
