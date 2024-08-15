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

#include "MiscPackets.h"

WorldPacket const* WorldPackets::Misc::StartMirrorTimer::Write()
{
    _worldPacket << MaxValue;
    _worldPacket << uint32(SpellID); // spell id
    _worldPacket << uint32(Timer);
    _worldPacket << Scale;
    _worldPacket << Value;
    _worldPacket << uint8(Paused);

    return &_worldPacket;
}

WorldPacket const* WorldPackets::Misc::StopMirrorTimer::Write()
{
    _worldPacket << uint32(Timer);

    return &_worldPacket;
}

WorldPacket const* WorldPackets::Misc::CorpseReclaimDelay::Write()
{
    _worldPacket.WriteBit(Remaining == 0);

    if (Remaining)
        _worldPacket << uint32(Remaining);

    return &_worldPacket;
}

WorldPacket const* WorldPackets::Misc::Dismount::Write()
{
    _worldPacket.WriteBit(Guid [6]);
    _worldPacket.WriteBit(Guid [3]);
    _worldPacket.WriteBit(Guid [0]);
    _worldPacket.WriteBit(Guid [7]);
    _worldPacket.WriteBit(Guid [1]);
    _worldPacket.WriteBit(Guid [2]);
    _worldPacket.WriteBit(Guid [5]);
    _worldPacket.WriteBit(Guid [4]);

    _worldPacket.WriteByteSeq(Guid [3]);
    _worldPacket.WriteByteSeq(Guid [6]);
    _worldPacket.WriteByteSeq(Guid [7]);
    _worldPacket.WriteByteSeq(Guid [5]);
    _worldPacket.WriteByteSeq(Guid [1]);
    _worldPacket.WriteByteSeq(Guid [4]);
    _worldPacket.WriteByteSeq(Guid [2]);
    _worldPacket.WriteByteSeq(Guid [0]);
    return &_worldPacket;
}

void WorldPackets::Misc::FarSight::Read()
{
    Enable = _worldPacket.ReadBit();
}