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

        class CreateCharacter final : public ClientPacket
        {
        public:
            CreateCharacter(WorldPacket&& packet) : ClientPacket(CMSG_CHAR_CREATE, std::move(packet)) { }

            void Read() override;

            uint8 OutfitId = 0;
            uint8 HairStyle = 0;
            uint8 Class = 0;
            uint8 Skin = 0;
            uint8 Face = 0;
            uint8 Race = 0;
            uint8 FacialHair = 0;
            uint8 Gender = 0;
            uint8 HairColor = 0;
            std::string Name;
            WorldPacket Data; ///< remaining raw data (rpos at end of known fields) for CharacterCreateInfo
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

        class CharDelete final : public ClientPacket
        {
        public:
            CharDelete(WorldPacket&& packet) : ClientPacket(CMSG_CHAR_DELETE, std::move(packet)) { }

            void Read() override;

            ObjectGuid Guid;
        };

        class LoadScreen final : public ClientPacket
        {
        public:
            LoadScreen(WorldPacket&& packet) : ClientPacket(CMSG_LOAD_SCREEN, std::move(packet)) { }

            void Read() override;
        };

        class SetFactionAtWar final : public ClientPacket
        {
        public:
            SetFactionAtWar(WorldPacket&& packet) : ClientPacket(CMSG_SET_FACTION_ATWAR, std::move(packet)) { }

            void Read() override;

            uint8 FactionIndexId = 0;
        };

        class SetFactionNotAtWar final : public ClientPacket
        {
        public:
            SetFactionNotAtWar(WorldPacket&& packet) : ClientPacket(CMSG_SET_FACTION_NOTATWAR, std::move(packet)) { }

            void Read() override;

            uint8 FactionIndexId = 0;
        };

        class TutorialSetFlag final : public ClientPacket
        {
        public:
            TutorialSetFlag(WorldPacket&& packet) : ClientPacket(CMSG_TUTORIAL_FLAG, std::move(packet)) { }

            void Read() override;

            uint32 Data = 0;
        };

        class TutorialClear final : public ClientPacket
        {
        public:
            TutorialClear(WorldPacket&& packet) : ClientPacket(CMSG_TUTORIAL_CLEAR, std::move(packet)) { }

            void Read() override { }
        };

        class TutorialReset final : public ClientPacket
        {
        public:
            TutorialReset(WorldPacket&& packet) : ClientPacket(CMSG_TUTORIAL_RESET, std::move(packet)) { }

            void Read() override { }
        };

        class SetWatchedFaction final : public ClientPacket
        {
        public:
            SetWatchedFaction(WorldPacket&& packet) : ClientPacket(CMSG_SET_WATCHED_FACTION, std::move(packet)) { }

            void Read() override;

            uint32 Faction = 0;
        };

        class SetFactionInactive final : public ClientPacket
        {
        public:
            SetFactionInactive(WorldPacket&& packet) : ClientPacket(CMSG_SET_FACTION_INACTIVE, std::move(packet)) { }

            void Read() override;

            uint32 FactionIndex = 0;
            uint8 Status = 0;
        };

        class RequestForcedReactions final : public ClientPacket
        {
        public:
            RequestForcedReactions(WorldPacket&& packet) : ClientPacket(CMSG_REQUEST_FORCED_REACTIONS, std::move(packet)) { }

            void Read() override { }
        };

        class CharacterRenameRequest final : public ClientPacket
        {
        public:
            CharacterRenameRequest(WorldPacket&& packet) : ClientPacket(CMSG_CHAR_RENAME, std::move(packet)) { }

            void Read() override;

            ObjectGuid Guid;
            std::string Name;
        };

        class AlterAppearance final : public ClientPacket
        {
        public:
            AlterAppearance(WorldPacket&& packet) : ClientPacket(CMSG_ALTER_APPEARANCE, std::move(packet)) { }

            void Read() override;

            uint32 SkinColor = 0;
            uint32 Color = 0;
            uint32 Hair = 0;
            uint32 FacialHair = 0;
        };

        class CharCustomize final : public ClientPacket
        {
        public:
            CharCustomize(WorldPacket&& packet) : ClientPacket(CMSG_CHAR_CUSTOMIZE, std::move(packet)) { }

            void Read() override;

            uint8 HairStyle = 0;
            uint8 Gender = 0;
            uint8 Skin = 0;
            uint8 FacialHair = 0;
            uint8 Face = 0;
            uint8 HairColor = 0;
            ObjectGuid Guid;
            std::string Name;
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
