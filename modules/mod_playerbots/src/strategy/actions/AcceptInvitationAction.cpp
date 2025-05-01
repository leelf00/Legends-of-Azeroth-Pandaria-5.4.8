#include "AcceptInvitationAction.h"

#include "Event.h"
#include "ObjectAccessor.h"
#include "PlayerbotAIConfig.h"
#include "Playerbots.h"
#include "WorldPacket.h"

AcceptInvitationAction::AcceptInvitationAction(PlayerbotAI* botAI, const std::string name)
    : Action(botAI, name)
{
}

bool AcceptInvitationAction::Execute(Event event)
{
    Group* grp = bot->GetGroupInvite();
    if (!grp)
        return false;

    WorldPacket packet = event.getPacket();
    uint8 unknown1, unknown2, unknown3;
    uint8 inviter_name_len;
    std::string inviterName;

    packet >> unknown1 >> unknown2;
    packet >> inviter_name_len;
    packet.read_skip(27);
    inviterName = packet.ReadString((uint32)inviter_name_len);

    Player* inviter = ObjectAccessor::FindPlayerByName(inviterName);
    if (!inviter)
    {
        return false;
    }

    /*if (!botAI->GetSecurity()->CheckLevelFor(PLAYERBOT_SECURITY_INVITE, false, inviter))
    {
        WorldPacket data(SMSG_GROUP_DECLINE, 10);
        data << bot->GetName();
        inviter->SendDirectMessage(&data);
        bot->UninviteFromGroup();
        return false;
    }*/

    WorldPacket p;
    uint8 unk = 0;
    p << unk;
    p.WriteBit(true);
    p.WriteBit(true);
    p.FlushBits();
    bot->GetSession()->HandleGroupInviteResponseOpcode(p);

    if (sRandomPlayerbotMgr->IsRandomBot(bot))
        botAI->SetMaster(inviter);

    botAI->ResetStrategies();
    botAI->ChangeStrategy("+follow,-lfg,-bg", BOT_STATE_NON_COMBAT);
    botAI->Reset();

    if (bot->GetDistance(inviter) > sPlayerbotAIConfig->sightDistance)
    {
        //Teleport(inviter, bot);
    }
    return true;
}
