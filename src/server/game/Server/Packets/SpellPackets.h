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

#ifndef SpellPackets_h__
#define SpellPackets_h__

#include "Packet.h"
#include "ObjectGuid.h"
#include "Optional.h"
#include "Position.h"
#include "SharedDefines.h"

namespace WorldPackets
{
    namespace Spells
    {
        
        class ClearTarget final : public ServerPacket
        {
        public:
            ClearTarget() : ServerPacket(SMSG_CLEAR_TARGET, 8) { }

            WorldPacket const* Write() override;

            ObjectGuid Guid;
        };


    }
}

#endif // SpellPackets_h__
