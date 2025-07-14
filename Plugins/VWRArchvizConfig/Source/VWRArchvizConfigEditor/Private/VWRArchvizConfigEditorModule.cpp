#include "VWRArchvizConfigEditorModule.h"
#include "ISettingsModule.h"
#include "VWRArchvizConfigSettings.h"

#define LOCTEXT_NAMESPACE "VWRArchvizConfigEditor"

void FVWRArchvizConfigEditorModule::StartupModule()
{
    if (ISettingsModule* Settings = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
    {
        Settings->RegisterSettings(
            "Project",
            "Plugins",
            "VWR Archviz Config",
            LOCTEXT("SettingsName", "VWR Archviz Config"),
            LOCTEXT("SettingsDesc", "Configure default behavior for Archviz Configurator."),
            GetMutableDefault<UVWRArchvizConfigSettings>()
        );
    }
}

void FVWRArchvizConfigEditorModule::ShutdownModule()
{
    if (ISettingsModule* Settings = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
    {
        Settings->UnregisterSettings("Project", "Plugins", "VWR Archviz Config");
    }
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FVWRArchvizConfigEditorModule, VWRArchvizConfigEditor)
