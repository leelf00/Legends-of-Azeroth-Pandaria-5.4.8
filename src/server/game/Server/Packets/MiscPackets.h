/*
* This file is part of the Legends of Azeroth Pandaria Project. See THANKS file for Copyright information
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

#ifndef MiscPackets_h__
#define MiscPackets_h__

#include "Packet.h"
#include <array>

namespace WorldPackets
{
    namespace Misc
    {
        class StartMirrorTimer final : public ServerPacket
        {
        public:
            StartMirrorTimer() : ServerPacket(SMSG_START_MIRROR_TIMER, 21) { }
            StartMirrorTimer(uint32 timer, uint32 value, uint32 maxValue, int32 scale, bool paused, uint32 spellID) :
                ServerPacket(SMSG_START_MIRROR_TIMER, 21), Timer(timer), Value(value), MaxValue(maxValue), Scale(scale), Paused(paused), SpellID(spellID) { }

            WorldPacket const* Write() override;

            uint32 Timer = 0;
            uint32 Value = 0;
            uint32 MaxValue = 0;
            int32 Scale = 0;
            bool Paused = false;
            uint32 SpellID = 0;
        };

        class StopMirrorTimer final : public ServerPacket
        {
        public:
            StopMirrorTimer() : ServerPacket(SMSG_STOP_MIRROR_TIMER, 4) { }
            StopMirrorTimer(uint32 timer) : ServerPacket(SMSG_STOP_MIRROR_TIMER, 4), Timer(timer) { }

            WorldPacket const* Write() override;

            uint32 Timer = 0;
        };

        class Dismount final : public ServerPacket
        {
        public:
            Dismount() : ServerPacket(SMSG_DISMOUNT, 8) { }

            WorldPacket const* Write() override;

            ObjectGuid Guid;
        };

        class CorpseReclaimDelay : public ServerPacket
        {
        public:
            CorpseReclaimDelay() : ServerPacket(SMSG_CORPSE_RECLAIM_DELAY, 4) { }

            WorldPacket const* Write() override;

            uint32 Remaining = 0;
        };

        class FarSight final : public ClientPacket
        {
        public:
            FarSight(WorldPacket&& packet) : ClientPacket(CMSG_FAR_SIGHT, std::move(packet)) { }

            void Read() override;

            bool Enable = false;
        };
    }
}

#endif // MiscPackets_h__
