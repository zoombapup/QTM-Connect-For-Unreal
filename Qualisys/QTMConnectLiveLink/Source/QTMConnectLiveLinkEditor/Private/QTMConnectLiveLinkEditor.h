// QTM Connect For Unreal. Copyright 2018-2019 Qualisys
//
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FQTMConnectLiveLinkEditorModule : public IModuleInterface
{
public:

    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};