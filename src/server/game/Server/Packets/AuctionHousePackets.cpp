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

#include "AuctionHousePackets.h"

void WorldPackets::AuctionHouse::AuctionReplicateItems::Read()
{
    for (int i=0; i<4; ++i)
        _worldPacket.read<uint32>();

//    _worldPacket >> ChangeNumberGlobal;
//    _worldPacket >> ChangeNumberCursor;
//    _worldPacket >> ChangeNumberTombstone;
//    _worldPacket >> Count;

    Auctioneer[6] = _worldPacket.ReadBit();
    Auctioneer[0] = _worldPacket.ReadBit();
    Auctioneer[1] = _worldPacket.ReadBit();
    Auctioneer[5] = _worldPacket.ReadBit();
    Auctioneer[3] = _worldPacket.ReadBit();
    Auctioneer[2] = _worldPacket.ReadBit();
    Auctioneer[4] = _worldPacket.ReadBit();
    Auctioneer[7] = _worldPacket.ReadBit();

    _worldPacket.ReadByteSeq(Auctioneer[7]);
    _worldPacket.ReadByteSeq(Auctioneer[0]);
    _worldPacket.ReadByteSeq(Auctioneer[6]);
    _worldPacket.ReadByteSeq(Auctioneer[4]);
    _worldPacket.ReadByteSeq(Auctioneer[1]);
    _worldPacket.ReadByteSeq(Auctioneer[5]);
    _worldPacket.ReadByteSeq(Auctioneer[3]);
    _worldPacket.ReadByteSeq(Auctioneer[2]);
}
