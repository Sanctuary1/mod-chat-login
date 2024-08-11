/**
    This plugin can be used for common player customizations
 */

#include "ScriptMgr.h"
#include "Player.h"
#include "Configuration/Config.h"
#include "ChannelMgr.h"
#include "Chat.h"

class LoginChat : public PlayerScript{
public:

    LoginChat() : PlayerScript("LoginChat") { }

    void OnLogin(Player* player) override {
	uint8 gender = player->getGender();
    switch (gender)
    {
		if(player->getRace() == RACE_VRYKUL)
		{
		case GENDER_FEMALE:
			if(!player->HasSpell(87841))
			{
				player->learnSpell(87841);
			}
		break;
		case GENDER_MALE:
			if(!player->HasSpell(87842))
			{
				player->learnSpell(87842);
			}
		break;
		} 
    }
	
    }
};

void AddLoginChatScripts() {
    new LoginChat();
}

