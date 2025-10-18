#include "stdafx.h"
#include "DBAgent.h"
#include "../shared/Ini.h"

//##################################################################################################
//# Merhaba Arkadaþlar Benim Sezer Ýþitme Engelliyim Duymuyorum ve Konuþma Bana Destek Ol Lüften Siz Seviyoruz.  #
//##################################################################################################

// DeaFSoft SendInfoNotice Chat Notice Eklendi 02.01.2025
#pragma region CUser::DeaFSoftSendInfoNotice()
void CUser::DeaFSoftSendInfoNotice()
{
	Packet DeaFSoft; // DeaFSoft Chat Notice Herkes Görebilirisiniz Eklendi 02.01.2025
	std::string Chat_Notice = string_format("#### Hoþgeldiniz Knight of Empire Myko Server Online Hepinize Ýyi Oyunlar. ####");
	DeaFSoft.clear();
	ChatPacket::Construct(&DeaFSoft, ChatType::PUBLIC_CHAT, Chat_Notice.c_str(), "[DEAFSOFT]", GetNation());
	Send(&DeaFSoft);
	//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	Packet DeaFSoft1; // DeaFSoft1 Chat Notice Herkes Görebilirisiniz Eklendi 02.01.2025
	std::string Chat_Notice1 = string_format("#### Guvenliginiz Icin Sifrenizi Kimseyle Paylasmayin Dolandirilmamak Adina Aracilik ile Islem Yapmanizi Oneririz. ####");
	DeaFSoft1.clear();
	ChatPacket::Construct(&DeaFSoft1, ChatType::ALLIANCE_CHAT, Chat_Notice1.c_str(), "[SYSTEM]", GetNation());
	Send(&DeaFSoft1);	
}
#pragma endregion
// DeaFSoft SendInfoNotice Chat Notice Eklendi The End 02.01.2025

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft GmInfoKomutNotice GM&KING Info Komutlar Eklendi 02.01.2025
#pragma region CUser::DeaFSoftGmInfoKomutNotice()
void CUser::DeaFSoftGmInfoKomutNotice()
{
	if (isGM() && g_pMain->GmInfoKomutNotice) // DeaFSoft GM Info Komutlar Eklendi 02.01.2025
	{
		g_pMain->SendHelpDescription(this, string_format("{[GM]} : +help Yazarak GameMaster Komutlarýný Görebilirsiniz."));
	}
	if (isKing() && g_pMain->GmInfoKomutNotice) // DeaFSoft King Info Komutlar Eklendi 02.01.2025
		g_pMain->SendHelpDescription(this, string_format("{[KING]} : +kralhelp Yazarak Kral&Patron Komutlarýný Görebilirsiniz."));
}
#pragma endregion
// DeaFSoft GmInfoKomutNotice GM&KING Info Komutlar Eklendi The End 02.01.2025

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft ServerSettings Ayarlar Eklendi 01.01.2025
#pragma region CGameServerDlg::DeaFSoftServerSettings()
void CGameServerDlg::DeaFSoftServerSettings()
{
	CIni DeaFSoft(CONF_DEAFSOFT); // DeaFSoft Files x64 DeaFSoftSettings.ini Ayarlar Eklendi 01.01.2025 

	// DeaFSoft Clan Create Notice Settings Eklendi 01.01.2025
	ClanCreateMinNationalPoints = DeaFSoft.GetInt("CLAN_CREATE_SETTINGS", "MIN_NP", 1000); // DeaFSoft Yeni Klan Kurabilmek Np Ayarlar
	ClanCreateMinLevel = DeaFSoft.GetInt("CLAN_CREATE_SETTINGS", "MIN_LEVEL", CLAN_LEVEL_REQUIREMENT); // DeaFSoft Yeni Klan Kurabilmek Level Ayarlar
	ClanCreateCoins = DeaFSoft.GetInt("CLAN_CREATE_SETTINGS", "COINS", CLAN_COIN_REQUIREMENT); // DeaFSoft Yeni Klan Kurabilmek Para Ayarlar

	// DeaFSoft Yeni Cz User Pvp Kill Ödül Notice Eklendi. 12.04.2025
	KillGoldGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_GOLD_GÝFT", 250000); // Para : 250,000 Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	KillCashGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_CASH_GÝFT", 25); // Cash : 25 Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	KillÝtemGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_ITEM_GÝFT", 389205000); // Black Gem Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	KillCountGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_COUNT_GÝFT", 1); // Adet : 1 Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	Kill50GoldGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_50GOLD_GÝFT", 500000); // Para : 500,000 Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	Kill50CashGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_50CASH_GÝFT", 50); // Cash : 50 Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	Kill50ÝtemGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_50ITEM_GÝFT", 389199000); // Blue Gem Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	Kill50CountGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_50COUNT_GÝFT", 5); // Adet : 5 Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	Kill500GoldGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_500GOLD_GÝFT", 50000000); // Para : 50,000,000 Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	Kill500CashGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_500CASH_GÝFT", 500); // Cash : 500 Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	Kill500ÝtemGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_500ITEM_GÝFT", 389201000); // Green Gem Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025
	Kill500CountGift = DeaFSoft.GetInt("PVP_KÝLL_GÝFT_SETTINGS", "KÝLL_500COUNT_GÝFT", 10); // Adet : 10 Eklendi. Files x64 DeaFSoftSettings.ini. 12.04.2025

	// DeaFSoft Oyun Rehber Bilgisi Komutlarýný Settings Eklendi 07.01.2025
	UserGameInfoKomutNotice = DeaFSoft.GetBool("USER_GAME_INFO_KOMUT_NOTICE", "STATUS", true); // Files x64 DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

	// DeaFSoft Gm&Kýng Info Komut Settings Eklendi 02.01.2025
	GmInfoKomutNotice = DeaFSoft.GetBool("GM_INFO_KOMUT_NOTICE", "STATUS", true); // Files x64  DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

	// DeaFSoft Auto Online Count Notice Settings Eklendi 01.01.2025
	AutoOnlineCountNotice = DeaFSoft.GetBool("AUTO_ONLINE_COUNT_NOTICE", "STATUS", true); // Files x64  DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

	// DeaFSoft User Login ÝsOnline Notice Settings Eklendi 01.01.2025
	GiriþUserisOnlineNotice = DeaFSoft.GetBool("USER_LOGIN_ISONLINE_NOTICE", "STATUS", true); // Files x64  DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

	// DeaFSoft Giriþ Gate Zone RgB Notice Settings Eklendi 04.01.2025
	GiriþGateZoneNotice = DeaFSoft.GetBool("GIRIS_GATE_ZONE_NOTICE", "STATUS", true); // Files x64  DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

	// DeaFSoft User Login Effect Settings Eklendi 01.01.2025
	UserLoginEffect = DeaFSoft.GetBool("USER_LOGIN_EFFECT", "STATUS", true); // Files x64 DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

	// DeaFSoft User Deatch Effect Settings Eklendi 01.01.2025
	UserDeathEffect = DeaFSoft.GetBool("USER_DEATH_EFFECT", "STATUS", true); // Files x64 DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

	// DeaFSoft User Town Effect Settings Eklendi 01.01.2025
	UserTownEffect = DeaFSoft.GetBool("USER_TOWN_EFFECT", "STATUS", true); // Files x64 DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

	// DeaFSoft User Rise Effect Settings Eklendi 01.01.2025
	UserRiseEffect = DeaFSoft.GetBool("USER_RISE_EFFECT", "STATUS", true); // Files x64 DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

	// DeaFSoft User Zone Change Settings Effect Eklendi 01.01.2025
	UserZoneChangeEffect = DeaFSoft.GetBool("USER_ZONE_CHANGE_EFFECT", "STATUS", true); // Files x64 DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

	// DeaFSoft Auto King Name Update Settings Eklendi 01.01.2025
	AutoKingUpdateServerList = DeaFSoft.GetBool("AUTO_KING_UPDATE_SERVER_LIST", "STATUS", true); // Files x64 DeaFSoftSettings.ini 1 Açip ve 0 Kapatma Ayarlar

}
#pragma endregion
// DeaFSoft ServerSettings Ayarlar Eklendi The End 01.01.2025

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft GmisOnlineNotice Ayarlar Eklendi 30.12.2024
#pragma region CUser::DeaFSoftGmisOnlineNotice()
void CUser::DeaFSoftGmisOnlineNotice()
{
	// DeaFSoft Giriþ GM Online Notice Eklendi 30.12.2024
	if (isGM() && g_pMain->pServerSetting.GmisOnlineNotice) // Gm Sadece | Tablo Server_Settings GmisOnlineNotice Eklendi 1 Açip ve 0 Kapatma Ayarlar Yeter :)
	{
		g_pMain->SendRgbNotice(string_format("GameMaster : %s is Online Ýyi Oyunlar Dileriz.", GetName().c_str()), 1, 255, 1); // Herkes User Chat Notice Rgb Yeþil Görüyorüz.
		return; // Geri Dönmek Demek 
	}
	// DeaFSoft Giriþ GM Online Notice The End 30.12.2024
}
#pragma endregion
// DeaFSoft GmisOnlineNotice Ayarlar Eklendi The End 30.12.2024

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft GmisOfflineNotice Ayarlar Eklendi 30.12.2024
#pragma region CUser::DeaFSoftGmisOfflineNotice()
void CUser::DeaFSoftGmisOfflineNotice()
{
	// DeaFSoft Çýktý GM Offline Notice Eklendi 30.12.2024
	if (isGM() && g_pMain->pServerSetting.GmisOnlineNotice) // Gm Sadece | Tablo Server_Settings GmisOnlineNotice Eklendi 1 Açip ve 0 Kapatma Ayarlar Yeter :)
	{
		g_pMain->SendRgbNotice(string_format("GameMaster : %s is Offline Çýktý Tekrar Görüsürüz.", GetName().c_str()), 255, 1, 1); // Herkes User Chat Notice Rgb Kýrmýzý Görüyorüz.
		return; // Geri Dönmek Demek 
	}
	// DeaFSoft Çýktý GM Offline Notice The End 30.12.2024
}
#pragma endregion
// DeaFSoft GmisOfflineNotice Ayarlar Eklendi The End 30.12.2024

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft LoginUserisOnlineNotice Ayarlar Eklendi 01.01.2025
#pragma region CUser::DeaFSoftLoginUserisOnlineNotice()
void CUser::DeaFSoftLoginUserisOnlineNotice()
{
	std::string sZoneName;
	switch (GetZoneID())
	{
	case ZONE_KARUS: sZoneName = "Lüferson"; break;
	case ZONE_KARUS2: sZoneName = "Lüferson"; break;
	case ZONE_KARUS3: sZoneName = "Lüferson"; break;
	case ZONE_ELMORAD: sZoneName = "El Morad"; break;
	case ZONE_ELMORAD2: sZoneName = "El Morad"; break;
	case ZONE_ELMORAD3: sZoneName = "El Morad"; break;
	case ZONE_KARUS_ESLANT: sZoneName = "Karus Eslant"; break;
	case ZONE_KARUS_ESLANT2: sZoneName = "Karus Eslant"; break;
	case ZONE_KARUS_ESLANT3: sZoneName = "Karus Eslant"; break;
	case ZONE_ELMORAD_ESLANT: sZoneName = "El Morad Eslant"; break;
	case ZONE_ELMORAD_ESLANT2: sZoneName = "El Morad Eslant"; break;
	case ZONE_ELMORAD_ESLANT3: sZoneName = "El Morad Eslant"; break;
	case ZONE_MORADON: sZoneName = "Moradon"; break;
	case ZONE_MORADON2: sZoneName = "Moradon"; break;
	case ZONE_MORADON3: sZoneName = "Moradon"; break;
	case ZONE_DELOS: sZoneName = "Delos"; break;
	case ZONE_BIFROST: sZoneName = "Bifrost"; break;
	case ZONE_DESPERATION_ABYSS: sZoneName = "Desperation Abyss"; break;
	case ZONE_HELL_ABYSS: sZoneName = "Hell Abyss"; break;
	case ZONE_DRAGON_CAVE: sZoneName = "Dragon Cave"; break;
	case ZONE_ARENA: sZoneName = "Arena"; break;
	case ZONE_ORC_ARENA: sZoneName = "Orc Arena"; break;
	case ZONE_GOBLIN_ARENA: sZoneName = "Goblin Arena"; break;
	case ZONE_CAITHAROS_ARENA: sZoneName = "Caitharos Arena"; break;
	case ZONE_FORGOTTEN_TEMPLE: sZoneName = "Forgotten Temple"; break;
	case ZONE_RONARK_LAND: sZoneName = "Ronark Land"; break;
	default:
		break;
	}

	if (!isGM() && g_pMain->GiriþUserisOnlineNotice) //DeaFSoft Login User ÝsOnline Notice 01.01.2025
	{
		std::string UserisOnlineNotice;
		ShowEffect(490161); // DeaFSoft Oyun Giriþ Char Karus Effect Eklendi. 24.02.2025
		ShowEffect(490092); // DeaFSoft Oyun Giriþ Char Yýlbaþi Yaðiyor Effect Eklendi. 24.02.2025
		if (GetNation() == KARUS)
			UserisOnlineNotice = string_format("KARUS Oyuncu : [%s] is Online [%s] Hoþgeldiniz DeaFSoft Ýyi Oyunlar.", GetName().c_str(), sZoneName.c_str());
		else
		ShowEffect(490090); // DeaFSoft Oyun Giriþ Char Karus Effect Eklendi. 24.02.2025
		ShowEffect(490092); // DeaFSoft Oyun Giriþ Char Yýlbaþi Yaðiyor Effect Eklendi. 24.02.2025
			UserisOnlineNotice = string_format("HUMAN Oyuncu : [%s] is Online [%s] Hoþgeldiniz DeaFSoft Ýyi Oyunlar.", GetName().c_str(), sZoneName.c_str());
		g_pMain->SendChat<COMMAND_CHAT>(UserisOnlineNotice.c_str());
	}
	if (!isGM() && g_pMain->GiriþUserisOnlineNotice) //DeaFSoft Login User ÝsOnline Notice 01.01.2025
	{
		std::string UserisOnlineNotice1;
		if (GetNation() == KARUS)
			UserisOnlineNotice1 = string_format("KARUS Oyuncu : [%s] is Online [%s] Hoþgeldiniz DeaFSoft Ýyi Oyunlar.", GetName().c_str(), sZoneName.c_str());
		else
			UserisOnlineNotice1 = string_format("HUMAN Oyuncu : [%s] is Online [%s] Hoþgeldiniz DeaFSoft Ýyi Oyunlar.", GetName().c_str(), sZoneName.c_str());
		g_pMain->SendChat<KNIGHTS_CHAT>(UserisOnlineNotice1.c_str());
	}
}
#pragma endregion
// DeaFSoft LoginUserisOnlineNotice Ayarlar Eklendi The End 01.01.2025

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft GateZoneNotice Ayarlar Eklendi 04.01.2025
#pragma region CUser::DeaFSoftGateZoneNotice()
void CUser::DeaFSoftGateZoneNotice()
{
	std::string sZoneName;
	switch (GetZoneID())
	{
	case ZONE_KARUS: sZoneName = "Lüferson"; break;
	case ZONE_KARUS2: sZoneName = "Lüferson"; break;
	case ZONE_KARUS3: sZoneName = "Lüferson"; break;
	case ZONE_ELMORAD: sZoneName = "El Morad"; break;
	case ZONE_ELMORAD2: sZoneName = "El Morad"; break;
	case ZONE_ELMORAD3: sZoneName = "El Morad"; break;
	case ZONE_KARUS_ESLANT: sZoneName = "Karus Eslant"; break;
	case ZONE_KARUS_ESLANT2: sZoneName = "Karus Eslant"; break;
	case ZONE_KARUS_ESLANT3: sZoneName = "Karus Eslant"; break;
	case ZONE_ELMORAD_ESLANT: sZoneName = "El Morad Eslant"; break;
	case ZONE_ELMORAD_ESLANT2: sZoneName = "El Morad Eslant"; break;
	case ZONE_ELMORAD_ESLANT3: sZoneName = "El Morad Eslant"; break;
	case ZONE_MORADON: sZoneName = "Moradon"; break;
	case ZONE_MORADON2: sZoneName = "Moradon"; break;
	case ZONE_MORADON3: sZoneName = "Moradon"; break;
	case ZONE_DELOS: sZoneName = "Delos"; break;
	case ZONE_BIFROST: sZoneName = "Bifrost"; break;
	case ZONE_DESPERATION_ABYSS: sZoneName = "Desperation Abyss"; break;
	case ZONE_HELL_ABYSS: sZoneName = "Hell Abyss"; break;
	case ZONE_DRAGON_CAVE: sZoneName = "Dragon Cave"; break;
	case ZONE_ARENA: sZoneName = "Arena"; break;
	case ZONE_ORC_ARENA: sZoneName = "Orc Arena"; break;
	case ZONE_GOBLIN_ARENA: sZoneName = "Goblin Arena"; break;
	case ZONE_CAITHAROS_ARENA: sZoneName = "Caitharos Arena"; break;
	case ZONE_FORGOTTEN_TEMPLE: sZoneName = "Forgotten Temple"; break;
	case ZONE_RONARK_LAND: sZoneName = "Ronark Land"; break;
	default:
		break;
	}

	if (!isGM() && g_pMain->GiriþGateZoneNotice) //DeaFSoft Gmsiz Herkes User Görüyoruz Giris Gate Zone RGB Notice Eklendi. 04.01.2025
	{
		if (GetNation() == KARUS)
		    g_pMain->SendRgbNotice(string_format("KARUS Oyuncu : [%s] Hoþgeldin Gate Zone : [%s] Giris Yaptýn.", GetName().c_str(), sZoneName.c_str()), 55, 55, 255); // Gate Giriþ Karus Renk Mavi
		else
			g_pMain->SendRgbNotice(string_format("HUMAN Oyuncu : [%s] Hoþgeldin Gate Zone : [%s] Giris Yaptýn.", GetName().c_str(), sZoneName.c_str()), 255, 102, 102); // Gate Giriþ Human Renk Kýrmýz
	}
}
#pragma endregion
// DeaFSoft GateZoneNotice Ayarlar Eklendi The End 04.01.2025

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft OyunOnlineNotice Ayarlar Eklendi 31.12.2024
#pragma region CUser::DeaFSoftOyunOnlineNotice()
void CUser::DeaFSoftOyunOnlineNotice()
{
	uint16 UserTotal = 0; // User Online.
	uint16 KarusCount = 0; // User Karus Online.
	uint16 ElmoradCount = 0; // User Human Online.
	for (int i = 0; i < MAX_USER; i++) // User Max 5000 Son.
	{
		CUser* pUser = g_pMain->GetUserPtr(i); // User Ýnsan Gerçek.

		if (pUser == nullptr || !pUser->isInGame()) // User Oyunda Giriyor.
			continue; // Devam Etmek Demek.

		UserTotal++; // User Online.

		pUser->GetNation() == Nation::KARUS ? KarusCount++ : ElmoradCount++; // User Karus ve Human Oyunda Online.
	}

	uint16 BotTotal = 0; // Bot Online.
	uint16 BotKarusCount = 0; // Bot Karus Online.
	uint16 BotElmoradCount = 0; // Bot Human Online.
	for (int i = 0; i < MAX_BOT; i++) // Bot Max 5000 Son.
	{
		CBot* pBot = g_pMain->GetBotPtr(i); // Bot Zeka Gerçek.

		if (pBot == nullptr || !pBot->isInGame()) // Bot Oyunda Giriyor.
			continue; // Devam Etmek Demek.

		BotTotal++; // Bot Online.

		pBot->GetNation() == Nation::KARUS ? BotKarusCount++ : BotElmoradCount++; // Bot Karus ve Human Oyunda Online.
	}

	if (g_pMain->pServerSetting.OyunUserBotOnlineNotice) // User&Bot Oyunda Online | Tablo Server_Settings OyunUserBotOnlineNotice Eklendi 1 Açip ve 0 Kapatma Ayarlar Yeter :)
	g_pMain->SendYesilNotice(this, string_format("Oyunda : [%d] (Karus : [%d] | [%d] : Human) Oyuncu Aktif", UserTotal+BotTotal, KarusCount+BotKarusCount, ElmoradCount+BotElmoradCount));
	return; // Geri Dönmek Demek 

}
#pragma endregion
// DeaFSoft OyunOnlineNotice Ayarlar Eklendi The End 31.12.2024

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft AutoOnlineCount Ayarlar Eklendi 01.01.2025
#pragma region CGameServerDlg::DeaFSoftAutoOnlineCount()
void CGameServerDlg::DeaFSoftAutoOnlineCount() 
{
	uint32 nHour = g_localTime.tm_hour;
	uint32 nMinute = g_localTime.tm_min;
	uint32 nSecond = g_localTime.tm_sec;

	if (g_pMain->AutoOnlineCountNotice) // DeaFSoft Yeni Auto Online Count Notice Eklendi 01.01.2025
	{
		if ((nMinute % 15 == 0 || nMinute == 0) && nSecond == 0)
		{
			uint16 usercount = 0;
			SessionMap sessMap = g_pMain->m_socketMgr.GetActiveSessionMap();

			for (auto itr = sessMap.begin(); itr != sessMap.end(); ++itr)
			{
				if (TO_USER(itr->second)->isInGame())
					usercount++;
			}

			Guard lock(g_pMain->m_BotcharacterNameLock);
			usercount += (uint16)g_pMain->m_BotcharacterNameMap.size(); 

			std::string sNoticeMessage = string_format("User&Bot Online List : [%d] Bizimle Olduðunuz Ýçin Teþekkür Ederiz.", usercount);

			if (!sNoticeMessage.empty())
				g_pMain->SendNotice(sNoticeMessage.c_str(), Nation::ALL);
		}
	}
}
#pragma endregion
// DeaFSoft AutoOnlineCount Ayarlar Eklendi The End 01.01.2025

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft User Game Info Komut Eklendi 07.01.2025
#pragma region CUser::DeaFSoftUserGameInfoNotice()
void CUser::DeaFSoftUserGameInfoNotice()
{
	if (g_pMain->UserGameInfoKomutNotice) // DeaFSoft Oyun Rehber Bilgisi Komutlarýný DeaFSoftSettings.ini Eklendi 07.01.2025
	{
		Packet DeaFSoft2; // DeaFSoft Chat Bilgisi Notice Eklendi 07.01.2025
		std::string Bilgisi_Notice = string_format("Oyun Rehber Bilgilerini Almak Için Chat Kismindan +bilgi Yazabilirsiniz.");
		DeaFSoft2.clear();
		ChatPacket::Construct(&DeaFSoft2, ChatType::FORCE_CHAT, Bilgisi_Notice.c_str(), "[OYUN BÝLGÝSÝ]", GetNation());
		Send(&DeaFSoft2);
	}

	// DeaFSoft Oyun Rehber Bilgisi Komutlarýný Eklendi 07.01.2025

	SendChat(ChatType::GENERAL_CHAT, string_format("Benim Sezer Ýþitme Engelliyim Kodlar Yapýyorum Devam Ediyorum ve Paylascam Herkes Seviyoruz :)", m_strUserID.c_str()), "{[DeaFSoft Sistemi]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("DeaFSoft v2383 Hoþgeldiniz Knight of Empire Server Farm Ýyi Oyunlar Diler.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("DeaFSoft Anti Cheat Koruma Hilesiz ve Koxp %100 Yenilmez.", m_strUserID.c_str()), "{[Koruma Sistemi]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Rehber Bilgileri Asagi Komutlarýný Görebilirsiniz.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("NP ile PUS Itemi Alabilirsiniz.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("CR'lerden PUS Itemi Kazanabilirsiniz.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Cz'deki Özel Bosslardan Taký Kasabilirsiniz.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Günlük Giriþ Ödül Sistemi Aktif.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Ücretsiz Genie!", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Ücretsiz Clan Pre, Süperior Cape, Offline Merchant, Slave Priest.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Monster Stone ve Event Haritalarý Aktif.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Skill ve Stat Sýfýrlama Ücretsizdir.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Colony Zone'de Chaos Stone ve Mini Chaos Stone Aktif.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Manner Point ile PUS Itemi Alma Sistemi Aktif.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Daily Quest Sistemi Aktif.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Sýnýrsýz HP ve MP Pot.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Bahçe Farmýndan KC Drop Sistemi Aktif.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Exp: [ZOR] | Ýtem: [ORTA].", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Master Görevleri Açýk.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Tekrarlý ve Günlük Quest Aktif.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("CZ ve Eventlerde Botlar Aktif.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Ýron Necklace, Ýron Belt ve Chitin Shield Droplarý Aktif.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Eslant ve CZ Geçiþ Level Sýnýrý: 60.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Ýslion ilk Günden Itibaren Aktif.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Multi Client Sýnýrý: 3 | IP Sýnýrý: 9.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("TL Merchant Aktif!", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Upgrade +8 Sondur. Takýlarda +1 Sondur.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Trade ve Merchant Için Level Sýnýrý Yoktur.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Merchant KC Item Satýþ Minimum 1.000 KC Olarak Belirlenmiþtir.", m_strUserID.c_str()), "{[Özellikleri]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("YENÝ CHAOTÝC GENERATOR SAYESÝNDE DAHA DETAYLI VE HIZLI BÝR SÝSTEM SÝZÝ BEKLÝYOR", m_strUserID.c_str()), "{[OTOMATÝK UPGRADE SÝSTEMÝ]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("YENÝ OTOMATÝK UPGRADE SÝSTEMÝMÝZ AKTÝF EDÝLDÝ TOPLU UPGRADE SAYESÝNDE ZAMAN KAYBINIZ SONA ERÝYOR!", m_strUserID.c_str()), "{[CHAOTÝC GENERATOR SÝSTEMÝ]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("Maradon ve Cz Bolgesinde Online Kalip Otomatik olarak Cash ve Np Kazanabilirsiniz", m_strUserID.c_str()), "{[Online Hediye Sistemi]}");
	SendChat(ChatType::GENERAL_CHAT, string_format("DeaFSoft Haydi Sen de Katýl ve Efsane Maceraya Baþla!", m_strUserID.c_str()), "{[Oyun Gel]}");
	return;
}
#pragma endregion
// DeaFSoft User Game Info Komut Eklendi The End 07.01.2025

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft Yeni Süre Ýtemler List Notice Eklendi. 06.02.2025 
#pragma region CUser::DeaFSoftExprationItemList()
void CUser::DeaFSoftExprationItemList()
{
	// DeaFSoft Yeni Süre Ýtemler Info Notice Eklendi. 06.02.2025 
	std::string PMName = "Geçici Gün Ýtem List";
	uint8 ItemCount = 0;

	for (int i = 0; i < INVENTORY_TOTAL; i++)
	{
		_ITEM_DATA* pItem = GetItem(i);

		if (pItem == nullptr)
			continue;

		if ((pItem->nExpirationTime - UNIXTIME) / 86400 > 300)
			continue;

		if (pItem->nExpirationTime != 0)
		{
			_ITEM_TABLE pTable = g_pMain->GetItemPtr(pItem->nNum);

			if (pTable.isnull())
				continue;

			ItemCount++;

			// DeaFSoft Yeni Pm Mesaj Otomatik Süresi Notice Eklendi. 06.02.2025
			if (ItemCount == 1)
			{
				std::string Mesaj = "Süresi Bitecek Ýtemlerin Listesi";
				Packet result;
				ChatPacket::Construct(&result, ChatType::PRIVATE_CHAT, &Mesaj, &PMName, GetNation());
				Send(&result);
			}

			// DeaFSoft Yeni Pm Mesaj Otomatik Süresi Notice Eklendi. 06.02.2025
			std::string Mesaj = string_format("Ýtem Name : %s | (Gün : %d Kalan) Sonra Silcek Ýyi Gün Bekleriz.", pTable.m_sName.c_str(), (pItem->nExpirationTime - UNIXTIME) / 86400);
			Packet result;
			ChatPacket::Construct(&result, ChatType::PRIVATE_CHAT, &Mesaj, &PMName, GetNation());
			Send(&result);

			//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

			Packet DeaFSoft; // DeaFSoft Public Chat Renk Sari Notice Eklendi 06.02.2025
			std::string PubliChat_Notice = string_format("Ýtem Name : %s | (Gün : %d Kalan) Sonra Silcek Ýyi Gün Bekleriz.", pTable.m_sName.c_str(), (pItem->nExpirationTime - UNIXTIME) / 86400);
			DeaFSoft.clear();
			ChatPacket::Construct(&DeaFSoft, ChatType::PUBLIC_CHAT, PubliChat_Notice.c_str(), "[Geçici Gün Ýtem List]", GetNation());
			Send(&DeaFSoft);
		}
	}
}
#pragma endregion
// DeaFSoft Yeni Süre Ýtemler List Notice Eklendi. The End 06.02.2025 

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DeaFSoft Yeni Süre Ýtemler Deleted Notice Eklendi. 06.02.2025 
#pragma region CUser::DeaFSoftExprationItemDeleted()
void CUser::DeaFSoftExprationItemDeleted()
{
	// DeaFSoft Yeni Süre Ýtemler Deleted Notice Eklendi. 06.02.2025 
	std::string PMName = "[Gün Süresi Silindi]";

	for (int i = 0; i < INVENTORY_TOTAL; i++)
	{
		_ITEM_DATA* pItem = GetItem(i);

		if (pItem->nExpirationTime - UNIXTIME < 0 && pItem->nExpirationTime != 0)
		{
			_ITEM_TABLE pTable = g_pMain->GetItemPtr(pItem->nNum);

			// DeaFSoft Yeni Pm Mesaj Otomatik Süresi Notice Eklendi. 06.02.2025
			std::string Mesaj = string_format("Nick : %s | Ýtem Name : %s | (Gün : %d Kalan) | Süresi Ýtem Silindi. Uzüldüm :(", GetName().c_str(), pTable.m_sName.c_str(), (pItem->nExpirationTime - UNIXTIME) / 86400);
			Packet result;
			ChatPacket::Construct(&result, PRIVATE_CHAT, &Mesaj, &PMName, GetNation());
			Send(&result);

			//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

			Packet DeaFSoft; // DeaFSoft Public Chat Renk Sari Notice Eklendi 06.02.2025
			std::string PubliChat_Notice = string_format("Nick : %s | Ýtem Name : %s | (Gün : %d Kalan) | Süresi Ýtem Silindi. Uzüldüm :(", GetName().c_str(), pTable.m_sName.c_str(), (pItem->nExpirationTime - UNIXTIME) / 86400);
			DeaFSoft.clear();
			ChatPacket::Construct(&DeaFSoft, ChatType::PUBLIC_CHAT, PubliChat_Notice.c_str(), "[Gün Süresi Silindi]", GetNation());
			Send(&DeaFSoft);
		}
	}
}
#pragma endregion
// DeaFSoft Yeni Süre Ýtemler Deleted Notice Eklendi. The End 06.02.2025 

