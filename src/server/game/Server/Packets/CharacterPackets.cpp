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

#include "CharacterPackets.h"

void WorldPackets::Character::ShowingCloak::Read()
{
    _worldPacket >> ShowCloak;
}

void WorldPackets::Character::ShowingHelm::Read()
{
    _worldPacket >> ShowHelm;
}

void WorldPackets::Character::PlayerLogin::Read()
{
    _worldPacket >> FarClip;
    
    Guid[1] = _worldPacket.ReadBit();
    Guid[4] = _worldPacket.ReadBit();
    Guid[7] = _worldPacket.ReadBit();
    Guid[3] = _worldPacket.ReadBit();
    Guid[2] = _worldPacket.ReadBit();
    Guid[6] = _worldPacket.ReadBit();
    Guid[5] = _worldPacket.ReadBit();
    Guid[0] = _worldPacket.ReadBit();

    _worldPacket.ReadByteSeq(Guid[5]);
    _worldPacket.ReadByteSeq(Guid[1]);
    _worldPacket.ReadByteSeq(Guid[0]);
    _worldPacket.ReadByteSeq(Guid[6]);
    _worldPacket.ReadByteSeq(Guid[2]);
    _worldPacket.ReadByteSeq(Guid[4]);
    _worldPacket.ReadByteSeq(Guid[7]);
    _worldPacket.ReadByteSeq(Guid[3]);
}

void WorldPackets::Character::CreateCharacter::Read()
{
    _worldPacket >> OutfitId >> HairStyle >> Class >> Skin;
    _worldPacket >> Face >> Race >> FacialHair >> Gender >> HairColor;

    uint32 nameLength = _worldPacket.ReadBits(6);
    uint8 unk = _worldPacket.ReadBit();
    Name = _worldPacket.ReadString(nameLength);
    if (unk)
        _worldPacket.read_skip<uint32>();

    Data = _worldPacket;
}

void WorldPackets::Character::CharDelete::Read()
{
    Guid[1] = _worldPacket.ReadBit();
    Guid[3] = _worldPacket.ReadBit();
    Guid[2] = _worldPacket.ReadBit();
    Guid[7] = _worldPacket.ReadBit();
    Guid[4] = _worldPacket.ReadBit();
    Guid[6] = _worldPacket.ReadBit();
    Guid[0] = _worldPacket.ReadBit();
    Guid[5] = _worldPacket.ReadBit();

    _worldPacket.ReadByteSeq(Guid[7]);
    _worldPacket.ReadByteSeq(Guid[1]);
    _worldPacket.ReadByteSeq(Guid[6]);
    _worldPacket.ReadByteSeq(Guid[0]);
    _worldPacket.ReadByteSeq(Guid[3]);
    _worldPacket.ReadByteSeq(Guid[4]);
    _worldPacket.ReadByteSeq(Guid[2]);
    _worldPacket.ReadByteSeq(Guid[5]);
}

void WorldPackets::Character::LoadScreen::Read()
{
    _worldPacket.read<uint32>();
    _worldPacket.ReadBit();
}

void WorldPackets::Character::SetFactionAtWar::Read()
{
    _worldPacket >> FactionIndexId;
}

void WorldPackets::Character::SetFactionNotAtWar::Read()
{
    _worldPacket >> FactionIndexId;
}

void WorldPackets::Character::TutorialSetFlag::Read()
{
    _worldPacket >> Data;
}

void WorldPackets::Character::SetWatchedFaction::Read()
{
    _worldPacket >> Faction;
}

void WorldPackets::Character::SetFactionInactive::Read()
{
    _worldPacket >> FactionIndex >> Status;
}

void WorldPackets::Character::CharacterRenameRequest::Read()
{
    Guid[6] = _worldPacket.ReadBit();
    Guid[3] = _worldPacket.ReadBit();
    Guid[0] = _worldPacket.ReadBit();
    uint32 nameLen = _worldPacket.ReadBits(6);
    Guid[1] = _worldPacket.ReadBit();
    Guid[5] = _worldPacket.ReadBit();
    Guid[7] = _worldPacket.ReadBit();
    Guid[2] = _worldPacket.ReadBit();
    Guid[4] = _worldPacket.ReadBit();

    _worldPacket.ReadByteSeq(Guid[1]);
    _worldPacket.ReadByteSeq(Guid[6]);
    _worldPacket.ReadByteSeq(Guid[5]);
    Name = _worldPacket.ReadString(nameLen);
    _worldPacket.ReadByteSeq(Guid[2]);
    _worldPacket.ReadByteSeq(Guid[4]);
    _worldPacket.ReadByteSeq(Guid[3]);
    _worldPacket.ReadByteSeq(Guid[7]);
    _worldPacket.ReadByteSeq(Guid[0]);
}

void WorldPackets::Character::AlterAppearance::Read()
{
    _worldPacket >> SkinColor >> Color >> Hair >> FacialHair;
}

void WorldPackets::Character::CharCustomize::Read()
{
    _worldPacket >> HairStyle >> Gender >> Skin >> FacialHair >> Face >> HairColor;
    Guid[2] = _worldPacket.ReadBit();
    Guid[6] = _worldPacket.ReadBit();
    Guid[1] = _worldPacket.ReadBit();
    Guid[0] = _worldPacket.ReadBit();
    Guid[7] = _worldPacket.ReadBit();
    Guid[5] = _worldPacket.ReadBit();
    uint32 nameLen = _worldPacket.ReadBits(6);
    Guid[4] = _worldPacket.ReadBit();
    Guid[3] = _worldPacket.ReadBit();
    _worldPacket.ReadByteSeq(Guid[4]);
    Name = _worldPacket.ReadString(nameLen);
    _worldPacket.ReadByteSeq(Guid[0]);
    _worldPacket.ReadByteSeq(Guid[2]);
    _worldPacket.ReadByteSeq(Guid[6]);
    _worldPacket.ReadByteSeq(Guid[5]);
    _worldPacket.ReadByteSeq(Guid[3]);
    _worldPacket.ReadByteSeq(Guid[1]);
    _worldPacket.ReadByteSeq(Guid[7]);
}

WorldPacket const* WorldPackets::Character::LogoutResponse::Write()
{
    _worldPacket << uint32(LogoutResult);
    _worldPacket << uint8(Instant);
    return &_worldPacket;
}

