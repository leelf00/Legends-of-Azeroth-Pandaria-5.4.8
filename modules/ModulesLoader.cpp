#include "Define.h"
#include <vector>
#include <string>

// Includes list
void AddSC_mod_exemple();
void AddSC_mod_playerbots();


#include "ModulesLoader.h"

/// Exposed in script modules to register all scripts to the ScriptMgr.
void AddModulesScripts()
{
    // Modules
        AddSC_mod_exemple();
    AddSC_mod_playerbots();

}
