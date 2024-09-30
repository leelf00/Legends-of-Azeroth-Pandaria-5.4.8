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

#ifndef CharacterPackets_h__
#define CharacterPackets_h__

#include "Packet.h"
#include "Position.h"

namespace WorldPackets
{
    namespace Character
    {
        class EnumCharacters final : public ClientPacket
        {
        public:
            EnumCharacters(WorldPacket&& packet) : ClientPacket(CMSG_ENUM_CHARACTERS, std::move(packet)) { }

            void Read() override { }
        };
        
        class ShowingCloak final : public ClientPacket
        {
        public:
            ShowingCloak(WorldPacket&& packet) : ClientPacket(CMSG_SHOWING_CLOAK, std::move(packet)) { }

            void Read() override;

            bool ShowCloak = false;
        };

        class ShowingHelm final : public ClientPacket
        {
        public:
            ShowingHelm(WorldPacket&& packet) : ClientPacket(CMSG_SHOWING_HELM, std::move(packet)) { }

            void Read() override;

            bool ShowHelm = false;
        };

        class PlayerLogin final : public ClientPacket
        {
        public:
            PlayerLogin(WorldPacket&& packet) : ClientPacket(CMSG_PLAYER_LOGIN, std::move(packet)) { }

            void Read() override;

            ObjectGuid Guid;      ///< Guid of the player that is logging in
            float FarClip = 0.0f; ///< Visibility distance (for terrain)
        };

        class LogoutResponse final : public ServerPacket
        {
        public:
            LogoutResponse() : ServerPacket(SMSG_LOGOUT_RESPONSE, 4 + 1) { }

            WorldPacket const* Write() override;

            uint32 LogoutResult = 0;
            bool Instant = false;
        };


    }
}

#endif // CharacterPackets_h__
