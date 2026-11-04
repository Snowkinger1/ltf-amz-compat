class CfgPatches {
	class snkg_ltf_amz_compat_ak {
		name = "LTF AMZ Compat AK";
		author = "Snowkinger";
        requiredVersion = 0.1;
        requiredAddons[] = {"LTF_AK", "squad_weapon_library_soundmod", "squad_weapon_soundmod"};
		units[] = {};
		weapons[] = {};
        skipWhenMissingDependencies = 1;
	};
};

class FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
	class Rifle_Base_F;
    class LTF_AK_BASE : Rifle_Base_F {
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};		
		reloadMagazineSound[] = {"squad_wpSounds\rifles\AK103\sounds\ak_reload.ogg", 1.6, 1, 30};
		changeFiremodeSound[] = {"squad_wpSounds\rifles\AK103\sounds\ak_firemode.ogg",0.6,1,5};
		drySound[] = {"squad_wpSounds\rifles\AK103\sounds\ak74_trigger_01.ogg", 0.91, 1, 30};
		class Single : Mode_SemiAuto {
			class BaseSoundModeType {};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Squad_AK103_Sets","Squad_AK103_2_Sets","Squad762_BulletCasings_Sets","AK74_tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = {"Squad_AK103Suppressed_Sets","Squad762_BulletCasings_Sets","Squad_AK103Suppressed_2_Sets","MX_silencerTail_SoundSet"};
			};
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType {};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Squad_AK103_Sets","Squad_AK103_2_Sets","Squad762_BulletCasings_Sets","AK74_tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = {"Squad_AK103Suppressed_Sets","Squad762_BulletCasings_Sets","Squad_AK103Suppressed_2_Sets","MX_silencerTail_SoundSet"};
			};
		};
	};
};