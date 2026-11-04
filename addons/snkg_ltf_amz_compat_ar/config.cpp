class CfgPatches {
	class snkg_ltf_amz_compat_ar {
		name = "LTF AMZ Compat AR";
		author = "Snowkinger";
        requiredVersion = 2.10;
        requiredAddons[] = {"LTF_AR15", "squad_weapon_library_soundmod", "squad_weapon_soundmod"};
		units[] = {};
		weapons[] = {};
        skipWhenMissingDependencies = 1;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
	class Rifle_Base_F;
	class arifle_MX_Base_F;
	class LTF_AR15_BASE : Rifle_Base_F {
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};			
		reloadMagazineSound[] = {"squad_wpSounds\rifles\M4&M16\sounds\zreload.ogg", 1.6, 1, 30};	
		drySound[] = {"squad_wpSounds\rifles\M4&M16\sounds\ztrigger.ogg", 0.91, 1, 30};
		changeFiremodeSound[] = {"squad_wpSounds\rifles\M4&M16\sounds\zfiremode.ogg", 5, 1, 5};
		
		class Single : Mode_SemiAuto{
			sounds[] = {"Standardsound", "SilencedSound"};
			class StandardSound {
				soundSetShot[] = {"Squad_M4_Sets", "Squad556_BulletCasings_Sets", "SPAR01_tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"Squad_M4Suppressed_Sets", "Squad556_BulletCasings_Sets", "MX_silencerTail_SoundSet"};
			};
		};
		class Single_AI : Single {
			showToPlayer = 0;
		};
		class FullAuto : Mode_FullAuto {
			class StandardSound {
				soundSetShot[] = {"Squad_M4_Sets", "Squad556_BulletCasings_Sets", "SPAR01_tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"Squad_M4Suppressed_Sets", "Squad556_BulletCasings_Sets", "MX_silencerTail_SoundSet"};
			};
		};
		class single_medium_optics1 : Single {
			showToPlayer = 0;
		};
		class single_far_optics2 : single_medium_optics1 {};
		class fullauto_medium : FullAuto {
			showToPlayer = 0;
		};
	};

	class LTF_HK_BASE : Rifle_Base_F {
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};			
		reloadMagazineSound[] = {"squad_wpSounds\rifles\M4&M16\sounds\zreload.ogg", 1.6, 1, 30};	
		drySound[] = {"squad_wpSounds\rifles\M4&M16\sounds\ztrigger.ogg", 0.91, 1, 30};
		changeFiremodeSound[] = {"squad_wpSounds\rifles\M4&M16\sounds\zfiremode.ogg", 5, 1, 5};
		
		class Single : Mode_SemiAuto{
			sounds[] = {"Standardsound", "SilencedSound"};
			class StandardSound {
				soundSetShot[] = {"Squad_M4_Sets", "Squad556_BulletCasings_Sets", "SPAR01_tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"Squad_M4Suppressed_Sets", "Squad556_BulletCasings_Sets", "MX_silencerTail_SoundSet"};
			};
		};
		class Single_AI : Single {
			showToPlayer = 0;
		};
		class FullAuto : Mode_FullAuto {
			class StandardSound {
				soundSetShot[] = {"Squad_M4_Sets", "Squad556_BulletCasings_Sets", "SPAR01_tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"Squad_M4Suppressed_Sets", "Squad556_BulletCasings_Sets", "MX_silencerTail_SoundSet"};
			};
		};
		class single_medium_optics1 : Single {
			showToPlayer = 0;
		};
		class single_far_optics2 : single_medium_optics1 {};
		class fullauto_medium : FullAuto {
			showToPlayer = 0;
		};
	};
};