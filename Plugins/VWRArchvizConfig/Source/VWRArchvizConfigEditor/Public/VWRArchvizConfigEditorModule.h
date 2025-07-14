#pragma once

#include "Modules/ModuleManager.h"

class FVWRArchvizConfigEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
