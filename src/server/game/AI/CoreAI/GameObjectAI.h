/*
* This file is part of the Pandaria 5.4.8 Project. See THANKS file for Copyright information
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TRINITY_GAMEOBJECTAI_H
#define TRINITY_GAMEOBJECTAI_H

#include "Define.h"
#include <list>
#include "Object.h"
#include "GameObject.h"
#include "CreatureAI.h"

class TC_GAME_API GameObjectAI
{
    protected:
        GameObject* const me;

    public:
        explicit GameObjectAI(GameObject* go) : me(go) { }
        virtual ~GameObjectAI() { }

        virtual void UpdateAI(uint32 /*diff*/) { }

        virtual void InitializeAI() { Reset(); }

        virtual void Reset() { }

        // Pass parameters between AI
        virtual void DoAction(int32 /*param = 0 */) { }
        virtual void SetGUID(uint64 /*guid*/, int32 /*id = 0 */) { }
        virtual uint64 GetGUID(int32 /*id = 0 */) const { return 0; }

        static int Permissible(GameObject const* go);

        virtual bool OnGossipHello(Player* /*player*/, bool /*isUse*/) { return false; }
        virtual bool OnReportUse(Player* /*player*/) { return false; }
        virtual bool OnGossipSelect(Player* /*player*/, uint32 /*sender*/, uint32 /*action*/) { return false; }
        virtual bool OnGossipSelectCode(Player* /*player*/, uint32 /*sender*/, uint32 /*action*/, char const* /*code*/) { return false; }
        virtual bool OnQuestAccept(Player* /*player*/, Quest const* /*quest*/) { return false; }
        virtual bool OnQuestReward(Player* /*player*/, Quest const* /*quest*/, uint32 /*opt*/) { return false; }
        virtual Optional<QuestGiverStatus> GetDialogStatus(Player* /*player*/) { return {}; }
        virtual void Destroyed(Player* /*player*/, uint32 /*eventId*/) { }
        virtual uint32 GetData(uint32 /*id*/) const { return 0; }
        virtual void SetData64(uint32 /*id*/, uint64 /*value*/) { }
        virtual uint64 GetData64(uint32 /*id*/) const { return 0; }
        virtual void SetData(uint32 /*id*/, uint32 /*value*/) { }
        virtual void OnGameEvent(bool /*start*/, uint16 /*eventId*/) { }
        virtual void OnStateChanged(uint32 /*state*/, Unit* /*unit*/) { }
        virtual void EventInform(uint32 /*eventId*/) { }
};

class TC_GAME_API NullGameObjectAI : public GameObjectAI
{
    public:
        explicit NullGameObjectAI(GameObject* g);

        void UpdateAI(uint32 /*diff*/) { }

        static int Permissible(GameObject const* /*go*/) { return PERMIT_BASE_IDLE; }
};
#endif
