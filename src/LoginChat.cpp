/**
    This plugin can be used for common player customizations
 */

#include "ScriptMgr.h"
#include "Player.h"
#include "Configuration/Config.h"
#include "ChannelMgr.h"
#include "Chat.h"
#include "Unit.h"
#include "SpellScript.h"

class LoginChat : public PlayerScript{
public:

    LoginChat() : PlayerScript("LoginChat") { }

    void OnLogin(Player* player) override {
		uint8 gender = player->getGender();
		switch (gender)
		{
			case GENDER_FEMALE:
				if(player->HasAura(68996))
				{
					player->SetDisplayId(19723);
				}
				if(player->HasAura(68992))
				{
					player->SetDisplayId(2231);
				}
			break;
			case GENDER_MALE:
				if(player->HasAura(68996))
				{
					player->SetDisplayId(2231);
				}
				if(player->HasAura(68992))
				{
					player->SetDisplayId(2243);
				}
			break;
		}
    }
};

void AddLoginChatScripts() {
    new LoginChat();
}

