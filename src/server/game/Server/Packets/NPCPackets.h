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

#ifndef NPCPackets_h__
#define NPCPackets_h__

#include "Packet.h"
#include "ObjectGuid.h"

namespace WorldPackets
{
    namespace NPC
    {
        class BankerActivate final : public ClientPacket
        {
        public:
            BankerActivate(WorldPacket&& packet) : ClientPacket(CMSG_BANKER_ACTIVATE, std::move(packet)) { }

            void Read() override;

            ObjectGuid Unit;
        };

        class BinderActivate final : public ClientPacket
        {
        public:
            BinderActivate(WorldPacket&& packet) : ClientPacket(CMSG_BINDER_ACTIVATE, std::move(packet)) { }

            void Read() override;

            ObjectGuid Unit;
        };

        class GossipHello final : public ClientPacket
        {
        public:
            GossipHello(WorldPacket&& packet) : ClientPacket(CMSG_GOSSIP_HELLO, std::move(packet)) { }

            void Read() override;

            ObjectGuid Unit;
        };

        class ListInventory final : public ClientPacket
        {
        public:
            ListInventory(WorldPacket&& packet) : ClientPacket(CMSG_LIST_INVENTORY, std::move(packet)) { }

            void Read() override;

            ObjectGuid Unit;
        };

        class TrainerList final : public ClientPacket
        {
        public:
            TrainerList(WorldPacket&& packet) : ClientPacket(CMSG_TRAINER_LIST, std::move(packet)) { }

            void Read() override;

            ObjectGuid Unit;
        };

        class TrainerBuySpell final : public ClientPacket
        {
        public:
            TrainerBuySpell(WorldPacket&& packet) : ClientPacket(CMSG_TRAINER_BUY_SPELL, std::move(packet)) { }

            void Read() override;

            uint32 SpellID = 0;
            uint32 TrainerID = 0;
            ObjectGuid TrainerGUID;
        };
    }
}

#endif // NPCPackets_h__
