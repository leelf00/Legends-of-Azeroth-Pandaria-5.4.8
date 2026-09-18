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

#include "InspectPackets.h"

void WorldPackets::Inspect::Inspect::Read()
{
    Target[0] = _worldPacket.ReadBit();
    Target[3] = _worldPacket.ReadBit();
    Target[7] = _worldPacket.ReadBit();
    Target[2] = _worldPacket.ReadBit();
    Target[5] = _worldPacket.ReadBit();
    Target[1] = _worldPacket.ReadBit();
    Target[4] = _worldPacket.ReadBit();
    Target[6] = _worldPacket.ReadBit();
    _worldPacket.ReadByteSeq(Target[3]);
    _worldPacket.ReadByteSeq(Target[5]);
    _worldPacket.ReadByteSeq(Target[2]);
    _worldPacket.ReadByteSeq(Target[4]);
    _worldPacket.ReadByteSeq(Target[1]);
    _worldPacket.ReadByteSeq(Target[6]);
    _worldPacket.ReadByteSeq(Target[0]);
    _worldPacket.ReadByteSeq(Target[7]);
}
