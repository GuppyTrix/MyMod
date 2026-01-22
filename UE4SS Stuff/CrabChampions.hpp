#ifndef UE4SS_SDK_CrabChampions_HPP
#define UE4SS_SDK_CrabChampions_HPP

#include "CrabChampions_enums.hpp"

struct FClientAuthoritativeMoveData
{
    FVector_NetQuantize10 Location;                                                   // 0x0000 (size: 0xC)
    FRotator Rotation;                                                                // 0x000C (size: 0xC)
    FVector_NetQuantize10 Velocity;                                                   // 0x0018 (size: 0xC)
    FRotator ControlRotation;                                                         // 0x0024 (size: 0xC)
    uint8 MovementMode;                                                               // 0x0030 (size: 0x1)
    class UPrimitiveComponent* BasedMovementBase;                                     // 0x0038 (size: 0x8)
    FName BasedMovementBaseBoneName;                                                  // 0x0040 (size: 0x8)
    bool bBasedHasRelativeRotation;                                                   // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FCrabAISettings
{
    ECrabEnemyMovementType MovementType;                                              // 0x0000 (size: 0x1)
    float TimeBetweenMoves;                                                           // 0x0004 (size: 0x4)
    float JumpProbability;                                                            // 0x0008 (size: 0x4)
    float DashProbability;                                                            // 0x000C (size: 0x4)
    float TimeBetweenActionsMin;                                                      // 0x0010 (size: 0x4)
    float TimeBetweenActionsMax;                                                      // 0x0014 (size: 0x4)
    TArray<class UEnvQuery*> RangedActionEnvQueries;                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FCrabAbilityMod
{
    class UCrabAbilityModDA* AbilityModDA;                                            // 0x0000 (size: 0x8)
    FCrabInventoryInfo InventoryInfo;                                                 // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FCrabAutoSave
{
    int32 CurrentTime;                                                                // 0x0000 (size: 0x4)
    ECrabRank Difficulty;                                                             // 0x0004 (size: 0x1)
    TArray<ECrabDifficultyModifier> DifficultyModifiers;                              // 0x0008 (size: 0x10)
    int32 CountdownDifficultyModifier;                                                // 0x0018 (size: 0x4)
    FCrabNextIslandInfo NextIslandInfo;                                               // 0x0020 (size: 0x48)
    int32 ComboCounter;                                                               // 0x0068 (size: 0x4)
    float Combo;                                                                      // 0x006C (size: 0x4)
    int32 Eliminations;                                                               // 0x0070 (size: 0x4)
    int32 ShotsFired;                                                                 // 0x0074 (size: 0x4)
    uint32 DamageDealt;                                                               // 0x0078 (size: 0x4)
    uint32 HighestDamageDealt;                                                        // 0x007C (size: 0x4)
    int32 DamageTaken;                                                                // 0x0080 (size: 0x4)
    int32 NumFlawlessIslands;                                                         // 0x0084 (size: 0x4)
    FCrabHealthInfo HealthInfo;                                                       // 0x0088 (size: 0x1C)
    float BaseMaxHealth;                                                              // 0x00A4 (size: 0x4)
    float MaxHealthMultiplier;                                                        // 0x00A8 (size: 0x4)
    float DamageMultiplier;                                                           // 0x00AC (size: 0x4)
    float ScaleMultiplier;                                                            // 0x00B0 (size: 0x4)
    class UCrabWeaponDA* WeaponDA;                                                    // 0x00B8 (size: 0x8)
    class UCrabAbilityDA* AbilityDA;                                                  // 0x00C0 (size: 0x8)
    class UCrabMeleeDA* MeleeDA;                                                      // 0x00C8 (size: 0x8)
    uint8 NumWeaponModSlots;                                                          // 0x00D0 (size: 0x1)
    TArray<FCrabWeaponMod> WeaponMods;                                                // 0x00D8 (size: 0x10)
    uint8 NumAbilityModSlots;                                                         // 0x00E8 (size: 0x1)
    TArray<FCrabAbilityMod> AbilityMods;                                              // 0x00F0 (size: 0x10)
    uint8 NumMeleeModSlots;                                                           // 0x0100 (size: 0x1)
    TArray<FCrabMeleeMod> MeleeMods;                                                  // 0x0108 (size: 0x10)
    uint8 NumPerkSlots;                                                               // 0x0118 (size: 0x1)
    TArray<FCrabPerk> Perks;                                                          // 0x0120 (size: 0x10)
    TArray<FCrabRelic> Relics;                                                        // 0x0130 (size: 0x10)
    int32 NumTimesSalvaged;                                                           // 0x0140 (size: 0x4)
    int32 NumShopPurchases;                                                           // 0x0144 (size: 0x4)
    int32 NumShopRerolls;                                                             // 0x0148 (size: 0x4)
    int32 NumTotemsDestroyed;                                                         // 0x014C (size: 0x4)
    uint32 Crystals;                                                                  // 0x0150 (size: 0x4)
    int32 TotalTimeTaken;                                                             // 0x0154 (size: 0x4)
    TArray<FCrabChallenge> CompletedChallenges;                                       // 0x0158 (size: 0x10)

}; // Size: 0x168

struct FCrabChallenge
{
    FName ChallengeID;                                                                // 0x0000 (size: 0x8)
    FString ChallengeDescription;                                                     // 0x0008 (size: 0x10)
    int32 ChallengeProgress;                                                          // 0x0018 (size: 0x4)
    int32 ChallengeGoal;                                                              // 0x001C (size: 0x4)
    bool bChallengeCompleted;                                                         // 0x0020 (size: 0x1)
    FCrabCosmetic CosmeticReward;                                                     // 0x0028 (size: 0x28)

}; // Size: 0x50

struct FCrabContract
{
    ECrabContractType ContractType;                                                   // 0x0000 (size: 0x1)
    int32 Progress;                                                                   // 0x0004 (size: 0x4)
    int32 Goal;                                                                       // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FCrabCosmetic
{
    ECrabCosmeticType CosmeticType;                                                   // 0x0000 (size: 0x1)
    FString CosmeticName;                                                             // 0x0008 (size: 0x10)
    class UTexture2D* CosmeticIcon;                                                   // 0x0018 (size: 0x8)
    class UObject* CosmeticObject;                                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FCrabDamageInfo
{
    class AActor* DamagedActor;                                                       // 0x0000 (size: 0x8)
    float Damage;                                                                     // 0x0008 (size: 0x4)
    ECrabDamageType CrabDamageType;                                                   // 0x000C (size: 0x1)
    TArray<ECrabDamageTagType> DamageTags;                                            // 0x0010 (size: 0x10)
    TArray<FCrabDebuff> Debuffs;                                                      // 0x0020 (size: 0x10)
    FVector_NetQuantize DamageLoc;                                                    // 0x0030 (size: 0xC)
    float KnockbackStrength;                                                          // 0x003C (size: 0x4)
    class ACrabC* DamagingC;                                                          // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FCrabDebuff
{
    ECrabDebuffType DebuffType;                                                       // 0x0000 (size: 0x1)
    int32 DebuffStack;                                                                // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FCrabDebuffState
{
    int32 IceStack;                                                                   // 0x0000 (size: 0x4)
    int32 FireStack;                                                                  // 0x0004 (size: 0x4)
    int32 LightningStack;                                                             // 0x0008 (size: 0x4)
    int32 PoisonStack;                                                                // 0x000C (size: 0x4)
    int32 ArcaneStack;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FCrabEnemySpawnSettings
{
    int32 IslandToStartSpawningAt;                                                    // 0x0000 (size: 0x4)
    bool bOnlySpawnIfLooping;                                                         // 0x0004 (size: 0x1)
    TArray<ECrabIslandType> BannedIslandTypes;                                        // 0x0008 (size: 0x10)
    bool bIsExplosiveEnemy;                                                           // 0x0018 (size: 0x1)
    int32 SpawnCost;                                                                  // 0x001C (size: 0x4)
    float SpawnWeight;                                                                // 0x0020 (size: 0x4)
    int32 SpawnLimit;                                                                 // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FCrabEnemyStats
{
    float HealthMultiplier;                                                           // 0x0000 (size: 0x4)
    float MovementSpeedMultiplier;                                                    // 0x0004 (size: 0x4)
    float ActionSpeedMultiplier;                                                      // 0x0008 (size: 0x4)
    float DamageMultiplier;                                                           // 0x000C (size: 0x4)

}; // Size: 0x10

struct FCrabExplosionFX
{
    FVector Loc;                                                                      // 0x0000 (size: 0xC)
    FVector ImpactNormal;                                                             // 0x000C (size: 0xC)
    float Radius;                                                                     // 0x0018 (size: 0x4)
    class UNiagaraSystem* FX;                                                         // 0x0020 (size: 0x8)
    FLinearColor Tint;                                                                // 0x0028 (size: 0x10)
    class USoundCue* Sound;                                                           // 0x0038 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> CameraShake;                                  // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FCrabGauntletInfo
{
    ECrabChallengeModifier ChallengeModifier;                                         // 0x0000 (size: 0x1)
    ECrabGauntletReward Reward;                                                       // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FCrabHealthInfo
{
    int32 CurrentArmorPlates;                                                         // 0x0000 (size: 0x4)
    float CurrentArmorPlateHealth;                                                    // 0x0004 (size: 0x4)
    float PreviousArmorPlateHealth;                                                   // 0x0008 (size: 0x4)
    float CurrentHealth;                                                              // 0x000C (size: 0x4)
    float CurrentMaxHealth;                                                           // 0x0010 (size: 0x4)
    float PreviousHealth;                                                             // 0x0014 (size: 0x4)
    float PreviousMaxHealth;                                                          // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FCrabInventoryCooldown
{
    class UCrabInventoryDA* InventoryDA;                                              // 0x0000 (size: 0x8)
    uint8 CurrentCooldown;                                                            // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FCrabInventoryInfo
{
    uint8 Level;                                                                      // 0x0000 (size: 0x1)
    TArray<ECrabEnhancementType> Enhancements;                                        // 0x0008 (size: 0x10)
    float AccumulatedBuff;                                                            // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FCrabIsland
{
    FName IslandName;                                                                 // 0x0000 (size: 0x8)
    float SpawnWeight;                                                                // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FCrabKeyBind
{
    FName MappingName;                                                                // 0x0000 (size: 0x8)
    FString KeyBindTitle;                                                             // 0x0008 (size: 0x10)
    bool bAxisMapping;                                                                // 0x0018 (size: 0x1)
    FKey KeyboardKey;                                                                 // 0x0020 (size: 0x18)
    FString KeyboardKeyFriendlyName;                                                  // 0x0038 (size: 0x10)
    FKey ControllerKey;                                                               // 0x0048 (size: 0x18)
    class UTexture2D* ControllerIcon;                                                 // 0x0060 (size: 0x8)
    bool bCanBeRemapped;                                                              // 0x0068 (size: 0x1)

}; // Size: 0x70

struct FCrabLightingPreset
{
    float Weight;                                                                     // 0x0000 (size: 0x4)
    class UMaterialInterface* SkydomeMI;                                              // 0x0008 (size: 0x8)
    float SkydomeRotation;                                                            // 0x0010 (size: 0x4)
    float DLHeight;                                                                   // 0x0014 (size: 0x4)
    float DLRotation;                                                                 // 0x0018 (size: 0x4)
    float DLIntensity;                                                                // 0x001C (size: 0x4)
    FLinearColor DLTint;                                                              // 0x0020 (size: 0x10)
    float SLIntensity;                                                                // 0x0030 (size: 0x4)
    FLinearColor SLTint;                                                              // 0x0034 (size: 0x10)
    FLinearColor SLHemisphereTint;                                                    // 0x0044 (size: 0x10)
    float SLMinOcclusion;                                                             // 0x0054 (size: 0x4)
    FColor SLOcclusionTint;                                                           // 0x0058 (size: 0x4)
    float PPTemperature;                                                              // 0x005C (size: 0x4)
    float HFDensity;                                                                  // 0x0060 (size: 0x4)
    float HFHeightFalloff;                                                            // 0x0064 (size: 0x4)
    FLinearColor HFTint;                                                              // 0x0068 (size: 0x10)
    float HFStartDistance;                                                            // 0x0078 (size: 0x4)
    class UMaterialInterface* OceanMI;                                                // 0x0080 (size: 0x8)
    FLinearColor UnderwaterPPTint;                                                    // 0x0088 (size: 0x10)
    class UCrabBiomeDA* BiomeDA;                                                      // 0x0098 (size: 0x8)

}; // Size: 0xA0

struct FCrabLobbyStats
{
    FString PlayerName;                                                               // 0x0000 (size: 0x10)
    FString Difficulty;                                                               // 0x0010 (size: 0x10)
    int32 Attempts;                                                                   // 0x0020 (size: 0x4)
    int32 Wins;                                                                       // 0x0024 (size: 0x4)
    int32 WinStreak;                                                                  // 0x0028 (size: 0x4)
    int32 HighestIslandReached;                                                       // 0x002C (size: 0x4)
    int32 NumCompletedChallenges;                                                     // 0x0030 (size: 0x4)
    int32 NumUnlockedWeapons;                                                         // 0x0034 (size: 0x4)
    int32 NumUnlockedAbilities;                                                       // 0x0038 (size: 0x4)
    int32 NumUnlockedMeleeWeapons;                                                    // 0x003C (size: 0x4)
    int32 NumUnlockedWeaponMods;                                                      // 0x0040 (size: 0x4)
    int32 NumUnlockedAbilityMods;                                                     // 0x0044 (size: 0x4)
    int32 NumUnlockedMeleeMods;                                                       // 0x0048 (size: 0x4)
    int32 NumUnlockedPerks;                                                           // 0x004C (size: 0x4)
    int32 NumUnlockedRelics;                                                          // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FCrabMeleeMod
{
    class UCrabMeleeModDA* MeleeModDA;                                                // 0x0000 (size: 0x8)
    FCrabInventoryInfo InventoryInfo;                                                 // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FCrabNextIslandInfo
{
    bool bIsContinuingRun;                                                            // 0x0000 (size: 0x1)
    TArray<ECrabBiome> BiomeOrder;                                                    // 0x0008 (size: 0x10)
    ECrabBiome Biome;                                                                 // 0x0018 (size: 0x1)
    int32 CurrentIsland;                                                              // 0x001C (size: 0x4)
    FName IslandName;                                                                 // 0x0020 (size: 0x8)
    ECrabIslandType IslandType;                                                       // 0x0028 (size: 0x1)
    int32 XLLevel;                                                                    // 0x002C (size: 0x4)
    TArray<ECrabChallengeModifier> ChallengeModifiers;                                // 0x0030 (size: 0x10)
    ECrabBlessing Blessing;                                                           // 0x0040 (size: 0x1)
    ECrabLootPool RewardLootPool;                                                     // 0x0041 (size: 0x1)

}; // Size: 0x48

struct FCrabPedestalInfo
{
    ECrabCurrencyType CurrencyType;                                                   // 0x0000 (size: 0x1)
    int32 Cost;                                                                       // 0x0004 (size: 0x4)
    float DiscountPercentage;                                                         // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FCrabPerk
{
    class UCrabPerkDA* PerkDA;                                                        // 0x0000 (size: 0x8)
    FCrabInventoryInfo InventoryInfo;                                                 // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FCrabPickupInfo
{
    class UCrabPickupDA* PickupDA;                                                    // 0x0000 (size: 0x8)
    FCrabInventoryInfo InventoryInfo;                                                 // 0x0008 (size: 0x20)
    uint8 MaxPickups;                                                                 // 0x0028 (size: 0x1)
    ECrabCurrencyType CurrencyType;                                                   // 0x0029 (size: 0x1)
    int32 Cost;                                                                       // 0x002C (size: 0x4)
    int32 SalvageReward;                                                              // 0x0030 (size: 0x4)
    class ACrabPS* OwningPS;                                                          // 0x0038 (size: 0x8)
    FVector_NetQuantize CosmeticSpawnLoc;                                             // 0x0040 (size: 0xC)
    bool bShowLocationUI;                                                             // 0x004C (size: 0x1)
    ECrabMiscPickupType MiscPickupType;                                               // 0x004D (size: 0x1)

}; // Size: 0x50

struct FCrabPortalInfo
{
    bool bIsInited;                                                                   // 0x0000 (size: 0x1)
    TArray<ECrabChallengeModifier> ChallengeModifiers;                                // 0x0008 (size: 0x10)
    ECrabBlessing Blessing;                                                           // 0x0018 (size: 0x1)
    ECrabLootPool RewardLootPool;                                                     // 0x0019 (size: 0x1)

}; // Size: 0x20

struct FCrabProjectileInfo
{
    class UCrabProjectileDA* ProjectileDA;                                            // 0x0000 (size: 0x8)
    FVector_NetQuantize100 Dir;                                                       // 0x0008 (size: 0xC)
    class ACrabC* OwningC;                                                            // 0x0018 (size: 0x8)
    ECrabLesserProjectileType LesserProjectileType;                                   // 0x0020 (size: 0x1)
    bool bIsParentLesserProjectile;                                                   // 0x0021 (size: 0x1)
    class AActor* ActorToTempMoveIgnore;                                              // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FCrabProjectileModInfo
{
    float DamageMultiplier;                                                           // 0x0000 (size: 0x4)
    float FlatDamageBonus;                                                            // 0x0004 (size: 0x4)
    float RadiusMultiplier;                                                           // 0x0008 (size: 0x4)
    float LifetimeMultiplier;                                                         // 0x000C (size: 0x4)
    float SizeMultiplier;                                                             // 0x0010 (size: 0x4)
    float SpeedMultiplier;                                                            // 0x0014 (size: 0x4)
    float AccelerationBonus;                                                          // 0x0018 (size: 0x4)
    float GravityMultiplier;                                                          // 0x001C (size: 0x4)
    float HomingScale;                                                                // 0x0020 (size: 0x4)
    int32 NumBounces;                                                                 // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FCrabRankedWeapon
{
    class UCrabPickupDA* Weapon;                                                      // 0x0000 (size: 0x8)
    ECrabRank Rank;                                                                   // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FCrabRelic
{
    class UCrabRelicDA* RelicDA;                                                      // 0x0000 (size: 0x8)
    FCrabInventoryInfo InventoryInfo;                                                 // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FCrabStrikeInfo
{
    class ACrabC* OwningC;                                                            // 0x0000 (size: 0x8)
    float RadiusMultiplier;                                                           // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FCrabVideoSettings
{
    FString DisplayMode;                                                              // 0x0000 (size: 0x10)
    FString Resolution;                                                               // 0x0010 (size: 0x10)
    FString ResolutionQuality;                                                        // 0x0020 (size: 0x10)
    FString FPSLimit;                                                                 // 0x0030 (size: 0x10)
    FString VSync;                                                                    // 0x0040 (size: 0x10)
    FString FieldOfView;                                                              // 0x0050 (size: 0x10)
    FString GraphicsQuality;                                                          // 0x0060 (size: 0x10)
    FString WeaponEffects;                                                            // 0x0070 (size: 0x10)
    FString AntiAliasingType;                                                         // 0x0080 (size: 0x10)
    FString Sharpening;                                                               // 0x0090 (size: 0x10)
    FString MotionBlur;                                                               // 0x00A0 (size: 0x10)
    FString CameraShake;                                                              // 0x00B0 (size: 0x10)
    FString Hitmarkers;                                                               // 0x00C0 (size: 0x10)
    FString DamageNumbers;                                                            // 0x00D0 (size: 0x10)
    FString TextChatVisibility;                                                       // 0x00E0 (size: 0x10)
    FString ShowFPS;                                                                  // 0x00F0 (size: 0x10)
    FString PauseWhenLosingFocus;                                                     // 0x0100 (size: 0x10)

}; // Size: 0x110

struct FCrabWeaponInfo
{
    class UCrabWeaponDA* WeaponDA;                                                    // 0x0000 (size: 0x8)
    class ACrabC* OwningC;                                                            // 0x0008 (size: 0x8)
    bool bIsDualWieldWeapon;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FCrabWeaponMod
{
    class UCrabWeaponModDA* WeaponModDA;                                              // 0x0000 (size: 0x8)
    FCrabInventoryInfo InventoryInfo;                                                 // 0x0008 (size: 0x20)

}; // Size: 0x28

class ACrabAnvil : public ACrabInteractable
{
    class UStaticMeshComponent* AnvilMesh;                                            // 0x0278 (size: 0x8)
    class UNiagaraComponent* AnvilNC;                                                 // 0x0280 (size: 0x8)
    class UWidgetComponent* AnvilLocationWC;                                          // 0x0288 (size: 0x8)
    class UNiagaraComponent* HammerSlamNC;                                            // 0x0290 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0298 (size: 0x8)
    ECrabEnhancementType EnhancementType;                                             // 0x02A0 (size: 0x1)
    class UNiagaraSystem* FX;                                                         // 0x02B8 (size: 0x8)
    class ACrabPS* OwningPS;                                                          // 0x02C0 (size: 0x8)
    TSubclassOf<class UUserWidget> AnvilLocationUI;                                   // 0x02C8 (size: 0x8)
    class UNiagaraSystem* HammerSlamFX;                                               // 0x02D0 (size: 0x8)
    class USoundCue* HammerSlamSound;                                                 // 0x02D8 (size: 0x8)

    void OnRep_OwningPS();
    void OnRep_EnhancementType();
    void MulticastApplyEnhancement();
}; // Size: 0x2E8

class ACrabBananaPickup : public ACrabOverlapPickup
{
}; // Size: 0x268

class ACrabBeam : public AActor
{
    class USceneComponent* BeamRoot;                                                  // 0x0220 (size: 0x8)
    class UNiagaraComponent* BeamNC;                                                  // 0x0228 (size: 0x8)
    class UAudioComponent* BeamAC;                                                    // 0x0230 (size: 0x8)
    bool bPointBeamAtGround;                                                          // 0x0238 (size: 0x1)
    float BeamRadius;                                                                 // 0x023C (size: 0x4)
    float BeamLength;                                                                 // 0x0240 (size: 0x4)
    float BeamLengthInterpTime;                                                       // 0x0244 (size: 0x4)
    float BeamLengthInterpEasingExponent;                                             // 0x0248 (size: 0x4)
    float ArcAngle;                                                                   // 0x024C (size: 0x4)
    float EasingExponent;                                                             // 0x0250 (size: 0x4)
    float VerticalStrength;                                                           // 0x0254 (size: 0x4)
    float HorizontalStrength;                                                         // 0x0258 (size: 0x4)
    float LifeTime;                                                                   // 0x025C (size: 0x4)
    class UNiagaraSystem* FX;                                                         // 0x0260 (size: 0x8)
    class USoundCue* Sound;                                                           // 0x0268 (size: 0x8)
    class ACrabC* OwningC;                                                            // 0x0270 (size: 0x8)
    bool bAttachToOwningC;                                                            // 0x0278 (size: 0x1)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x0280 (size: 0x10)
    FCrabDamageInfo DamageInfo;                                                       // 0x0290 (size: 0x48)
    float Damage;                                                                     // 0x02D8 (size: 0x4)
    ECrabDamageType DamageType;                                                       // 0x02DC (size: 0x1)
    float KnockbackStrength;                                                          // 0x02E0 (size: 0x4)
    float DamageInterval;                                                             // 0x02F8 (size: 0x4)

}; // Size: 0x308

class ACrabBossC : public ACrabEnemyC
{
    TArray<class TSubclassOf<ACrabEnemyC>> PotentialPhaseLesserEnemiesToSpawn;        // 0x0998 (size: 0x10)
    int32 NumPhaseTwoLesserEnemiesToSpawn;                                            // 0x09A8 (size: 0x4)
    int32 NumPhaseThreeLesserEnemiesToSpawn;                                          // 0x09AC (size: 0x4)

}; // Size: 0x9C0

class ACrabBounds : public AActor
{
    class USplineComponent* BoundsSC;                                                 // 0x0220 (size: 0x8)
    float BoundsLowZ;                                                                 // 0x0228 (size: 0x4)
    float BoundsHighZ;                                                                // 0x022C (size: 0x4)

}; // Size: 0x230

class ACrabC : public ACharacter
{
    class UCrabHC* HC;                                                                // 0x04C0 (size: 0x8)
    class UNiagaraComponent* DebuffNC;                                                // 0x04C8 (size: 0x8)
    class UAudioComponent* DebuffAC;                                                  // 0x04D0 (size: 0x8)
    class UNiagaraComponent* ChainLightningNC;                                        // 0x04D8 (size: 0x8)
    class USkeletalMesh* MeshToSpawn;                                                 // 0x04E0 (size: 0x8)
    class UMaterialInterface* MeshMat;                                                // 0x04E8 (size: 0x8)
    TSubclassOf<class UAnimInstance> AnimationBlueprintToUse;                         // 0x04F0 (size: 0x8)
    FLinearColor Tint;                                                                // 0x04F8 (size: 0x10)
    FName CoreSocketName;                                                             // 0x0508 (size: 0x8)
    class UNiagaraSystem* DebuffFX;                                                   // 0x0510 (size: 0x8)
    class ACrabLM* LM;                                                                // 0x0518 (size: 0x8)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x0520 (size: 0x10)
    TArray<class ACrabWeapon*> Weapons;                                               // 0x0538 (size: 0x10)
    TArray<int32> UROIntervalPerLOD;                                                  // 0x0578 (size: 0x10)
    float UpdateMovementStateFrequency;                                               // 0x0588 (size: 0x4)
    bool bAlignToTerrain;                                                             // 0x05A0 (size: 0x1)
    FName AlignToTerrainSocketName;                                                   // 0x05A4 (size: 0x8)
    float BaseWalkSpeed;                                                              // 0x05C0 (size: 0x4)
    float BaseGravityScale;                                                           // 0x05C4 (size: 0x4)
    float GroundFriction;                                                             // 0x05CC (size: 0x4)
    float MaxAcceleration;                                                            // 0x05D0 (size: 0x4)
    float AirControl;                                                                 // 0x05D4 (size: 0x4)
    bool bCalculateViewPitch;                                                         // 0x05D8 (size: 0x1)
    float CurrentViewPitch;                                                           // 0x05DC (size: 0x4)
    class USoundCue* JumpSound;                                                       // 0x05E8 (size: 0x8)
    class USoundCue* LandSound;                                                       // 0x05F8 (size: 0x8)
    bool bIsKnockedBack;                                                              // 0x0610 (size: 0x1)
    class ACrabC* KnockbackDamageCauser;                                              // 0x0618 (size: 0x8)
    float MinTimeBetweenDamageEvents;                                                 // 0x0624 (size: 0x4)
    bool bIsImmuneToKnockbacks;                                                       // 0x0630 (size: 0x1)
    bool bIsImmuneToKnockbackDamage;                                                  // 0x0631 (size: 0x1)
    bool bIsImmuneToIce;                                                              // 0x0632 (size: 0x1)
    float DebuffStackMultiplier;                                                      // 0x0634 (size: 0x4)
    int32 DebuffStackLimit;                                                           // 0x0638 (size: 0x4)
    class ACrabC* LastDamageCauser;                                                   // 0x0640 (size: 0x8)
    bool bAwardDamageDealtWhenDamaged;                                                // 0x0648 (size: 0x1)
    bool bIsEliminated;                                                               // 0x0668 (size: 0x1)
    bool bShouldRagdoll;                                                              // 0x0669 (size: 0x1)
    float RagdollImpulseStrength;                                                     // 0x066C (size: 0x4)
    float LifeSpanCleanupTime;                                                        // 0x0670 (size: 0x4)
    class ACrabC* DOTDamageCauser;                                                    // 0x0678 (size: 0x8)
    float FreezeDuration;                                                             // 0x0684 (size: 0x4)
    float MinTimeBetweenFreezes;                                                      // 0x0688 (size: 0x4)
    float MinTimeBetweenShocks;                                                       // 0x0690 (size: 0x4)
    class ACrabC* IceDamageCauser;                                                    // 0x0698 (size: 0x8)
    class ACrabC* FireDamageCauser;                                                   // 0x06A0 (size: 0x8)
    class ACrabC* LightningDamageCauser;                                              // 0x06A8 (size: 0x8)
    class ACrabC* ArcaneDamageCauser;                                                 // 0x06B8 (size: 0x8)
    FCrabDebuffState DebuffState;                                                     // 0x06E8 (size: 0x14)
    class ACrabC* ChainedToC;                                                         // 0x0700 (size: 0x8)
    bool bIsInvulnerable;                                                             // 0x0710 (size: 0x1)

    void ServerSpawnCosmeticProjectile(const FCrabProjectileInfo& ProjectileInfo, class AActor* ProjectileOwner, const FVector_NetQuantize& StartLoc);
    void ServerClientAuthoritativeMove(const FClientAuthoritativeMoveData& MoveData);
    void OnRep_IsInvulnerable();
    void OnRep_IsEliminated();
    void OnRep_DebuffState(const FCrabDebuffState& PreviousDebuffState);
    void OnRep_ChainedToC();
    void ClientKnockback(const FVector_NetQuantizeNormal& Dir, float Strength);
}; // Size: 0x720

class ACrabCheckpoint : public AActor
{
    class USphereComponent* CheckpointCollision;                                      // 0x0228 (size: 0x8)
    class UNiagaraComponent* CheckpointNC;                                            // 0x0230 (size: 0x8)
    class UNiagaraSystem* CheckpointFX;                                               // 0x0238 (size: 0x8)
    bool bIsFinalCheckpoint;                                                          // 0x0240 (size: 0x1)
    class USoundCue* CheckpointActiveSound;                                           // 0x0248 (size: 0x8)

}; // Size: 0x250

class ACrabChest : public ACrabInteractable
{
    class USkeletalMeshComponent* ChestMesh;                                          // 0x0278 (size: 0x8)
    class UNiagaraComponent* ChestNC;                                                 // 0x0280 (size: 0x8)
    class UAudioComponent* ChestAC;                                                   // 0x0288 (size: 0x8)
    class UWidgetComponent* ChestLocationWC;                                          // 0x0290 (size: 0x8)
    FString Name;                                                                     // 0x0298 (size: 0x10)
    ECrabLootPool LootPool;                                                           // 0x02A8 (size: 0x1)
    ECrabRarity Rarity;                                                               // 0x02A9 (size: 0x1)
    int32 NumPickupsToSpawn;                                                          // 0x02AC (size: 0x4)
    ECrabCurrencyType CurrencyType;                                                   // 0x02B0 (size: 0x1)
    int32 Cost;                                                                       // 0x02B4 (size: 0x4)
    class USkeletalMesh* ChestMeshToSpawn;                                            // 0x02B8 (size: 0x8)
    class UNiagaraSystem* ChestFX;                                                    // 0x02C0 (size: 0x8)
    class USoundCue* ChestSound;                                                      // 0x02C8 (size: 0x8)
    class UNiagaraSystem* OpenFX;                                                     // 0x02D0 (size: 0x8)
    class USoundCue* OpenSound;                                                       // 0x02D8 (size: 0x8)
    class UAnimSequence* SpawnAnim;                                                   // 0x02E0 (size: 0x8)
    class UAnimSequence* OpenAnim;                                                    // 0x02E8 (size: 0x8)
    class ACrabPS* OwningPS;                                                          // 0x02F0 (size: 0x8)
    TSubclassOf<class UUserWidget> ChestLocationUIToSpawn;                            // 0x02F8 (size: 0x8)
    bool bIsChestOpened;                                                              // 0x0300 (size: 0x1)
    TArray<FCrabPickupInfo> PickupsToSpawn;                                           // 0x0308 (size: 0x10)
    TArray<class ACrabInteractPickup*> SpawnedPickups;                                // 0x0330 (size: 0x10)

    void OnRep_OwningPS();
    void OnRep_IsChestOpened();
}; // Size: 0x348

class ACrabCosmeticActor : public AActor
{
    class UStaticMeshComponent* CosmeticMesh;                                         // 0x0220 (size: 0x8)
    class UNiagaraComponent* CosmeticNC;                                              // 0x0228 (size: 0x8)
    class UAudioComponent* CosmeticAC;                                                // 0x0230 (size: 0x8)
    FLinearColor Tint;                                                                // 0x0238 (size: 0x10)
    class UStaticMesh* Mesh;                                                          // 0x0248 (size: 0x8)
    class UNiagaraSystem* FX;                                                         // 0x0250 (size: 0x8)
    class USoundCue* Sound;                                                           // 0x0258 (size: 0x8)

}; // Size: 0x260

class ACrabCosmeticC : public AActor
{
    class USkeletalMeshComponent* Mesh;                                               // 0x0220 (size: 0x8)
    class UStaticMeshComponent* WeaponMesh;                                           // 0x0228 (size: 0x8)
    class USkeletalMesh* MeshToSpawn;                                                 // 0x0230 (size: 0x8)
    TSubclassOf<class UAnimInstance> AnimationBlueprintToUse;                         // 0x0238 (size: 0x8)
    class UStaticMesh* WeaponMeshToSpawn;                                             // 0x0240 (size: 0x8)
    class UAnimMontage* OnEquippedNewCrabSkinMontage;                                 // 0x0248 (size: 0x8)
    class UMaterialInterface* CrabSkin;                                               // 0x0250 (size: 0x8)
    class UAnimMontage* OnEquippedNewWeaponSkinMontage;                               // 0x0258 (size: 0x8)
    class UMaterialInterface* WeaponSkin;                                             // 0x0260 (size: 0x8)

}; // Size: 0x268

class ACrabCrown : public ACrabInteractable
{
    class UStaticMeshComponent* CrownMesh;                                            // 0x0278 (size: 0x8)
    class UNiagaraComponent* CrownNC;                                                 // 0x0280 (size: 0x8)
    class UAudioComponent* CrownAC;                                                   // 0x0288 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0290 (size: 0x8)
    class UNiagaraSystem* FX;                                                         // 0x0298 (size: 0x8)
    class USoundCue* Sound;                                                           // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class ACrabCrystalPickup : public ACrabOverlapPickup
{
    ECrabCrystalDropType CrystalDropType;                                             // 0x0270 (size: 0x1)

    void OnRep_CrystalDropType();
}; // Size: 0x278

class ACrabDamageArea : public AActor
{
    class UNiagaraComponent* DamageAreaNC;                                            // 0x0220 (size: 0x8)
    class UAudioComponent* DamageAreaAC;                                              // 0x0228 (size: 0x8)
    bool bAllowOverlappingDamageAreas;                                                // 0x0230 (size: 0x1)
    bool bAlignToGround;                                                              // 0x0231 (size: 0x1)
    ECrabDamageAreaType DamageAreaType;                                               // 0x0232 (size: 0x1)
    float Radius;                                                                     // 0x0234 (size: 0x4)
    float RadiusMultiplier;                                                           // 0x0238 (size: 0x4)
    float LifeTime;                                                                   // 0x023C (size: 0x4)
    class UNiagaraSystem* FX;                                                         // 0x0240 (size: 0x8)
    class USoundCue* Sound;                                                           // 0x0248 (size: 0x8)
    class UMaterialInterface* DecalMat;                                               // 0x0250 (size: 0x8)
    class UDecalComponent* DamageAreaDC;                                              // 0x0258 (size: 0x8)
    class ACrabC* OwningC;                                                            // 0x0260 (size: 0x8)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x0270 (size: 0x10)
    FCrabDamageInfo DamageInfo;                                                       // 0x0280 (size: 0x48)
    float Damage;                                                                     // 0x02C8 (size: 0x4)
    ECrabDamageType DamageType;                                                       // 0x02CC (size: 0x1)
    FCrabDebuff Debuff;                                                               // 0x02D0 (size: 0x8)
    bool bScaleDebuffStackByDamageMultiplier;                                         // 0x02D8 (size: 0x1)
    float KnockbackStrength;                                                          // 0x02DC (size: 0x4)
    bool bOnlyDealDamageIfGrounded;                                                   // 0x02E0 (size: 0x1)
    float DamageInterval;                                                             // 0x02E4 (size: 0x4)
    TArray<class ACrabPlayerC*> DamagedPlayers;                                       // 0x02F0 (size: 0x10)
    TArray<class ACrabC*> OverlappingCharacters;                                      // 0x0308 (size: 0x10)
    TArray<class AActor*> OverlappingPhysicsActors;                                   // 0x0318 (size: 0x10)
    float EnergyRingSpeed;                                                            // 0x0328 (size: 0x4)
    float SuctionForce;                                                               // 0x0330 (size: 0x4)

    void OnRep_RadiusMultiplier();
    void MulticastDeactivateDamageArea();
}; // Size: 0x340

class ACrabDamageTextActor : public AActor
{
    class UWidgetComponent* DamageTextWC;                                             // 0x0220 (size: 0x8)
    class UCrabDamageTextUI* DamageTextUI;                                            // 0x0228 (size: 0x8)

}; // Size: 0x240

class ACrabDestructible : public AActor
{
    class UStaticMeshComponent* Mesh;                                                 // 0x0228 (size: 0x8)
    class UAudioComponent* LeakAC;                                                    // 0x0230 (size: 0x8)
    class UCrabHC* HC;                                                                // 0x0238 (size: 0x8)
    TArray<ECrabIslandType> BannedIslandTypes;                                        // 0x0240 (size: 0x10)
    float SpawnWeight;                                                                // 0x0250 (size: 0x4)
    class UStaticMesh* MeshToSpawn;                                                   // 0x0258 (size: 0x8)
    class UMaterialInterface* MeshMat;                                                // 0x0260 (size: 0x8)
    bool bHideMesh;                                                                   // 0x0268 (size: 0x1)
    class UNiagaraSystem* MeshFX;                                                     // 0x0270 (size: 0x8)
    class UNiagaraComponent* MeshNC;                                                  // 0x0278 (size: 0x8)
    FLinearColor Tint;                                                                // 0x0280 (size: 0x10)
    class UWidgetComponent* HealthBarWC;                                              // 0x0290 (size: 0x8)
    TSubclassOf<class UCrabHealthBarUI> HealthBarUIToSpawn;                           // 0x0298 (size: 0x8)
    float HealthBarHeightOffset;                                                      // 0x02A0 (size: 0x4)
    bool bIgnoreCharacterCollision;                                                   // 0x02A4 (size: 0x1)
    TArray<ECrabDamageType> ImmuneDamageTypes;                                        // 0x02A8 (size: 0x10)
    bool bScaleMaxHealthByIsland;                                                     // 0x02B8 (size: 0x1)
    float MinScale;                                                                   // 0x02BC (size: 0x4)
    float MaxScale;                                                                   // 0x02C0 (size: 0x4)
    float ScaleMultiplier;                                                            // 0x02C4 (size: 0x4)
    float ProximityExplosionOverlapRadius;                                            // 0x02D8 (size: 0x4)
    float ProximityExplosionDelay;                                                    // 0x02DC (size: 0x4)
    bool bIsProximityExplosionTriggered;                                              // 0x02E0 (size: 0x1)
    class UNiagaraSystem* ProximityExplosionTriggeredFX;                              // 0x02E8 (size: 0x8)
    class USoundCue* ProximityExplosionTriggeredSound;                                // 0x02F0 (size: 0x8)
    bool bIsPhysicallySimulated;                                                      // 0x0300 (size: 0x1)
    float PhysicsMassScale;                                                           // 0x0304 (size: 0x4)
    float PhysicsLinearDamping;                                                       // 0x0308 (size: 0x4)
    float PhysicsImpulseMultiplier;                                                   // 0x030C (size: 0x4)
    bool bChaoticPhysicsMovement;                                                     // 0x0310 (size: 0x1)
    float PhysicsHomingScale;                                                         // 0x0314 (size: 0x4)
    class ACrabC* HomingTarget;                                                       // 0x0318 (size: 0x8)
    class USoundCue* PhysicsImpactSound;                                              // 0x0320 (size: 0x8)
    class ACrabC* DamagingC;                                                          // 0x0340 (size: 0x8)
    TArray<class TSubclassOf<ACrabEnemyC>> PotentialNestEnemiesToSpawn;               // 0x0350 (size: 0x10)
    bool bCanLeak;                                                                    // 0x0364 (size: 0x1)
    class UNiagaraSystem* LeakFX;                                                     // 0x0370 (size: 0x8)
    class USoundCue* LeakSound;                                                       // 0x0378 (size: 0x8)
    TArray<class UNiagaraComponent*> Leaks;                                           // 0x0380 (size: 0x10)
    float ExplosionRadius;                                                            // 0x03A4 (size: 0x4)
    bool bScaleExplosionDamageByIsland;                                               // 0x03A8 (size: 0x1)
    float ExplosionDamage;                                                            // 0x03AC (size: 0x4)
    ECrabDamageType ExplosionDamageType;                                              // 0x03B0 (size: 0x1)
    FCrabDebuff ExplosionDebuff;                                                      // 0x03B4 (size: 0x8)
    float ExplosionKnockbackStrength;                                                 // 0x03BC (size: 0x4)
    TSubclassOf<class ACrabDamageArea> DamageAreaToSpawn;                             // 0x03C0 (size: 0x8)
    ECrabRarity CrystalsToSpawnRarity;                                                // 0x03C8 (size: 0x1)
    float ChanceToSpawnRandomPickup;                                                  // 0x03CC (size: 0x4)
    TArray<class TSubclassOf<ACrabEnemyC>> PotentialChallengeEnemiesToSpawn;          // 0x03D0 (size: 0x10)
    float ChanceToSpawnChallengeEnemies;                                              // 0x03E0 (size: 0x4)
    int32 MinChallengeEnemiesToSpawn;                                                 // 0x03E4 (size: 0x4)
    int32 MaxChallengeEnemiesToSpawn;                                                 // 0x03E8 (size: 0x4)
    class UNiagaraSystem* ExplosionFX;                                                // 0x03F0 (size: 0x8)
    class USoundCue* ExplosionSound;                                                  // 0x03F8 (size: 0x8)
    class UCrabProjectileDA* SecondaryProjectileToSpawn;                              // 0x0400 (size: 0x8)
    int32 NumSecondaryProjectilesToSpawn;                                             // 0x0408 (size: 0x4)

    void OnRep_ScaleMultiplier();
    void OnRep_IsProximityExplosionTriggered();
    void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void MulticastExplode(class ACrabC* ExplodingC);
    void MulticastAddLeak(const FVector_NetQuantize& DamageLoc);
}; // Size: 0x410

class ACrabEnemyAIC : public AAIController
{
    FCrabAISettings AISettings;                                                       // 0x0328 (size: 0x28)
    class ACrabEnemyC* OwnedC;                                                        // 0x0358 (size: 0x8)
    class ACrabC* BestEnemyC;                                                         // 0x0368 (size: 0x8)
    class UEnvQuery* RangedActionEnvQuery;                                            // 0x03A0 (size: 0x8)

    void OnReceiveMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
}; // Size: 0x3E8

class ACrabEnemyC : public ACrabC
{
    class UWidgetComponent* HealthBarWC;                                              // 0x0718 (size: 0x8)
    float CapsuleScaleMultiplier;                                                     // 0x0720 (size: 0x4)
    float ScaleMultiplier;                                                            // 0x0724 (size: 0x4)
    class UMaterialInstanceDynamic* MeshDMI;                                          // 0x0728 (size: 0x8)
    bool bCollideWithCharacters;                                                      // 0x0739 (size: 0x1)
    FCrabEnemySpawnSettings EnemySpawnSettings;                                       // 0x0748 (size: 0x28)
    class ACrabEnemyAIC* OwningAIC;                                                   // 0x0770 (size: 0x8)
    ECrabEnemyCategory EnemyCategory;                                                 // 0x0778 (size: 0x1)
    FString EnemyName;                                                                // 0x0780 (size: 0x10)
    float HealthBarHeightOffset;                                                      // 0x0790 (size: 0x4)
    bool bShouldFloat;                                                                // 0x0794 (size: 0x1)
    float HeightOffset;                                                               // 0x0798 (size: 0x4)
    float DamageReductionWhenNoActionIsActive;                                        // 0x07B0 (size: 0x4)
    float CurrentDamageReduction;                                                     // 0x07B4 (size: 0x4)
    TArray<ECrabEnemyBuff> BannedEnemyBuffs;                                          // 0x07B8 (size: 0x10)
    ECrabEnemyBuff EnemyBuff;                                                         // 0x07C8 (size: 0x1)
    FCrabAISettings AISettings;                                                       // 0x07D0 (size: 0x28)
    class ACrabC* BestEnemyC;                                                         // 0x0800 (size: 0x8)
    TArray<class UCrabActionDA*> ActionDAs;                                           // 0x0808 (size: 0x10)
    uint8 CurrentActionIndex;                                                         // 0x0818 (size: 0x1)
    class UCrabActionDA* CurrentActionDA;                                             // 0x0820 (size: 0x8)
    class UNiagaraComponent* ActionNC;                                                // 0x0828 (size: 0x8)
    class UAudioComponent* ActionAC;                                                  // 0x0830 (size: 0x8)
    TArray<FVector> SequenceShotFormation;                                            // 0x0848 (size: 0x10)
    TArray<class TSubclassOf<ACrabEnemyC>> PendingLesserEnemiesToSpawn;               // 0x0870 (size: 0x10)
    float JumpSpeed;                                                                  // 0x0898 (size: 0x4)
    float JumpHeight;                                                                 // 0x089C (size: 0x4)
    float DashSpeed;                                                                  // 0x08A0 (size: 0x4)
    float DashHeight;                                                                 // 0x08A4 (size: 0x4)
    FCrabDebuff EnemyDebuff;                                                          // 0x08A8 (size: 0x8)
    TSubclassOf<class UCrabHealthBarUI> HealthBarUIToSpawn;                           // 0x08B0 (size: 0x8)
    class UCrabWeaponDA* WeaponDA;                                                    // 0x08B8 (size: 0x8)
    class UAnimMontage* EnemySpawnMontage;                                            // 0x08C0 (size: 0x8)
    class UNiagaraSystem* EnemySpawnFX;                                               // 0x08C8 (size: 0x8)
    class USoundCue* EnemySpawnSound;                                                 // 0x08D0 (size: 0x8)
    class UNiagaraComponent* MeshNC;                                                  // 0x08D8 (size: 0x8)
    class UNiagaraSystem* MeshFX;                                                     // 0x08E0 (size: 0x8)
    class UAudioComponent* MeshAC;                                                    // 0x08E8 (size: 0x8)
    class USoundCue* MeshSound;                                                       // 0x08F0 (size: 0x8)
    FName MeshFXSocketName;                                                           // 0x08F8 (size: 0x8)
    bool bIgnoreAthleticEnemiesModifier;                                              // 0x0900 (size: 0x1)
    bool bShouldBeIgnoredByPlayerTargeting;                                           // 0x0901 (size: 0x1)
    bool bIsLesserEnemy;                                                              // 0x0902 (size: 0x1)
    TArray<class UAnimMontage*> HitReactMontages;                                     // 0x0918 (size: 0x10)
    class ACrabC* EliminatingC;                                                       // 0x0930 (size: 0x8)
    float ChanceToSpawnOnEliminatedEnemies;                                           // 0x0944 (size: 0x4)
    TArray<class TSubclassOf<ACrabEnemyC>> OnEliminatedEnemiesToSpawn;                // 0x0948 (size: 0x10)
    class UAnimMontage* EliminatedMontage;                                            // 0x0958 (size: 0x8)
    float EliminatedSoundChance;                                                      // 0x0960 (size: 0x4)
    class USoundCue* EliminatedSound;                                                 // 0x0968 (size: 0x8)
    class UNiagaraSystem* GibFX;                                                      // 0x0978 (size: 0x8)
    class USoundCue* GibSound;                                                        // 0x0980 (size: 0x8)

    void OnRep_EnemyBuff();
    void OnRep_CurrentDamageReduction();
    void OnRep_CurrentActionIndex();
    void MulticastSpawnShrapnelProjectiles();
    void MulticastSpawnMirroredProjectile(class ACrabC* DamagingC);
    void MulticastSpawnHomingThornProjectiles();
    void MulticastShowHealthBar();
    void MulticastHitReact();
}; // Size: 0x990

class ACrabGM : public AGameModeBase
{
    TSubclassOf<class ACrabPC> PCToSpawn;                                             // 0x02C0 (size: 0x8)
    float DebugInitDelay;                                                             // 0x02C8 (size: 0x4)
    int32 DebugCurrentIsland;                                                         // 0x02CC (size: 0x4)
    ECrabIslandType DebugIslandType;                                                  // 0x02D0 (size: 0x1)
    TArray<ECrabChallengeModifier> DebugChallengeModifiers;                           // 0x02D8 (size: 0x10)
    ECrabBlessing DebugBlessing;                                                      // 0x02E8 (size: 0x1)
    class ACrabLM* LM;                                                                // 0x02F0 (size: 0x8)
    int32 WaitingForMorePlayersDelay;                                                 // 0x030C (size: 0x4)
    int32 PreStartDelay;                                                              // 0x0310 (size: 0x4)
    TSubclassOf<class ACrabC> CharacterToSpawn;                                       // 0x0318 (size: 0x8)
    TMap<ACrabPortal*, int32> CurrentPortals;                                         // 0x0340 (size: 0x50)
    class ACrabPortal* ChosenPortal;                                                  // 0x0390 (size: 0x8)

    void OnNavigationGenerationFinished(class ANavigationData* NavData);
    void DebugGoToNextIsland();
    void DebugGoToNextBiome();
    void DebugGoToIsland(int32 IslandToGoTo);
    void DebugEndRun();
    void DebugCompleteIsland();
}; // Size: 0x3A8

class ACrabGS : public AGameStateBase
{
    class ACrabLM* LM;                                                                // 0x0270 (size: 0x8)
    ECrabMatchState MatchState;                                                       // 0x0278 (size: 0x1)
    bool bIsTimePaused;                                                               // 0x0298 (size: 0x1)
    int32 CurrentTime;                                                                // 0x029C (size: 0x4)
    int32 CurrentCountdown;                                                           // 0x02A0 (size: 0x4)
    ECrabRank Difficulty;                                                             // 0x02A4 (size: 0x1)
    TArray<ECrabDifficultyModifier> DifficultyModifiers;                              // 0x02A8 (size: 0x10)
    int32 CountdownDifficultyModifier;                                                // 0x02B8 (size: 0x4)
    TArray<ECrabBiome> BiomeOrder;                                                    // 0x02C0 (size: 0x10)
    ECrabBiome Biome;                                                                 // 0x02D0 (size: 0x1)
    int32 CurrentIsland;                                                              // 0x02D4 (size: 0x4)
    ECrabIslandType CurrentIslandType;                                                // 0x02D8 (size: 0x1)
    int32 CurrentIslandStartTime;                                                     // 0x02DC (size: 0x4)
    int32 CurrentIslandTimeRemaining;                                                 // 0x02E4 (size: 0x4)
    int32 XLLevel;                                                                    // 0x02E8 (size: 0x4)
    TArray<ECrabChallengeModifier> ChallengeModifiers;                                // 0x02F0 (size: 0x10)
    ECrabBlessing Blessing;                                                           // 0x0300 (size: 0x1)
    int32 BlessingProgress;                                                           // 0x0304 (size: 0x4)
    int32 BlessingGoal;                                                               // 0x0308 (size: 0x4)
    ECrabLootPool RewardLootPool;                                                     // 0x030C (size: 0x1)
    int32 GauntletCurrentWave;                                                        // 0x0310 (size: 0x4)
    TArray<ECrabGauntletReward> GauntletRewards;                                      // 0x0318 (size: 0x10)
    int32 MinigameScore;                                                              // 0x0328 (size: 0x4)

    void OnRep_MinigameScore();
    void OnRep_MatchState();
    void OnRep_Gauntlet();
    void OnRep_DifficultyModifiers();
    void OnRep_Difficulty();
    void OnRep_CurrentTime();
    void OnRep_CurrentIslandTimeRemaining();
    void OnRep_CurrentCountdown();
    void OnRep_CountdownDifficultyModifier();
    void OnRep_ChallengeModifiers();
    void OnRep_BlessingProgress();
}; // Size: 0x418

class ACrabGauntlet : public ACrabInteractable
{
    class UNiagaraComponent* GauntletNC;                                              // 0x0278 (size: 0x8)
    class UAudioComponent* GauntletAC;                                                // 0x0280 (size: 0x8)
    class UNiagaraSystem* FX;                                                         // 0x0288 (size: 0x8)
    class USoundCue* Sound;                                                           // 0x0290 (size: 0x8)
    ECrabGauntletType GauntletType;                                                   // 0x0298 (size: 0x1)
    FCrabGauntletInfo GauntletInfo;                                                   // 0x0299 (size: 0x2)

    void OnRep_GauntletInfo();
}; // Size: 0x2A0

class ACrabHarvestArea : public AActor
{
    class UNiagaraComponent* HarvestAreaNC;                                           // 0x0220 (size: 0x8)
    class UWidgetComponent* HarvestAreaWC;                                            // 0x0228 (size: 0x8)
    class UNiagaraSystem* HarvestAreaFX;                                              // 0x0230 (size: 0x8)
    ECrabHarvestAreaType HarvestAreaType;                                             // 0x0238 (size: 0x1)
    float Radius;                                                                     // 0x023C (size: 0x4)
    FLinearColor Tint;                                                                // 0x0240 (size: 0x10)
    class ACrabPlayerC* OverlappingPlayerC;                                           // 0x0250 (size: 0x8)
    float UpdateRate;                                                                 // 0x0260 (size: 0x4)
    int32 InitialCountdown;                                                           // 0x0264 (size: 0x4)
    int32 AmountToDecrement;                                                          // 0x026C (size: 0x4)
    int32 AmountToIncrement;                                                          // 0x0270 (size: 0x4)
    class UNiagaraSystem* HarvestCountdownFX;                                         // 0x0278 (size: 0x8)
    class USoundCue* HarvestCountdownSound;                                           // 0x0280 (size: 0x8)
    class UNiagaraSystem* HarvestClearFX;                                             // 0x0288 (size: 0x8)
    class USoundCue* HarvestClearSound;                                               // 0x0290 (size: 0x8)
    class ACrabPS* PlayerToRevive;                                                    // 0x0298 (size: 0x8)
    TSubclassOf<class UCrabRevivalUI> RevivalUIToSpawn;                               // 0x02A0 (size: 0x8)
    class UCrabRevivalUI* RevivalUI;                                                  // 0x02A8 (size: 0x8)

    void OnRep_PlayerToRevive();
    void MulticastOnHarvestAreaCleared();
    void MulticastOnCountdownUpdated(uint8 PercentComplete);
}; // Size: 0x2B0

class ACrabHealthPickup : public ACrabOverlapPickup
{
    float HealthToGive;                                                               // 0x0268 (size: 0x4)

    void OnRep_HealthToGive();
}; // Size: 0x270

class ACrabInteractPickup : public ACrabInteractable
{
    class UNiagaraComponent* PickupPrimaryNC;                                         // 0x0278 (size: 0x8)
    class UNiagaraComponent* PickupSecondaryNC;                                       // 0x0280 (size: 0x8)
    class UWidgetComponent* PickupLocationWC;                                         // 0x0288 (size: 0x8)
    FCrabPickupInfo PickupInfo;                                                       // 0x0290 (size: 0x50)
    uint8 NumTimesPickedUp;                                                           // 0x0300 (size: 0x1)
    bool bIsPickupDeactivated;                                                        // 0x0301 (size: 0x1)

    void OnRep_PickupInfo();
    void OnRep_NumTimesPickedUp();
    void OnRep_IsPickupDeactivated();
}; // Size: 0x308

class ACrabInteractable : public AActor
{
    class USphereComponent* InteractableCollision;                                    // 0x0220 (size: 0x8)
    class UWidgetComponent* InteractWC;                                               // 0x0228 (size: 0x8)
    TSubclassOf<class UCrabInteractUI> InteractUIToSpawn;                             // 0x0230 (size: 0x8)
    class UCrabInteractUI* InteractUI;                                                // 0x0238 (size: 0x8)
    float InteractUIHeightOffset;                                                     // 0x0240 (size: 0x4)
    FString InteractMessage;                                                          // 0x0248 (size: 0x10)
    float InteractCooldown;                                                           // 0x025C (size: 0x4)

}; // Size: 0x278

class ACrabLM : public AActor
{
    class USceneComponent* LMRoot;                                                    // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Skydome;                                              // 0x0228 (size: 0x8)
    class UDirectionalLightComponent* DL;                                             // 0x0230 (size: 0x8)
    class USkyLightComponent* SL;                                                     // 0x0238 (size: 0x8)
    class UPostProcessComponent* PP;                                                  // 0x0240 (size: 0x8)
    class UExponentialHeightFogComponent* HF;                                         // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Ocean;                                                // 0x0250 (size: 0x8)
    class UBoxComponent* UnderwaterBounds;                                            // 0x0258 (size: 0x8)
    class UPostProcessComponent* UnderwaterPP;                                        // 0x0260 (size: 0x8)
    class UAudioComponent* AmbienceAC;                                                // 0x0268 (size: 0x8)
    class UAudioComponent* MusicAC;                                                   // 0x0270 (size: 0x8)
    class UStaticMesh* SkydomeMesh;                                                   // 0x0278 (size: 0x8)
    class UStaticMesh* OceanMesh;                                                     // 0x0280 (size: 0x8)
    class UMaterialInterface* BananaPPDistortionMat;                                  // 0x0288 (size: 0x8)
    class UMaterialInterface* UnderwaterPPDistortionMat;                              // 0x0290 (size: 0x8)
    class UMaterialParameterCollection* GlobalMPC;                                    // 0x0298 (size: 0x8)
    class UMaterialParameterCollectionInstance* GlobalMPCInstance;                    // 0x02A0 (size: 0x8)
    bool bUseRandomLightingPreset;                                                    // 0x02A8 (size: 0x1)
    int32 LightingPresetIndex;                                                        // 0x02AC (size: 0x4)
    TArray<FCrabLightingPreset> LightingPresets;                                      // 0x02B0 (size: 0x10)
    FCrabLightingPreset CurrentLightingPreset;                                        // 0x02C0 (size: 0xA0)
    FVector GlobalSaturation;                                                         // 0x0360 (size: 0xC)
    float GlobalContrast;                                                             // 0x036C (size: 0x4)
    int32 NumProjectilesToPool;                                                       // 0x0370 (size: 0x4)
    TArray<class ACrabProjectile*> PooledProjectiles;                                 // 0x0378 (size: 0x10)
    class UCrabSpawnablesDA* SpawnablesDA;                                            // 0x0388 (size: 0x8)
    class ACrabPlayerC* LocalC;                                                       // 0x0390 (size: 0x8)
    TArray<class ACrabC*> CharactersAffectingRippleSim;                               // 0x0398 (size: 0x10)
    float RippleSimUpdateRate;                                                        // 0x03A8 (size: 0x4)
    float RippleViewDistance;                                                         // 0x03AC (size: 0x4)
    int32 RippleRTResolution;                                                         // 0x03B0 (size: 0x4)
    class UTextureRenderTarget2D* RippleHeightSimRTA;                                 // 0x03B8 (size: 0x8)
    class UTextureRenderTarget2D* RippleHeightSimRTB;                                 // 0x03C0 (size: 0x8)
    class UTextureRenderTarget2D* RippleHeightSimRTC;                                 // 0x03C8 (size: 0x8)
    class UTextureRenderTarget2D* RippleNormalRT;                                     // 0x03D0 (size: 0x8)
    class UMaterialInterface* RippleDrawMat;                                          // 0x03D8 (size: 0x8)
    class UMaterialInstanceDynamic* RippleDrawDMI;                                    // 0x03E0 (size: 0x8)
    class UMaterialInterface* RippleHeightSimMat;                                     // 0x03E8 (size: 0x8)
    class UMaterialInstanceDynamic* RippleHeightSimDMI;                               // 0x03F0 (size: 0x8)
    class UMaterialInterface* RippleNormalSimMat;                                     // 0x03F8 (size: 0x8)
    class UMaterialInstanceDynamic* RippleNormalSimDMI;                               // 0x0400 (size: 0x8)
    float RippleRadius;                                                               // 0x0408 (size: 0x4)
    float RippleIntensity;                                                            // 0x040C (size: 0x4)
    TArray<class UCrabPickupDA*> AllUnlockedPickups;                                  // 0x0420 (size: 0x10)
    TArray<ECrabGauntletReward> GauntletRewardsToSpawn;                               // 0x0480 (size: 0x10)
    class ACrabBounds* CrabBounds;                                                    // 0x04A8 (size: 0x8)
    TArray<class ACrabSpawnPoint*> DestructibleSpawnPoints;                           // 0x04B0 (size: 0x10)
    TArray<class ACrabSpawnPoint*> EnemySpawnPoints;                                  // 0x04C0 (size: 0x10)
    TArray<class TSubclassOf<ACrabEnemyC>> EnemyTypesToSpawn;                         // 0x04D0 (size: 0x10)
    TArray<class TSubclassOf<ACrabEnemyC>> EnemiesToSpawn;                            // 0x04E0 (size: 0x10)

    void OnRep_LightingPresetIndex();
    void MulticastSpawnCosmeticProjectile(const FCrabProjectileInfo& ProjectileInfo, class AActor* ProjectileOwner, const FVector_NetQuantize& StartLoc);
    void MulticastPlayOneShotFX(class UNiagaraSystem* FXToPlay, class USoundCue* SoundToPlay, const FVector& SpawnLoc);
}; // Size: 0x538

class ACrabLaunchPad : public AActor
{
    class UNiagaraComponent* LaunchPadNC;                                             // 0x0220 (size: 0x8)
    class UAudioComponent* LaunchPadAC;                                               // 0x0228 (size: 0x8)
    class UNiagaraSystem* FX;                                                         // 0x0230 (size: 0x8)
    class USoundCue* Sound;                                                           // 0x0238 (size: 0x8)
    float LaunchCollisionRadius;                                                      // 0x0248 (size: 0x4)
    float LaunchSpeed;                                                                // 0x024C (size: 0x4)
    bool bOverrideXYVelocity;                                                         // 0x0250 (size: 0x1)
    class UNiagaraSystem* LaunchFX;                                                   // 0x0258 (size: 0x8)
    class USoundCue* LaunchSound;                                                     // 0x0260 (size: 0x8)

}; // Size: 0x268

class ACrabOverlapPickup : public AActor
{
    class UNiagaraComponent* PickupNC;                                                // 0x0228 (size: 0x8)
    class USphereComponent* PickupCollision;                                          // 0x0230 (size: 0x8)
    float OverlapRadius;                                                              // 0x0238 (size: 0x4)
    float LifeTime;                                                                   // 0x023C (size: 0x4)
    class UNiagaraSystem* PickupFX;                                                   // 0x0240 (size: 0x8)
    class ACrabPlayerC* PickedUpByC;                                                  // 0x0248 (size: 0x8)
    class USoundCue* OnPickedUpSound;                                                 // 0x0260 (size: 0x8)

    void OnRep_PickedUpByC();
}; // Size: 0x268

class ACrabPC : public APlayerController
{
    class USoundCue* ArmorHitmarkerSound;                                             // 0x0570 (size: 0x8)
    class USoundCue* ArmorBreakHitmarkerSound;                                        // 0x0578 (size: 0x8)
    class USoundCue* QuietHitmarkerSound;                                             // 0x0580 (size: 0x8)
    class USoundCue* NormalHitmarkerSound;                                            // 0x0588 (size: 0x8)
    class USoundCue* LoudHitmarkerSound;                                              // 0x0590 (size: 0x8)
    class USoundCue* QuietCritHitmarkerSound;                                         // 0x0598 (size: 0x8)
    class USoundCue* NormalCritHitmarkerSound;                                        // 0x05A0 (size: 0x8)
    class USoundCue* LoudCritHitmarkerSound;                                          // 0x05A8 (size: 0x8)
    class USoundCue* KnockbackDamageHitmarkerSound;                                   // 0x05B0 (size: 0x8)
    class USoundCue* EliminationHitmarkerSound;                                       // 0x05B8 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> EliminationCameraShake;                       // 0x05C0 (size: 0x8)
    class UCurveFloat* SlomoRampCurve;                                                // 0x05D0 (size: 0x8)
    class ALevelSequenceActor* LSActor;                                               // 0x05E0 (size: 0x8)
    class USubmixEffectFilterPreset* LowPassSubmixEffect;                             // 0x0630 (size: 0x8)
    class ULevelSequence* PortalTransitionLS;                                         // 0x0638 (size: 0x8)
    TSubclassOf<class UCrabDamageTextUI> DamageTextUIToSpawn;                         // 0x0640 (size: 0x8)
    TArray<class ACrabDamageTextActor*> PooledDamageTextActors;                       // 0x0648 (size: 0x10)
    TSubclassOf<class UCrabDamageTextUI> SpecialDamageTextUIToSpawn;                  // 0x0658 (size: 0x8)
    TArray<class ACrabDamageTextActor*> PooledSpecialDamageTextActors;                // 0x0660 (size: 0x10)
    TArray<FCrabChallenge> CompletedChallenges;                                       // 0x0670 (size: 0x10)
    class ACrabPlayerC* ClientOwnedC;                                                 // 0x0680 (size: 0x8)
    TSubclassOf<class UCrabGameStateUI> GameStateUIToSpawn;                           // 0x0688 (size: 0x8)
    class UCrabGameStateUI* GameStateUI;                                              // 0x0690 (size: 0x8)
    TSubclassOf<class UCrabGameplayUI> GameplayUIToSpawn;                             // 0x0698 (size: 0x8)
    class UCrabGameplayUI* GameplayUI;                                                // 0x06A0 (size: 0x8)
    TSubclassOf<class UCrabInventoryUI> InventoryUIToSpawn;                           // 0x06A8 (size: 0x8)
    class UCrabInventoryUI* InventoryUI;                                              // 0x06B0 (size: 0x8)
    TSubclassOf<class UCrabInGameMenuUI> InGameMenuToSpawn;                           // 0x06B8 (size: 0x8)
    class UCrabInGameMenuUI* InGameMenuUI;                                            // 0x06C0 (size: 0x8)
    TSubclassOf<class UCrabCosmeticsMenuUI> CosmeticsMenuUIToSpawn;                   // 0x06C8 (size: 0x8)
    class UCrabCosmeticsMenuUI* CosmeticsMenuUI;                                      // 0x06D0 (size: 0x8)
    TSubclassOf<class UCrabDifficultyMenuUI> DifficultyMenuUIToSpawn;                 // 0x06D8 (size: 0x8)
    class UCrabDifficultyMenuUI* DifficultyMenuUI;                                    // 0x06E0 (size: 0x8)
    TSubclassOf<class UCrabMultiplayerMenuUI> MultiplayerMenuUIToSpawn;               // 0x06E8 (size: 0x8)
    class UCrabMultiplayerMenuUI* MultiplayerMenuUI;                                  // 0x06F0 (size: 0x8)
    TSubclassOf<class UCrabGameOverUI> GameOverUIToSpawn;                             // 0x06F8 (size: 0x8)
    class UCrabGameOverUI* GameOverUI;                                                // 0x0700 (size: 0x8)
    TSubclassOf<class UCrabMinigameGameOverUI> MinigameGameOverUIToSpawn;             // 0x0708 (size: 0x8)
    class UCrabMinigameGameOverUI* MinigameGameOverUI;                                // 0x0710 (size: 0x8)
    class UCrabFocusMenuUI* ActiveFocusMenuUI;                                        // 0x0718 (size: 0x8)

    void ServerUploadLobbyStats(const FCrabLobbyStats& LobbyStats);
    void ServerSpectateNextPlayer();
    void ServerSpawnKeyTotemPickup(class ACrabTotem* KeyTotem, class UCrabPickupDA* PickupToSpawn);
    void ServerSendChatMessage(FString ChatMessage);
    void ServerRestoreAutoSave(const FCrabAutoSave& AutoSave);
    void ClientUploadLobbyStats();
    void ClientStartSlomoRamp();
    void ClientShowLoadingScreenUI();
    void ClientShowCosmeticsMenuUI();
    void ClientSetIsCharacterInputEnabled(bool bNewIsCharacterInputEnabled);
    void ClientRefreshPSUI();
    void ClientPlayerLeftGame();
    void ClientOnUpdatedOutOfBoundsState(ECrabOutOfBoundsState NewOutOfBoundsState);
    void ClientOnTookDamage(ECrabDamageHitType DamageHitType);
    void ClientOnReceivedChatMessage(class ACrabPS* PS, FString ChatMessage);
    void ClientOnPickedUpPickup(class UCrabPickupDA* PickupDA, uint8 Level);
    void ClientOnInteractedWithKeyTotem(class ACrabTotem* KeyTotem);
    void ClientOnEnteredPortal(const FCrabNextIslandInfo& NextIslandInfo, bool bSaveAutoSave);
    void ClientOnEliminated(FString EliminationCause);
    void ClientOnClearedIsland(bool bWasFlawlessClear);
    void ClientNotifyDamageDealt(const FCrabDamageInfo& DamageInfo, ECrabDamageHitType DamageHitType);
    void ClientLeaveGame();
    void ClientInventoryEvent(FString InventoryEventMessage);
    void ClientClearAutoSave();
}; // Size: 0x720

class ACrabPS : public APlayerState
{
    TArray<FCrabInventoryCooldown> InventoryCooldowns;                                // 0x0328 (size: 0x10)
    ECrabTintType PlayerTintType;                                                     // 0x0338 (size: 0x1)
    TArray<class UCrabPickupDA*> PSPickups;                                           // 0x0340 (size: 0x10)
    int32 ComboCounter;                                                               // 0x0350 (size: 0x4)
    float Combo;                                                                      // 0x0354 (size: 0x4)
    int32 Eliminations;                                                               // 0x0358 (size: 0x4)
    uint32 DamageDealt;                                                               // 0x0368 (size: 0x4)
    uint32 HighestDamageDealt;                                                        // 0x036C (size: 0x4)
    int32 DamageTaken;                                                                // 0x0370 (size: 0x4)
    int32 DamageTakenOnThisIsland;                                                    // 0x0374 (size: 0x4)
    int32 NumFlawlessIslands;                                                         // 0x0378 (size: 0x4)
    FCrabHealthInfo HealthInfo;                                                       // 0x037C (size: 0x1C)
    float BaseMaxHealth;                                                              // 0x0398 (size: 0x4)
    float MaxHealthMultiplier;                                                        // 0x039C (size: 0x4)
    float DamageMultiplier;                                                           // 0x03A0 (size: 0x4)
    float ScaleMultiplier;                                                            // 0x03A4 (size: 0x4)
    ECrabRank AccountRank;                                                            // 0x03A8 (size: 0x1)
    int32 AccountLevel;                                                               // 0x03AC (size: 0x4)
    int32 Keys;                                                                       // 0x03B0 (size: 0x4)
    class UMaterialInterface* CrabSkin;                                               // 0x03B8 (size: 0x8)
    class UCrabWeaponDA* WeaponDA;                                                    // 0x03C0 (size: 0x8)
    class UCrabAbilityDA* AbilityDA;                                                  // 0x03C8 (size: 0x8)
    class UCrabMeleeDA* MeleeDA;                                                      // 0x03D0 (size: 0x8)
    uint8 NumWeaponModSlots;                                                          // 0x03D8 (size: 0x1)
    TArray<FCrabWeaponMod> WeaponMods;                                                // 0x03E0 (size: 0x10)
    uint8 NumAbilityModSlots;                                                         // 0x03F0 (size: 0x1)
    TArray<FCrabAbilityMod> AbilityMods;                                              // 0x03F8 (size: 0x10)
    uint8 NumMeleeModSlots;                                                           // 0x0408 (size: 0x1)
    TArray<FCrabMeleeMod> MeleeMods;                                                  // 0x0410 (size: 0x10)
    uint8 NumPerkSlots;                                                               // 0x0420 (size: 0x1)
    TArray<FCrabPerk> Perks;                                                          // 0x0428 (size: 0x10)
    TArray<FCrabRelic> Relics;                                                        // 0x0438 (size: 0x10)
    int32 NumTimesSalvaged;                                                           // 0x0460 (size: 0x4)
    int32 NumShopPurchases;                                                           // 0x0464 (size: 0x4)
    int32 NumShopRerolls;                                                             // 0x0468 (size: 0x4)
    int32 NumTotemsDestroyed;                                                         // 0x046C (size: 0x4)
    uint32 Crystals;                                                                  // 0x0470 (size: 0x4)
    ECrabRarity IslandRewardRarity;                                                   // 0x0478 (size: 0x1)
    class ACrabCheckpoint* ParkourCheckpoint;                                         // 0x0480 (size: 0x8)
    TArray<class ACrabAnvil*> ChosenAnvils;                                           // 0x0488 (size: 0x10)
    class ACrabPortal* ChosenPortal;                                                  // 0x0498 (size: 0x8)
    int32 TotalTimeTaken;                                                             // 0x04A0 (size: 0x4)

    void ServerSetWeaponDA(class UCrabWeaponDA* NewWeaponDA);
    void ServerSetMeleeDA(class UCrabMeleeDA* NewMeleeDA);
    void ServerSetAbilityDA(class UCrabAbilityDA* NewAbilityDA);
    void ServerRemoveWeaponMod(ECrabWeaponModType WeaponModType);
    void ServerRemoveRelic(ECrabRelicType RelicType);
    void ServerRemovePerk(ECrabPerkType PerkType);
    void ServerRemoveMeleeMod(ECrabMeleeModType MeleeModType);
    void ServerRemoveAbilityMod(ECrabAbilityModType AbilityModType);
    void ServerRefreshAccount(ECrabRank NewAccountRank, int32 NewAccountLevel, int32 NewKeys);
    void ServerIncrementNumInventorySlots(ECrabPickupType PickupType, int32 Cost);
    void ServerEquipInventory(class UCrabWeaponDA* NewWeaponDA, class UCrabAbilityDA* NewAbilityDA, class UCrabMeleeDA* NewMeleeDA);
    void ServerEquipCosmetics(class UMaterialInterface* NewCrabSkin);
    void OnRep_WeaponDA();
    void OnRep_ScaleMultiplier();
    void OnRep_MeleeDA();
    void OnRep_Keys();
    void OnRep_IslandRewardRarity();
    void OnRep_Inventory();
    void OnRep_Eliminations();
    void OnRep_DamageTakenOnThisIsland();
    void OnRep_Crystals();
    void OnRep_Combo();
    void OnRep_AccountRank();
    void OnRep_AccountLevel();
    void OnRep_AbilityDA();
}; // Size: 0x578

class ACrabPhysicsActor : public AActor
{
    class UStaticMeshComponent* Mesh;                                                 // 0x0228 (size: 0x8)
    class UStaticMesh* MeshToSpawn;                                                   // 0x0230 (size: 0x8)
    float MinScale;                                                                   // 0x0238 (size: 0x4)
    float MaxScale;                                                                   // 0x023C (size: 0x4)
    bool bRandomizeInitialRotation;                                                   // 0x0240 (size: 0x1)
    class USoundCue* ImpactSound;                                                     // 0x0248 (size: 0x8)
    bool bExplodeWhenTakingDamage;                                                    // 0x0260 (size: 0x1)
    bool bIsExploded;                                                                 // 0x0261 (size: 0x1)
    class UNiagaraSystem* ExplosionFX;                                                // 0x0268 (size: 0x8)
    class USoundCue* ExplosionSound;                                                  // 0x0270 (size: 0x8)

    void OnRep_IsExploded();
    void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0x278

class ACrabPlayerC : public ACrabC
{
    class USpringArmComponent* CameraSpringArm;                                       // 0x0718 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0720 (size: 0x8)
    class UStaticMeshComponent* MeleeMesh;                                            // 0x0728 (size: 0x8)
    class UStaticMeshComponent* CosmeticMesh;                                         // 0x0730 (size: 0x8)
    class UWidgetComponent* PlayerNameWC;                                             // 0x0738 (size: 0x8)
    class UWidgetComponent* PingWC;                                                   // 0x0740 (size: 0x8)
    class UNiagaraComponent* SlideNC;                                                 // 0x0748 (size: 0x8)
    class UAudioComponent* SlideAC;                                                   // 0x0750 (size: 0x8)
    class UNiagaraComponent* AmbienceNC;                                              // 0x0758 (size: 0x8)
    class UNiagaraComponent* UnderwaterNC;                                            // 0x0760 (size: 0x8)
    bool bIsBananaActive;                                                             // 0x07CC (size: 0x1)
    class UCrabAbilityDA* AbilityDA;                                                  // 0x07D0 (size: 0x8)
    class UCrabMeleeDA* MeleeDA;                                                      // 0x07D8 (size: 0x8)
    class UMaterialInterface* CrabSkin;                                               // 0x07E0 (size: 0x8)
    class UStaticMesh* CosmeticToSpawn;                                               // 0x07E8 (size: 0x8)
    TArray<FCrabDamageInfo> PendingDamageInfoArray;                                   // 0x07F0 (size: 0x10)
    float PendingHealthToHeal;                                                        // 0x0810 (size: 0x4)
    TArray<FOverlapResult> NearbyActors;                                              // 0x0820 (size: 0x10)
    float OverlapSearchRadius;                                                        // 0x0830 (size: 0x4)
    class ACrabInteractable* BestInteractable;                                        // 0x0838 (size: 0x8)
    TSubclassOf<class UCrabPlayerNameUI> PlayerNameUIToSpawn;                         // 0x0848 (size: 0x8)
    TSubclassOf<class UCrabPingUI> PingUIToSpawn;                                     // 0x0850 (size: 0x8)
    class ACrabPC* OwningPC;                                                          // 0x0858 (size: 0x8)
    class UTexture2D* InteractControllerIcon;                                         // 0x0870 (size: 0x8)
    class UTexture2D* SalvageControllerIcon;                                          // 0x0888 (size: 0x8)
    FVector DefaultSpringArmOffset;                                                   // 0x089C (size: 0xC)
    float FallingSpringArmZOffset;                                                    // 0x08B4 (size: 0x4)
    float AimAssistRadius;                                                            // 0x08C4 (size: 0x4)
    float AimAssistSpeed;                                                             // 0x08C8 (size: 0x4)
    class AActor* AimAssistTarget;                                                    // 0x08D0 (size: 0x8)
    class UAnimMontage* FlipMontageF;                                                 // 0x08E8 (size: 0x8)
    class UAnimMontage* FlipMontageB;                                                 // 0x08F0 (size: 0x8)
    class UAnimMontage* FlipMontageR;                                                 // 0x08F8 (size: 0x8)
    class UAnimMontage* FlipMontageL;                                                 // 0x0900 (size: 0x8)
    float FlipSpeed;                                                                  // 0x0908 (size: 0x4)
    float FlipHeight;                                                                 // 0x090C (size: 0x4)
    float StopFlipDelay;                                                              // 0x0918 (size: 0x4)
    float PostFlipVelocityMultiplier;                                                 // 0x091C (size: 0x4)
    float BaseDashCooldown;                                                           // 0x092C (size: 0x4)
    class UAnimMontage* DashMontageF;                                                 // 0x0930 (size: 0x8)
    class UAnimMontage* DashMontageB;                                                 // 0x0938 (size: 0x8)
    class UAnimMontage* DashMontageR;                                                 // 0x0940 (size: 0x8)
    class UAnimMontage* DashMontageL;                                                 // 0x0948 (size: 0x8)
    float DashSpeed;                                                                  // 0x0950 (size: 0x4)
    float DashHeight;                                                                 // 0x0954 (size: 0x4)
    float PostDashVelocityMultiplier;                                                 // 0x0958 (size: 0x4)
    bool bIsSliding;                                                                  // 0x0979 (size: 0x1)
    class UCurveFloat* SlideSpeedCurve;                                               // 0x0980 (size: 0x8)
    class UNiagaraSystem* IceSlideFX;                                                 // 0x0990 (size: 0x8)
    class USoundCue* IceSlideSound;                                                   // 0x0998 (size: 0x8)
    class UNiagaraSystem* RockSlideFX;                                                // 0x09A0 (size: 0x8)
    class USoundCue* RockSlideSound;                                                  // 0x09A8 (size: 0x8)
    class UNiagaraSystem* SandSlideFX;                                                // 0x09B0 (size: 0x8)
    class USoundCue* SandSlideSound;                                                  // 0x09B8 (size: 0x8)
    float SlideMaxAcceleration;                                                       // 0x09C0 (size: 0x4)
    float SlideBrakingFrictionFactor;                                                 // 0x09C4 (size: 0x4)
    float SlideGroundFriction;                                                        // 0x09C8 (size: 0x4)
    int32 SlideDamageIteration;                                                       // 0x09D8 (size: 0x4)
    bool bIsAiming;                                                                   // 0x09DC (size: 0x1)
    class UAnimMontage* AimingMontage;                                                // 0x09E8 (size: 0x8)
    class USoundCue* StartAimSound;                                                   // 0x09F0 (size: 0x8)
    class USoundCue* StopAimSound;                                                    // 0x09F8 (size: 0x8)
    class UMaterialInstanceDynamic* MeleeDMI;                                         // 0x0A40 (size: 0x8)
    class UAnimMontage* InteractMontage;                                              // 0x0A70 (size: 0x8)
    class USoundCue* InteractFailureSound;                                            // 0x0A78 (size: 0x8)
    class ACrabInteractPickup* PendingPickupToSalvage;                                // 0x0A80 (size: 0x8)
    TArray<class ACrabChest*> ChestsToAutoLoot;                                       // 0x0A98 (size: 0x10)
    FVector_NetQuantize PingLoc;                                                      // 0x0AB0 (size: 0xC)
    class UNiagaraSystem* PingFX;                                                     // 0x0AC0 (size: 0x8)
    class USoundCue* PingSound;                                                       // 0x0AC8 (size: 0x8)
    class UNiagaraSystem* PrePortalFX;                                                // 0x0AE0 (size: 0x8)
    class USoundCue* PrePortalSound;                                                  // 0x0AE8 (size: 0x8)
    class UNiagaraSystem* PostPortalFX;                                               // 0x0AF0 (size: 0x8)
    class USoundCue* PostPortalSound;                                                 // 0x0AF8 (size: 0x8)
    class UNiagaraSystem* BlockedDamageFX;                                            // 0x0B08 (size: 0x8)
    class USoundCue* BlockedDamageSound;                                              // 0x0B10 (size: 0x8)
    class UNiagaraSystem* SonicBoomFX;                                                // 0x0B18 (size: 0x8)
    class USoundCue* SonicBoomSound;                                                  // 0x0B20 (size: 0x8)
    class UNiagaraSystem* ShockwaveFX;                                                // 0x0B28 (size: 0x8)
    class USoundCue* ShockwaveSound;                                                  // 0x0B30 (size: 0x8)
    class ACrabInteractable* ActiveInteractable;                                      // 0x0B48 (size: 0x8)

    void ServerUpgradeTotemPurchase(int32 UpgradeCost, class UCrabInventoryDA* InventoryDA);
    void ServerStopSlide();
    void ServerStopAim();
    void ServerStartSlide();
    void ServerStartAim();
    void ServerSetActiveInteractable(class ACrabInteractable* NewActiveInteractable);
    void ServerSalvage(class ACrabInteractPickup* PickupToSalvage);
    void ServerPing(const FVector_NetQuantize& InPingLoc);
    void ServerMelee();
    void ServerInteract(class ACrabInteractable* ActorToInteractWith);
    void ServerFlip(ECrabInputDir FlipDir);
    void ServerDropPickup(class UCrabPickupDA* PickupDA, const FCrabInventoryInfo& InventoryInfo);
    void ServerDealFallDamage();
    void ServerDealDamage(const TArray<FCrabDamageInfo>& DamageInfoArray);
    void ServerDash(ECrabInputDir DashDir);
    void ServerAutoLoot();
    void ServerApplyEnhancement(class UCrabInventoryDA* InventoryDA);
    void ServerAbility(const FVector_NetQuantize& InAbilityTelegraphLoc);
    void OnRep_SlideDamageIteration();
    void OnRep_PingLoc(FVector_NetQuantize PreviousPingLoc);
    void OnRep_PendingHealthToHeal();
    void OnRep_MeleeDA();
    void OnRep_IsSliding();
    void OnRep_IsBananaActive();
    void OnRep_IsAiming();
    void OnRep_CrabSkin();
    void OnRep_ActiveInteractable();
    void OnRep_AbilityDA();
    void MulticastSonicBoomFX();
    void MulticastShockwaveFX();
    void MulticastMelee();
    void MulticastInteract();
    void MulticastHideStalePing();
    void MulticastFlip(ECrabInputDir FlipDir);
    void MulticastDash(ECrabInputDir DashDir);
    void MulticastAbility(const FVector_NetQuantize& InAbilityTelegraphLoc);
    void ClientTeleport(const FVector_NetQuantize& Loc, float Yaw);
    void ClientPrePortal(class ACrabPortal* Portal);
    void ClientPostPortal();
    void ClientOnTriggeredRingOfDestruction();
    void ClientOnBlockedDamage();
}; // Size: 0xB50

class ACrabPortal : public ACrabInteractable
{
    class UStaticMeshComponent* PortalMesh;                                           // 0x0278 (size: 0x8)
    class UNiagaraComponent* PortalNC;                                                // 0x0280 (size: 0x8)
    class UAudioComponent* PortalAC;                                                  // 0x0288 (size: 0x8)
    ECrabIslandType IslandType;                                                       // 0x0290 (size: 0x1)
    class UTexture2D* Icon;                                                           // 0x0298 (size: 0x8)
    FString Description;                                                              // 0x02A0 (size: 0x10)
    FLinearColor Tint;                                                                // 0x02B0 (size: 0x10)
    class UStaticMesh* Mesh;                                                          // 0x02C0 (size: 0x8)
    class UNiagaraSystem* FX;                                                         // 0x02C8 (size: 0x8)
    class USoundCue* Sound;                                                           // 0x02D0 (size: 0x8)
    FCrabPortalInfo PortalInfo;                                                       // 0x02D8 (size: 0x20)

    void OnRep_PortalInfo();
}; // Size: 0x2F8

class ACrabProjectile : public AActor
{
    class USphereComponent* ProjectileCollision;                                      // 0x0220 (size: 0x8)
    class UCrabPMC* ProjectilePMC;                                                    // 0x0228 (size: 0x8)
    class UNiagaraComponent* ProjectileNC;                                            // 0x0230 (size: 0x8)
    class UNiagaraComponent* ProjectileTrailNC;                                       // 0x0238 (size: 0x8)
    class UAudioComponent* ProjectileAC;                                              // 0x0240 (size: 0x8)
    FCrabProjectileInfo ProjectileInfo;                                               // 0x0250 (size: 0x30)
    TArray<ECrabEnhancementType> Enhancements;                                        // 0x02A8 (size: 0x10)
    TArray<FCrabWeaponMod> WeaponMods;                                                // 0x02B8 (size: 0x10)
    TArray<FCrabAbilityMod> AbilityMods;                                              // 0x02C8 (size: 0x10)
    TArray<FCrabPerk> Perks;                                                          // 0x02D8 (size: 0x10)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x02F0 (size: 0x10)
    class ACrabBeam* AttachedBeam;                                                    // 0x0308 (size: 0x8)
    FCrabDamageInfo ExplosionDamageInfo;                                              // 0x0320 (size: 0x48)
    FCrabDamageInfo ProximityDamageInfo;                                              // 0x0368 (size: 0x48)
    FCrabDamageInfo AuraDamageInfo;                                                   // 0x03B8 (size: 0x48)

}; // Size: 0x470

class ACrabRandomizer : public ACrabInteractable
{
    class USkeletalMeshComponent* RandomizerMesh;                                     // 0x0278 (size: 0x8)
    class UNiagaraComponent* RandomizerNC;                                            // 0x0280 (size: 0x8)
    class USkeletalMesh* Mesh;                                                        // 0x0288 (size: 0x8)
    class UNiagaraSystem* FX;                                                         // 0x0290 (size: 0x8)
    class UNiagaraSystem* RandomizeFX;                                                // 0x0298 (size: 0x8)
    class USoundCue* RandomizeSound;                                                  // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class ACrabShopPedestal : public AActor
{
    class UStaticMeshComponent* PedestalMesh;                                         // 0x0220 (size: 0x8)
    class UWidgetComponent* PedestalWC;                                               // 0x0228 (size: 0x8)
    class UStaticMesh* PedestalMeshToSpawn;                                           // 0x0230 (size: 0x8)
    TSubclassOf<class UCrabShopPedestalUI> ShopPedestalUIToSpawn;                     // 0x0238 (size: 0x8)
    ECrabLootPool LootPool;                                                           // 0x0240 (size: 0x1)
    uint8 MaxPickups;                                                                 // 0x0241 (size: 0x1)
    ECrabCurrencyType CurrencyType;                                                   // 0x0242 (size: 0x1)
    class UCrabPickupDA* PickupToSpawn;                                               // 0x0248 (size: 0x8)
    FCrabPedestalInfo PedestalInfo;                                                   // 0x0258 (size: 0xC)

    void MulticastInitPedestalInfo(const FCrabPedestalInfo& NewPedestalInfo);
    void MulticastHidePedestalWC();
}; // Size: 0x268

class ACrabSpawnPoint : public AActor
{
    class USceneComponent* SpawnPointRoot;                                            // 0x0220 (size: 0x8)
    ECrabSpawnPointType SpawnPointType;                                               // 0x0228 (size: 0x1)

}; // Size: 0x238

class ACrabSpectatorC : public APawn
{
    class USpringArmComponent* CameraSpringArm;                                       // 0x0280 (size: 0x8)
    class UCameraComponent* SpectatorCamera;                                          // 0x0288 (size: 0x8)
    class ACrabPlayerC* SpectatingPlayer;                                             // 0x0290 (size: 0x8)

    void ClientSpectatePlayer(class ACrabPlayerC* PlayerToSpectate, bool bShowSpectatingUI);
    void ClientInitSpectatorC(class ACrabPlayerC* EliminatedPlayerToSpectate);
}; // Size: 0x2A0

class ACrabStatsPedestal : public AActor
{
    class UStaticMeshComponent* PedestalMesh;                                         // 0x0220 (size: 0x8)
    class UWidgetComponent* StatsWC;                                                  // 0x0228 (size: 0x8)
    class UStaticMesh* PedestalMeshToSpawn;                                           // 0x0230 (size: 0x8)
    TSubclassOf<class UCrabStatsUI> StatsUIToSpawn;                                   // 0x0238 (size: 0x8)
    FCrabLobbyStats LobbyStats;                                                       // 0x0240 (size: 0x58)

    void OnRep_LobbyStats();
}; // Size: 0x2A0

class ACrabStrike : public AActor
{
    FCrabStrikeInfo StrikeInfo;                                                       // 0x0220 (size: 0x10)
    class UNiagaraSystem* FX;                                                         // 0x0238 (size: 0x8)
    class USoundCue* SpawnSound;                                                      // 0x0240 (size: 0x8)
    float Radius;                                                                     // 0x0248 (size: 0x4)
    float ExplosionDelay;                                                             // 0x024C (size: 0x4)
    bool bScaleDamageByIsland;                                                        // 0x0250 (size: 0x1)
    float Damage;                                                                     // 0x0254 (size: 0x4)
    ECrabDamageType DamageType;                                                       // 0x0258 (size: 0x1)
    FCrabDebuff Debuff;                                                               // 0x025C (size: 0x8)
    float KnockbackStrength;                                                          // 0x0264 (size: 0x4)
    TSubclassOf<class ACrabDamageArea> DamageAreaToSpawn;                             // 0x0268 (size: 0x8)
    class USoundCue* ExplosionSound;                                                  // 0x0270 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> ExplosionCameraShake;                         // 0x0278 (size: 0x8)

    void OnRep_StrikeInfo();
}; // Size: 0x280

class ACrabTargetDummyC : public ACrabEnemyC
{
    class UWidgetComponent* DPSWC;                                                    // 0x0990 (size: 0x8)
    TSubclassOf<class UCrabDamageTextUI> DPSWidgetClass;                              // 0x0998 (size: 0x8)
    float DPSInterval;                                                                // 0x09A0 (size: 0x4)
    class UCrabDamageTextUI* DPSUI;                                                   // 0x09A8 (size: 0x8)
    float DPS;                                                                        // 0x09B4 (size: 0x4)

    void OnRep_DPS();
}; // Size: 0x9C0

class ACrabTotem : public ACrabInteractable
{
    class UStaticMeshComponent* TotemMesh;                                            // 0x0280 (size: 0x8)
    class UNiagaraComponent* TotemNC;                                                 // 0x0288 (size: 0x8)
    class UAudioComponent* TotemAC;                                                   // 0x0290 (size: 0x8)
    ECrabTotemType TotemType;                                                         // 0x0298 (size: 0x1)
    float SpawnWeight;                                                                // 0x029C (size: 0x4)
    float ChanceToExplode;                                                            // 0x02A0 (size: 0x4)
    FLinearColor Tint;                                                                // 0x02A4 (size: 0x10)
    class UStaticMesh* Mesh;                                                          // 0x02B8 (size: 0x8)
    class UNiagaraSystem* FX;                                                         // 0x02C0 (size: 0x8)
    class USoundCue* Sound;                                                           // 0x02C8 (size: 0x8)
    int32 Cost;                                                                       // 0x02D0 (size: 0x4)
    TArray<FString> UniqueIDInteractions;                                             // 0x02D8 (size: 0x10)
    int32 NumBuffs;                                                                   // 0x02E8 (size: 0x4)
    class USoundCue* BuffSound;                                                       // 0x02F0 (size: 0x8)
    int32 NumDebuffs;                                                                 // 0x02F8 (size: 0x4)
    class USoundCue* DebuffSound;                                                     // 0x0300 (size: 0x8)
    bool bIsExploded;                                                                 // 0x0310 (size: 0x1)
    class UStaticMesh* DestroyedMesh;                                                 // 0x0318 (size: 0x8)
    class UNiagaraSystem* ExplosionFX;                                                // 0x0320 (size: 0x8)
    class USoundCue* ExplosionSound;                                                  // 0x0328 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> ExplosionCameraShake;                         // 0x0330 (size: 0x8)

    void OnRep_NumDebuffs();
    void OnRep_NumBuffs();
    void OnRep_IsExploded();
}; // Size: 0x338

class ACrabTurret : public AActor
{
    class UStaticMeshComponent* BaseMesh;                                             // 0x0228 (size: 0x8)
    class UStaticMeshComponent* TurretMesh;                                           // 0x0230 (size: 0x8)
    class UNiagaraComponent* TurretNC;                                                // 0x0238 (size: 0x8)
    class UCrabHC* HC;                                                                // 0x0240 (size: 0x8)
    class UWidgetComponent* HealthBarWC;                                              // 0x0248 (size: 0x8)
    FName MuzzleSocketName;                                                           // 0x0250 (size: 0x8)
    class UNiagaraComponent* MuzzleFlashNC;                                           // 0x0258 (size: 0x8)
    class UAudioComponent* GunshotAC;                                                 // 0x0260 (size: 0x8)
    ECrabTurretType TurretType;                                                       // 0x0268 (size: 0x1)
    FLinearColor Tint;                                                                // 0x026C (size: 0x10)
    class UStaticMesh* BaseMeshToSpawn;                                               // 0x0280 (size: 0x8)
    class UStaticMesh* TurretMeshToSpawn;                                             // 0x0288 (size: 0x8)
    class UNiagaraSystem* FX;                                                         // 0x0290 (size: 0x8)
    class ACrabC* OwningC;                                                            // 0x0298 (size: 0x8)
    float SearchFrequency;                                                            // 0x02A0 (size: 0x4)
    float HealthReductionScale;                                                       // 0x02A4 (size: 0x4)
    float FireRate;                                                                   // 0x02AC (size: 0x4)
    TSubclassOf<class UCrabHealthBarUI> HealthBarUIToSpawn;                           // 0x02B8 (size: 0x8)
    float HealthBarHeightOffset;                                                      // 0x02C0 (size: 0x4)
    FString TurretName;                                                               // 0x02C8 (size: 0x10)
    class UNiagaraSystem* MuzzleFlashFX;                                              // 0x02D8 (size: 0x8)
    class USoundCue* GunshotSound;                                                    // 0x02E0 (size: 0x8)
    float TurretRotationSpeed;                                                        // 0x02E8 (size: 0x4)
    class ACrabC* BestEnemyC;                                                         // 0x02F8 (size: 0x8)
    float SearchRange;                                                                // 0x0300 (size: 0x4)
    float Spread;                                                                     // 0x0310 (size: 0x4)
    class UCrabProjectileDA* ProjectileDA;                                            // 0x0318 (size: 0x8)
    FCrabDebuff Debuff;                                                               // 0x0320 (size: 0x8)
    bool bIsExploded;                                                                 // 0x0328 (size: 0x1)
    class UNiagaraSystem* ExplosionFX;                                                // 0x0330 (size: 0x8)
    class USoundCue* ExplosionSound;                                                  // 0x0338 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> ExplosionCameraShake;                         // 0x0340 (size: 0x8)

    void OnRep_OwningC();
    void OnRep_IsExploded();
}; // Size: 0x348

class ACrabWeapon : public AActor
{
    class UStaticMeshComponent* Mesh;                                                 // 0x0220 (size: 0x8)
    class UNiagaraComponent* CosmeticNC;                                              // 0x0228 (size: 0x8)
    class UNiagaraComponent* MuzzleFlashNC;                                           // 0x0238 (size: 0x8)
    class ACrabPS* OwningPS;                                                          // 0x0240 (size: 0x8)
    FCrabWeaponInfo WeaponInfo;                                                       // 0x0248 (size: 0x18)
    class UCrabWeaponDA* WeaponDA;                                                    // 0x0260 (size: 0x8)
    class ACrabC* OwningC;                                                            // 0x0268 (size: 0x8)
    class ACrabPC* OwningPC;                                                          // 0x0270 (size: 0x8)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x0280 (size: 0x10)
    int32 TimesFired;                                                                 // 0x0338 (size: 0x4)
    bool bIsReloading;                                                                // 0x0370 (size: 0x1)

    void ServerTriggerOnReloadWeaponMods();
    void ServerSetIsReloading(bool bNewIsReloading);
    void ServerPlayStartFireFX();
    void OnRep_WeaponInfo();
    void OnRep_TimesFired();
    void OnRep_OwningPS();
    void OnRep_IsReloading();
}; // Size: 0x3A0

class ICrabDamageInterface : public IInterface
{
}; // Size: 0x28

class ICrabOverlapInterface : public IInterface
{
}; // Size: 0x28

class UCrabAOEActionDA : public UCrabActionDA
{
    class UCrabAOEDA* AOEDA;                                                          // 0x0068 (size: 0x8)

}; // Size: 0x70

class UCrabAOEDA : public UDataAsset
{
    FName SocketName;                                                                 // 0x0030 (size: 0x8)
    float Radius;                                                                     // 0x0038 (size: 0x4)
    float Damage;                                                                     // 0x003C (size: 0x4)
    ECrabDamageType DamageType;                                                       // 0x0040 (size: 0x1)
    float KnockbackStrength;                                                          // 0x0044 (size: 0x4)
    TSubclassOf<class ACrabDamageArea> DamageAreaToSpawn;                             // 0x0048 (size: 0x8)
    class UNiagaraSystem* AOEFX;                                                      // 0x0050 (size: 0x8)
    class USoundCue* AOESound;                                                        // 0x0058 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> CameraShake;                                  // 0x0060 (size: 0x8)

}; // Size: 0x68

class UCrabAbilityDA : public UCrabPickupDA
{
    class UCrabProjectileDA* ProjectileDA;                                            // 0x00B0 (size: 0x8)
    ECrabHitmarkerType HitmarkerType;                                                 // 0x00B8 (size: 0x1)
    ECrabAbilitySpawnType AbilitySpawnType;                                           // 0x00B9 (size: 0x1)
    float AbilitySpawnDelay;                                                          // 0x00BC (size: 0x4)
    float Cooldown;                                                                   // 0x00C0 (size: 0x4)
    class UAnimMontage* Montage;                                                      // 0x00C8 (size: 0x8)
    class UNiagaraSystem* AbilityTelegraphFX;                                         // 0x00D0 (size: 0x8)
    class USoundCue* AbilityTelegraphSound;                                           // 0x00D8 (size: 0x8)

}; // Size: 0xE0

class UCrabAbilityModDA : public UCrabInventoryDA
{
    ECrabAbilityModType AbilityModType;                                               // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UCrabActionDA : public UDataAsset
{
    float Range;                                                                      // 0x0030 (size: 0x4)
    bool bRequiresLOS;                                                                // 0x0034 (size: 0x1)
    bool bMustBeGrounded;                                                             // 0x0035 (size: 0x1)
    float Weight;                                                                     // 0x0038 (size: 0x4)
    bool bStopMovementDuringAction;                                                   // 0x003C (size: 0x1)
    bool bClearFocusDuringAction;                                                     // 0x003D (size: 0x1)
    float LoopingActionInterval;                                                      // 0x0040 (size: 0x4)
    class UAnimMontage* Montage;                                                      // 0x0048 (size: 0x8)
    FName FXSocketName;                                                               // 0x0050 (size: 0x8)
    class UNiagaraSystem* FX;                                                         // 0x0058 (size: 0x8)
    class USoundCue* Sound;                                                           // 0x0060 (size: 0x8)

}; // Size: 0x68

class UCrabAnimInstance : public UAnimInstance
{
    class ACrabC* OwningC;                                                            // 0x02B8 (size: 0x8)
    float Pitch;                                                                      // 0x02C0 (size: 0x4)
    float Direction;                                                                  // 0x02C4 (size: 0x4)
    float Speed;                                                                      // 0x02C8 (size: 0x4)
    bool bIsFalling;                                                                  // 0x02CC (size: 0x1)
    bool bIsKnockedBack;                                                              // 0x02CD (size: 0x1)

}; // Size: 0x2D0

class UCrabArrowSelectionUI : public UCrabUI
{
    class UTextBlock* CurrentSelectionText;                                           // 0x02D8 (size: 0x8)
    class UButton* NextButton;                                                        // 0x02E0 (size: 0x8)
    class UButton* PreviousButton;                                                    // 0x02E8 (size: 0x8)

    void OnPressedPreviousButton();
    void OnPressedNextButton();
    void OnHoveredPreviousButton();
    void OnHoveredNextButton();
}; // Size: 0x308

class UCrabBiomeDA : public UDataAsset
{
    ECrabBiome Biome;                                                                 // 0x0030 (size: 0x1)
    TArray<FCrabIsland> ArenaIslands;                                                 // 0x0038 (size: 0x10)
    TArray<FCrabIsland> HordeIslands;                                                 // 0x0048 (size: 0x10)
    TArray<FCrabIsland> ParkourIslands;                                               // 0x0058 (size: 0x10)
    TArray<FCrabIsland> ShopIslands;                                                  // 0x0068 (size: 0x10)
    TArray<class TSubclassOf<ACrabEnemyC>> Enemies;                                   // 0x0078 (size: 0x10)
    TArray<class TSubclassOf<ACrabDestructible>> CombatDestructibles;                 // 0x0088 (size: 0x10)
    TArray<class TSubclassOf<ACrabDestructible>> RewardDestructibles;                 // 0x0098 (size: 0x10)
    TArray<class TSubclassOf<ACrabDestructible>> PhysicsDestructibles;                // 0x00A8 (size: 0x10)
    class UNiagaraSystem* AmbienceFX;                                                 // 0x00B8 (size: 0x8)
    class USoundCue* AmbienceSound;                                                   // 0x00C0 (size: 0x8)
    class UNiagaraSystem* UnderwaterFX;                                               // 0x00C8 (size: 0x8)
    class UNiagaraSystem* SmallOceanImpactFX;                                         // 0x00D0 (size: 0x8)
    class USoundCue* SmallOceanImpactSound;                                           // 0x00D8 (size: 0x8)
    class UNiagaraSystem* LargeOceanImpactFX;                                         // 0x00E0 (size: 0x8)
    class USoundCue* LargeOceanImpactSound;                                           // 0x00E8 (size: 0x8)
    float UnderwaterSpeedMultiplier;                                                  // 0x00F0 (size: 0x4)
    FCrabDebuff UnderwaterDebuff;                                                     // 0x00F4 (size: 0x8)
    class USoundCue* MusicPlaylist;                                                   // 0x0100 (size: 0x8)
    class USoundCue* ShopMusic;                                                       // 0x0108 (size: 0x8)

}; // Size: 0x110

class UCrabBlessingUI : public UCrabUI
{
    class UTextBlock* BlessingText;                                                   // 0x02B8 (size: 0x8)
    class UTextBlock* BlessingDescriptionText;                                        // 0x02C0 (size: 0x8)
    class UTextBlock* BlessingGoalText;                                               // 0x02C8 (size: 0x8)

}; // Size: 0x2D0

class UCrabCMC : public UCharacterMovementComponent
{
    FClientAuthoritativeMoveData ServerLatestMoveData;                                // 0x0AF8 (size: 0x50)

}; // Size: 0xB50

class UCrabChallengeModifierUI : public UCrabUI
{
    class UTextBlock* ChallengeModifierText;                                          // 0x02B8 (size: 0x8)
    class UTextBlock* ChallengeModifierDescriptionText;                               // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

class UCrabChatEntryRowUI : public UCrabUI
{
    class UTextBlock* PlayerNameText;                                                 // 0x02B8 (size: 0x8)
    class UTextBlock* ChatMessageText;                                                // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

class UCrabConfirmationPromptUI : public UCrabFocusMenuUI
{
    class UTextBlock* ConfirmationPromptMessageText;                                  // 0x03E0 (size: 0x8)
    class UButton* YesButton;                                                         // 0x03E8 (size: 0x8)
    class UButton* NoButton;                                                          // 0x03F0 (size: 0x8)

    void OnPressedYesButton();
    void OnPressedNoButton();
    void OnHoveredYesButton();
    void OnHoveredNoButton();
}; // Size: 0x410

class UCrabConsumableDA : public UCrabPickupDA
{
    ECrabConsumableType ConsumableType;                                               // 0x00B0 (size: 0x1)
    float Buff;                                                                       // 0x00B4 (size: 0x4)

}; // Size: 0xB8

class UCrabControlsMenuUI : public UCrabUI
{
    TArray<class UWidget*> ControlsMenuFocusableWidgetArray;                          // 0x02B8 (size: 0x10)
    class UCrabSliderUI* LookSensitivitySlider;                                       // 0x02C8 (size: 0x8)
    class UCrabSliderUI* AimingSensitivityMultiplierSlider;                           // 0x02D0 (size: 0x8)
    class UCrabArrowSelectionUI* VerticalLookInversionAS;                             // 0x02D8 (size: 0x8)
    class UCrabArrowSelectionUI* AimAssistStrengthAS;                                 // 0x02E0 (size: 0x8)
    class UCrabArrowSelectionUI* AutoSlideAS;                                         // 0x02E8 (size: 0x8)
    TSubclassOf<class UCrabKeyBindRowUI> KeyBindRowUIToSpawn;                         // 0x02F0 (size: 0x8)
    class UVerticalBox* ControlsVerticalBox;                                          // 0x02F8 (size: 0x8)
    TArray<FCrabKeyBind> CurrentKeyBinds;                                             // 0x0300 (size: 0x10)
    TArray<class UCrabKeyBindRowUI*> KeyBindRows;                                     // 0x0310 (size: 0x10)

}; // Size: 0x320

class UCrabCosmeticSlotUI : public UCrabUI
{
    FCrabChallenge ChallengeToUnlock;                                                 // 0x02B8 (size: 0x50)
    class UCrabCosmeticsMenuUI* OwningCosmeticsMenuUI;                                // 0x0308 (size: 0x8)
    class UButton* SlotButton;                                                        // 0x0310 (size: 0x8)
    class UImage* SlotIconImage;                                                      // 0x0318 (size: 0x8)
    class UOverlay* SlotLockedOverlay;                                                // 0x0320 (size: 0x8)
    class UBorder* SlotSelectedBorder;                                                // 0x0328 (size: 0x8)

    void OnPressedSlotButton();
    void OnHoveredSlotButton();
}; // Size: 0x330

class UCrabCosmeticsDA : public UDataAsset
{
    TArray<FCrabCosmetic> CrabSkins;                                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

class UCrabCosmeticsMenuUI : public UCrabFocusMenuUI
{
    class ACrabCosmeticC* CosmeticC;                                                  // 0x03E0 (size: 0x8)
    TSubclassOf<class UCrabCosmeticSlotUI> CosmeticSlotUIToSpawn;                     // 0x03E8 (size: 0x8)
    class UUniformGridPanel* CosmeticsUniformGridPanel;                               // 0x03F0 (size: 0x8)
    class UButton* CrabSkinsButton;                                                   // 0x03F8 (size: 0x8)
    class UButton* WeaponSkinsButton;                                                 // 0x0400 (size: 0x8)
    class UCrabCosmeticSlotUI* SelectedCosmeticSlotUI;                                // 0x0408 (size: 0x8)
    class UTextBlock* CosmeticNameText;                                               // 0x0410 (size: 0x8)
    class UTextBlock* ChallengeDescriptionText;                                       // 0x0418 (size: 0x8)
    class UTextBlock* ChallengeProgressText;                                          // 0x0420 (size: 0x8)
    class UTextBlock* ChallengeGoalText;                                              // 0x0428 (size: 0x8)
    class UProgressBar* ChallengePB;                                                  // 0x0430 (size: 0x8)

    void OnPressedWeaponSkinsButton();
    void OnPressedCrabSkinsButton();
}; // Size: 0x438

class UCrabCrosshairUI : public UCrabUI
{
    class UMaterialInterface* CrossMat;                                               // 0x02B8 (size: 0x8)
    class UMaterialInterface* CircleMat;                                              // 0x02C0 (size: 0x8)
    class UMaterialInterface* BrokenCircleMat;                                        // 0x02C8 (size: 0x8)
    class UMaterialInterface* DotMat;                                                 // 0x02D0 (size: 0x8)
    class ACrabPlayerC* OwningC;                                                      // 0x02D8 (size: 0x8)
    class ACrabWeapon* EquippedWeapon;                                                // 0x02E0 (size: 0x8)
    class UImage* CrosshairImage;                                                     // 0x02E8 (size: 0x8)
    class UMaterialInstanceDynamic* CrosshairMI;                                      // 0x02F0 (size: 0x8)
    class UImage* HitmarkerImage;                                                     // 0x0308 (size: 0x8)
    class UWidgetAnimation* GenericHitmarkerAnim;                                     // 0x0310 (size: 0x8)
    class UWidgetAnimation* ArmorBreakHitmarkerAnim;                                  // 0x0318 (size: 0x8)
    class UWidgetAnimation* EliminationHitmarkerAnim;                                 // 0x0320 (size: 0x8)
    class UOverlay* ReloadProgressOverlay;                                            // 0x0328 (size: 0x8)
    class UImage* ReloadProgressImage;                                                // 0x0330 (size: 0x8)
    class UMaterialInstanceDynamic* ReloadProgressMI;                                 // 0x0338 (size: 0x8)

}; // Size: 0x348

class UCrabDamageTextUI : public UUserWidget
{
    class UScaleBox* DamageTextScaleBox;                                              // 0x0260 (size: 0x8)
    class UTextBlock* DamageText;                                                     // 0x0268 (size: 0x8)
    class UWidgetAnimation* DamageTextAnim;                                           // 0x0270 (size: 0x8)

}; // Size: 0x278

class UCrabDifficultyMenuUI : public UCrabFocusMenuUI
{
    class UTextBlock* DifficultyLevelText;                                            // 0x03E0 (size: 0x8)
    class UVerticalBox* BronzeVerticalBox;                                            // 0x03E8 (size: 0x8)
    class UVerticalBox* SilverVerticalBox;                                            // 0x03F0 (size: 0x8)
    class UVerticalBox* GoldVerticalBox;                                              // 0x03F8 (size: 0x8)
    class UVerticalBox* SapphireVerticalBox;                                          // 0x0400 (size: 0x8)
    class UVerticalBox* EmeraldVerticalBox;                                           // 0x0408 (size: 0x8)
    class UVerticalBox* RubyVerticalBox;                                              // 0x0410 (size: 0x8)
    class UVerticalBox* DiamondVerticalBox;                                           // 0x0418 (size: 0x8)
    class UVerticalBox* PrismaticVerticalBox;                                         // 0x0420 (size: 0x8)
    class UVerticalBox* CurrentDifficultyVerticalBox;                                 // 0x0428 (size: 0x8)
    class UVerticalBox* GreenDifficultyModifiersVerticalBox;                          // 0x0430 (size: 0x8)
    TSubclassOf<class UCrabDifficultyModifierUI> GreenDifficultyModifierUIToSpawn;    // 0x0438 (size: 0x8)
    class UVerticalBox* RedDifficultyModifiersVerticalBox;                            // 0x0440 (size: 0x8)
    TSubclassOf<class UCrabDifficultyModifierUI> RedDifficultyModifierUIToSpawn;      // 0x0448 (size: 0x8)
    class UVerticalBox* FlexVerticalBox;                                              // 0x0450 (size: 0x8)
    class UVerticalBox* FlexDifficultyModifiersVerticalBox;                           // 0x0458 (size: 0x8)
    TSubclassOf<class UCrabDifficultyModifierUI> FlexDifficultyModifierUIToSpawn;     // 0x0460 (size: 0x8)

}; // Size: 0x468

class UCrabDifficultyModifierUI : public UCrabUI
{
    class UCrabDifficultyMenuUI* OwningDifficultyMenuUI;                              // 0x02B8 (size: 0x8)
    class UOverlay* DifficultyModifierOverlay;                                        // 0x02C8 (size: 0x8)
    class UButton* DifficultyModifierButton;                                          // 0x02D0 (size: 0x8)
    class UTextBlock* DifficultyModifierNameText;                                     // 0x02D8 (size: 0x8)
    class UTextBlock* DifficultyModifierDescriptionText;                              // 0x02E0 (size: 0x8)
    class UOverlay* DifficultyLevelOverlay;                                           // 0x02E8 (size: 0x8)
    class UTextBlock* DifficultyLevelText;                                            // 0x02F0 (size: 0x8)
    class UOverlay* LockedDifficultyModifierOverlay;                                  // 0x02F8 (size: 0x8)
    class UTextBlock* LockedDifficultyModifierText;                                   // 0x0300 (size: 0x8)

    void OnPressedDifficultyModifierButton();
    void OnHoveredDifficultyModifierButton();
}; // Size: 0x308

class UCrabEnemyAnimInstance : public UCrabAnimInstance
{
    class ACrabEnemyC* OwningEnemyC;                                                  // 0x02D0 (size: 0x8)
    float RandomAnimOffset;                                                           // 0x02D8 (size: 0x4)

    void AnimNotify_Action();
}; // Size: 0x2E0

class UCrabEnemyEQC : public UEnvQueryContext
{
    ECrabEQCType EQCType;                                                             // 0x0028 (size: 0x1)

}; // Size: 0x30

class UCrabEnhancementUI : public UCrabUI
{
    class UImage* IconImage;                                                          // 0x02B8 (size: 0x8)
    class UTextBlock* NameText;                                                       // 0x02C0 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x02C8 (size: 0x8)
    class UBorder* RarityBorder;                                                      // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class UCrabFireWeaponActionDA : public UCrabActionDA
{
    ECrabTargetType TargetType;                                                       // 0x0068 (size: 0x1)
    float Spread;                                                                     // 0x006C (size: 0x4)

}; // Size: 0x70

class UCrabFocusMenuUI : public UCrabUI
{
    class UWidgetSwitcher* MenuWidgetSwitcher;                                        // 0x02C0 (size: 0x8)
    TArray<class UWidget*> FocusableWidgetArray;                                      // 0x02C8 (size: 0x10)
    class ACrabPC* OwningPC;                                                          // 0x02D8 (size: 0x8)
    class UWidget* PreviouslyFocusedWidget;                                           // 0x0350 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0358 (size: 0x8)
    class UButton* ResetFocusButton;                                                  // 0x0360 (size: 0x8)
    class USoundCue* HoverSound;                                                      // 0x0368 (size: 0x8)
    class USoundCue* PressSound;                                                      // 0x0370 (size: 0x8)
    class UTextBlock* MenuActionKeyText;                                              // 0x0378 (size: 0x8)
    class UImage* MenuActionControllerIcon;                                           // 0x0380 (size: 0x8)
    class UTextBlock* MenuBackKeyText;                                                // 0x0388 (size: 0x8)
    class UImage* MenuBackControllerIcon;                                             // 0x0390 (size: 0x8)
    class UTextBlock* NextSubmenuKeyText;                                             // 0x0398 (size: 0x8)
    class UImage* NextSubmenuIcon;                                                    // 0x03A0 (size: 0x8)
    class UTextBlock* PreviousSubmenuKeyText;                                         // 0x03A8 (size: 0x8)
    class UImage* PreviousSubmenuIcon;                                                // 0x03B0 (size: 0x8)
    class UHorizontalBox* SubmenuHorizontalBox;                                       // 0x03B8 (size: 0x8)
    class UHorizontalBox* ButtonsHorizontalBox;                                       // 0x03C8 (size: 0x8)
    class UButton* ActionButton;                                                      // 0x03D0 (size: 0x8)
    class UButton* BackButton;                                                        // 0x03D8 (size: 0x8)

    void OnPressedResetFocusButton();
    void OnPressedBackButton();
    void OnPressedActionButton();
}; // Size: 0x3E0

class UCrabGI : public UGameInstance
{
    TSubclassOf<class UUserWidget> LoadingScreenUIToSpawn;                            // 0x01A8 (size: 0x8)
    class UUserWidget* LoadingScreenUI;                                               // 0x01B0 (size: 0x8)
    class UCrabSG* SG;                                                                // 0x0228 (size: 0x8)
    class UCrabSettingsSG* SettingsSG;                                                // 0x0240 (size: 0x8)
    int32 CrabChampionsVersion;                                                       // 0x024C (size: 0x4)
    TArray<FCrabKeyBind> CrabKeyBinds;                                                // 0x0250 (size: 0x10)
    class UTexture2D* BackButton;                                                     // 0x0260 (size: 0x8)
    class UTexture2D* BumperL;                                                        // 0x0268 (size: 0x8)
    class UTexture2D* BumperR;                                                        // 0x0270 (size: 0x8)
    class UTexture2D* ButtonD;                                                        // 0x0278 (size: 0x8)
    class UTexture2D* ButtonL;                                                        // 0x0280 (size: 0x8)
    class UTexture2D* ButtonR;                                                        // 0x0288 (size: 0x8)
    class UTexture2D* ButtonU;                                                        // 0x0290 (size: 0x8)
    class UTexture2D* DPadD;                                                          // 0x0298 (size: 0x8)
    class UTexture2D* DPadL;                                                          // 0x02A0 (size: 0x8)
    class UTexture2D* DPadR;                                                          // 0x02A8 (size: 0x8)
    class UTexture2D* DPadU;                                                          // 0x02B0 (size: 0x8)
    class UTexture2D* StartButton;                                                    // 0x02B8 (size: 0x8)
    class UTexture2D* StickL;                                                         // 0x02C0 (size: 0x8)
    class UTexture2D* StickLHorizontal;                                               // 0x02C8 (size: 0x8)
    class UTexture2D* StickLVertical;                                                 // 0x02D0 (size: 0x8)
    class UTexture2D* StickR;                                                         // 0x02D8 (size: 0x8)
    class UTexture2D* StickRHorizontal;                                               // 0x02E0 (size: 0x8)
    class UTexture2D* StickRVertical;                                                 // 0x02E8 (size: 0x8)
    class UTexture2D* TriggerL;                                                       // 0x02F0 (size: 0x8)
    class UTexture2D* TriggerR;                                                       // 0x02F8 (size: 0x8)
    class USoundClass* MasterSoundClass;                                              // 0x0300 (size: 0x8)
    class USoundMix* MasterSoundMix;                                                  // 0x0308 (size: 0x8)
    class USoundClass* GameplaySoundClass;                                            // 0x0310 (size: 0x8)
    class USoundMix* GameplaySoundMix;                                                // 0x0318 (size: 0x8)
    class USoundClass* MusicSoundClass;                                               // 0x0320 (size: 0x8)
    class USoundMix* MusicSoundMix;                                                   // 0x0328 (size: 0x8)
    class UCrabCosmeticsDA* CosmeticsDA;                                              // 0x0330 (size: 0x8)
    TArray<FCrabChallenge> Challenges;                                                // 0x0338 (size: 0x10)
    bool bDebugUnlockAllContent;                                                      // 0x0348 (size: 0x1)
    FCrabAutoSave DebugAutoSave;                                                      // 0x0350 (size: 0x168)

    void OnStreamLevelUnloaded();
    void OnStreamLevelLoaded();
}; // Size: 0x820

class UCrabGameOverRowUI : public UCrabUI
{
    class UImage* MVPCrownImage;                                                      // 0x02B8 (size: 0x8)
    class UTextBlock* PlayerNameText;                                                 // 0x02C0 (size: 0x8)
    class UTextBlock* DamageDealtText;                                                // 0x02C8 (size: 0x8)
    class UTextBlock* EliminationsText;                                               // 0x02D0 (size: 0x8)
    class UTextBlock* DamageTakenText;                                                // 0x02D8 (size: 0x8)
    class UTextBlock* FlawlessIslandsText;                                            // 0x02E0 (size: 0x8)

}; // Size: 0x2E8

class UCrabGameOverUI : public UCrabFocusMenuUI
{
    class UTextBlock* RunResultText;                                                  // 0x03E0 (size: 0x8)
    class UTextBlock* DifficultyText;                                                 // 0x03E8 (size: 0x8)
    class UTextBlock* AttemptsText;                                                   // 0x03F0 (size: 0x8)
    class UTextBlock* WinsText;                                                       // 0x03F8 (size: 0x8)
    class UTextBlock* WinStreakText;                                                  // 0x0400 (size: 0x8)
    class UTextBlock* IslandsSurvivedText;                                            // 0x0408 (size: 0x8)
    class UTextBlock* HighestIslandReachedText;                                       // 0x0410 (size: 0x8)
    class UTextBlock* TotalTimeTakenText;                                             // 0x0418 (size: 0x8)
    class UVerticalBox* GameOverRowUIVerticalBox;                                     // 0x0420 (size: 0x8)
    TSubclassOf<class UCrabGameOverRowUI> GameOverRowUIToSpawn;                       // 0x0428 (size: 0x8)
    TArray<FCrabChallenge> CompletedChallenges;                                       // 0x0430 (size: 0x10)
    TSubclassOf<class UCrabUnlockedCosmeticUI> UnlockedCosmeticUIToSpawn;             // 0x0448 (size: 0x8)
    class UHorizontalBox* UnlockedCosmeticsHorizontalBox;                             // 0x0450 (size: 0x8)
    class UTextBlock* RankedUpWeaponText;                                             // 0x0458 (size: 0x8)
    class UImage* RankedUpWeaponMedalIconImage;                                       // 0x0460 (size: 0x8)
    class UTextBlock* RankedUpWeaponRankText;                                         // 0x0468 (size: 0x8)
    class UWidgetAnimation* RankedUpWeaponAnim;                                       // 0x0470 (size: 0x8)
    class UTextBlock* RankedUpAbilityText;                                            // 0x0478 (size: 0x8)
    class UImage* RankedUpAbilityMedalIconImage;                                      // 0x0480 (size: 0x8)
    class UTextBlock* RankedUpAbilityRankText;                                        // 0x0488 (size: 0x8)
    class UWidgetAnimation* RankedUpAbilityAnim;                                      // 0x0490 (size: 0x8)
    class UTextBlock* RankedUpMeleeWeaponText;                                        // 0x0498 (size: 0x8)
    class UImage* RankedUpMeleeWeaponMedalIconImage;                                  // 0x04A0 (size: 0x8)
    class UTextBlock* RankedUpMeleeWeaponRankText;                                    // 0x04A8 (size: 0x8)
    class UWidgetAnimation* RankedUpMeleeWeaponAnim;                                  // 0x04B0 (size: 0x8)

}; // Size: 0x4B8

class UCrabGameStateUI : public UCrabUI
{
    class UVerticalBox* PlayerStateUIVerticalBox;                                     // 0x02B8 (size: 0x8)
    TSubclassOf<class UCrabPlayerStateUI> PlayerStateUIToSpawn;                       // 0x02C0 (size: 0x8)
    class UWidgetAnimation* InitAnim;                                                 // 0x02C8 (size: 0x8)
    class UTextBlock* CurrentTimeText;                                                // 0x02D0 (size: 0x8)
    class UVerticalBox* CountdownVerticalBox;                                         // 0x02E0 (size: 0x8)
    class UTextBlock* CountdownMessageText;                                           // 0x02E8 (size: 0x8)
    class UTextBlock* CountdownTime;                                                  // 0x02F0 (size: 0x8)
    class UWidgetAnimation* CountdownAnim;                                            // 0x02F8 (size: 0x8)
    class UHorizontalBox* IslandProgressionHorizontalBox;                             // 0x0300 (size: 0x8)
    class UTexture2D* RandomIslandsIcon;                                              // 0x0308 (size: 0x8)
    class UTextBlock* CurrentIslandText;                                              // 0x0310 (size: 0x8)
    class UTextBlock* DifficultyText;                                                 // 0x0318 (size: 0x8)
    class UTextBlock* GameplayMessageText;                                            // 0x0320 (size: 0x8)
    class UWidgetAnimation* GameplayMessageAnim;                                      // 0x0328 (size: 0x8)
    class UVerticalBox* ChatVerticalBox;                                              // 0x0330 (size: 0x8)
    class UVerticalBox* ChatEntriesVerticalBox;                                       // 0x0338 (size: 0x8)
    TSubclassOf<class UCrabChatEntryRowUI> ChatEntryRowUIToSpawn;                     // 0x0340 (size: 0x8)
    TArray<class UCrabChatEntryRowUI*> ChatEntryRows;                                 // 0x0348 (size: 0x10)
    class UEditableTextBox* ChatInputEditableTextBox;                                 // 0x0358 (size: 0x8)
    class USoundCue* ReceivedChatSound;                                               // 0x0360 (size: 0x8)
    class UTextBlock* BiomeText;                                                      // 0x0370 (size: 0x8)
    class UTextBlock* IslandTypeText;                                                 // 0x0378 (size: 0x8)
    class UTextBlock* IslandDescriptionText;                                          // 0x0380 (size: 0x8)
    class UWidgetAnimation* IslandIntroductionAnim;                                   // 0x0388 (size: 0x8)
    class USoundCue* CountdownSound;                                                  // 0x0390 (size: 0x8)
    class UVerticalBox* ObjectiveVerticalBox;                                         // 0x0398 (size: 0x8)
    class UTextBlock* ObjectiveGoalText;                                              // 0x03A0 (size: 0x8)
    class UWidgetAnimation* OnUpdatedObjectiveGoalAnim;                               // 0x03A8 (size: 0x8)
    class UTextBlock* ObjectiveText;                                                  // 0x03B0 (size: 0x8)
    class UHorizontalBox* IslandRewardHorizontalBox;                                  // 0x03B8 (size: 0x8)
    class UTextBlock* IslandRewardText;                                               // 0x03C0 (size: 0x8)
    class UWidgetAnimation* OnUpdatedIslandRewardRarityAnim;                          // 0x03C8 (size: 0x8)
    class UVerticalBox* CountdownDifficultyModifierVerticalBox;                       // 0x03D0 (size: 0x8)
    class UTextBlock* CountdownDifficultyModifierText;                                // 0x03D8 (size: 0x8)
    class UWidgetAnimation* OnUpdatedCountdownDifficultyModifierAnim;                 // 0x03E0 (size: 0x8)
    class USoundCue* CountdownWarningSound;                                           // 0x03E8 (size: 0x8)
    class UVerticalBox* SpectatingVerticalBox;                                        // 0x03F0 (size: 0x8)
    class UTextBlock* SpectatingPlayerNameText;                                       // 0x03F8 (size: 0x8)
    class UHorizontalBox* MinigameHorizontalBox;                                      // 0x0400 (size: 0x8)
    class UTextBlock* MinigameScoreTitleText;                                         // 0x0408 (size: 0x8)
    class UTextBlock* MinigameScoreText;                                              // 0x0410 (size: 0x8)
    class UWidgetAnimation* OnUpdatedMinigameScoreAnim;                               // 0x0418 (size: 0x8)
    class UTextBlock* MinigameHighScoreTitleText;                                     // 0x0420 (size: 0x8)
    class UTextBlock* MinigameHighScoreText;                                          // 0x0428 (size: 0x8)

    void OnChatTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
}; // Size: 0x430

class UCrabGameplayUI : public UCrabUI
{
    class ACrabPlayerC* OwningC;                                                      // 0x02B8 (size: 0x8)
    class ACrabPS* OwningPS;                                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* InitAnim;                                                 // 0x02C8 (size: 0x8)
    class UWidgetAnimation* OnArmorBreakAnim;                                         // 0x02D0 (size: 0x8)
    class UWidgetAnimation* OnTookDamageAnim;                                         // 0x02D8 (size: 0x8)
    class UTextBlock* EliminatedByText;                                               // 0x02E0 (size: 0x8)
    class UWidgetAnimation* EliminatedByAnim;                                         // 0x02E8 (size: 0x8)
    class UCrabCrosshairUI* CrosshairUI;                                              // 0x02F0 (size: 0x8)
    class UCrabHealthBarUI* HealthBarUI;                                              // 0x02F8 (size: 0x8)
    class UTextBlock* ComboText;                                                      // 0x0300 (size: 0x8)
    class UWidgetAnimation* OnUpdatedComboSmallAnim;                                  // 0x0308 (size: 0x8)
    class UWidgetAnimation* OnUpdatedComboLargeAnim;                                  // 0x0310 (size: 0x8)
    class UTextBlock* CrystalsText;                                                   // 0x0340 (size: 0x8)
    class UTextBlock* CrystalsDifferenceText;                                         // 0x0348 (size: 0x8)
    class UWidgetAnimation* OnUpdatedCrystalsAnim;                                    // 0x0350 (size: 0x8)
    class UTextBlock* KeysText;                                                       // 0x0370 (size: 0x8)
    class UTextBlock* KeysDifferenceText;                                             // 0x0378 (size: 0x8)
    class UWidgetAnimation* OnUpdatedKeysAnim;                                        // 0x0380 (size: 0x8)
    class UTextBlock* CrabChampionsVersionText;                                       // 0x0398 (size: 0x8)
    class UVerticalBox* FPSVerticalBox;                                               // 0x03A0 (size: 0x8)
    class UTextBlock* FPSText;                                                        // 0x03A8 (size: 0x8)
    class UTextBlock* PingText;                                                       // 0x03B0 (size: 0x8)
    class ACrabWeapon* EquippedWeapon;                                                // 0x03B8 (size: 0x8)
    class UImage* ScopeImage;                                                         // 0x03C0 (size: 0x8)
    class UWidgetAnimation* OnStartedScopeAimingAnim;                                 // 0x03C8 (size: 0x8)
    class UWidgetAnimation* OnStoppedScopeAimingAnim;                                 // 0x03D0 (size: 0x8)
    class UTextBlock* CurrentAmmoText;                                                // 0x03D8 (size: 0x8)
    class UTextBlock* DualWieldCurrentAmmoText;                                       // 0x03E0 (size: 0x8)
    class UTextBlock* WeaponNameText;                                                 // 0x03E8 (size: 0x8)
    class UTextBlock* AbilityKeyText;                                                 // 0x03F0 (size: 0x8)
    class UImage* AbilityControllerIcon;                                              // 0x03F8 (size: 0x8)
    class UImage* AbilityIcon;                                                        // 0x0400 (size: 0x8)
    class UTextBlock* AbilityCooldownText;                                            // 0x0408 (size: 0x8)
    class UWidgetAnimation* OnAbilityCooldownExpiredAnim;                             // 0x0410 (size: 0x8)
    class UTextBlock* AbilityStackText;                                               // 0x0418 (size: 0x8)
    class UTextBlock* MeleeKeyText;                                                   // 0x0420 (size: 0x8)
    class UImage* MeleeControllerIcon;                                                // 0x0428 (size: 0x8)
    class UImage* MeleeIcon;                                                          // 0x0430 (size: 0x8)
    class UTextBlock* MeleeCooldownText;                                              // 0x0438 (size: 0x8)
    class UWidgetAnimation* OnMeleeCooldownExpiredAnim;                               // 0x0440 (size: 0x8)
    class UTextBlock* InventoryKeyText;                                               // 0x0448 (size: 0x8)
    class UImage* InventoryControllerIcon;                                            // 0x0450 (size: 0x8)
    class UBorder* NewPickupBorder;                                                   // 0x0458 (size: 0x8)
    class UTextBlock* NewPickupNameText;                                              // 0x0460 (size: 0x8)
    class UImage* NewPickupIcon;                                                      // 0x0468 (size: 0x8)
    class UTextBlock* NewPickupDescriptionText;                                       // 0x0470 (size: 0x8)
    class UTextBlock* NewPickupTypeText;                                              // 0x0478 (size: 0x8)
    class UTextBlock* NewPickupLevelText;                                             // 0x0480 (size: 0x8)
    class UWidgetAnimation* NewPickupAnim;                                            // 0x0488 (size: 0x8)
    class UVerticalBox* InventoryEventVerticalBox;                                    // 0x0490 (size: 0x8)
    TSubclassOf<class UCrabInventoryEventUI> InventoryEventUIToSpawn;                 // 0x0498 (size: 0x8)
    class UVerticalBox* ChallengeModifierVerticalBox;                                 // 0x04A0 (size: 0x8)
    TSubclassOf<class UCrabChallengeModifierUI> ChallengeModifierUIToSpawn;           // 0x04A8 (size: 0x8)
    class UWidgetAnimation* OnStartedChallengeAnim;                                   // 0x04B0 (size: 0x8)
    class UWidgetAnimation* OnCompletedChallengeAnim;                                 // 0x04B8 (size: 0x8)
    class UVerticalBox* BlessingVerticalBox;                                          // 0x04C0 (size: 0x8)
    TSubclassOf<class UCrabBlessingUI> BlessingUIToSpawn;                             // 0x04C8 (size: 0x8)
    class UWidgetAnimation* OnStartedBlessingAnim;                                    // 0x04D0 (size: 0x8)
    class UWidgetAnimation* OnCompletedBlessingAnim;                                  // 0x04D8 (size: 0x8)
    class UVerticalBox* GauntletVerticalBox;                                          // 0x04E0 (size: 0x8)
    class UTextBlock* GauntletCurrentWaveText;                                        // 0x04E8 (size: 0x8)
    class UWidgetAnimation* OnGauntletCurrentWaveUpdatedAnim;                         // 0x04F0 (size: 0x8)
    class UTextBlock* GauntletArmorPlatesText;                                        // 0x04F8 (size: 0x8)
    class UTextBlock* GauntletCrystalBundlesText;                                     // 0x0500 (size: 0x8)
    class UTextBlock* GauntletCommonPickupsText;                                      // 0x0508 (size: 0x8)
    class UTextBlock* GauntletRandomRarityPickupsText;                                // 0x0510 (size: 0x8)
    class UTextBlock* GauntletEpicPickupsText;                                        // 0x0518 (size: 0x8)
    class UTextBlock* GauntletLegendaryPickupsText;                                   // 0x0520 (size: 0x8)
    class UWidgetAnimation* FlawlessIslandClearAnim;                                  // 0x0528 (size: 0x8)
    class UVerticalBox* OutOfBoundsVerticalBox;                                       // 0x0530 (size: 0x8)
    class UWidgetAnimation* OnOutOfBoundsAnim;                                        // 0x0538 (size: 0x8)
    class UWidgetAnimation* OnInBoundsAnim;                                           // 0x0540 (size: 0x8)

}; // Size: 0x548

class UCrabGauntletInteractUI : public UCrabInteractUI
{
    class UBorder* ChallengeBorder;                                                   // 0x0360 (size: 0x8)
    class UTextBlock* ChallengeText;                                                  // 0x0368 (size: 0x8)
    class UBorder* RewardBorder;                                                      // 0x0370 (size: 0x8)
    class UTextBlock* RewardText;                                                     // 0x0378 (size: 0x8)

}; // Size: 0x380

class UCrabHC : public UActorComponent
{
    class ACrabC* OwningC;                                                            // 0x00B0 (size: 0x8)
    int32 BaseArmorPlates;                                                            // 0x00B8 (size: 0x4)
    float BaseMaxHealth;                                                              // 0x00C0 (size: 0x4)
    bool bShouldRegenerateHealth;                                                     // 0x00D0 (size: 0x1)
    float HealthRegenerationAmount;                                                   // 0x00D4 (size: 0x4)
    bool bCanBeEliminated;                                                            // 0x00F8 (size: 0x1)
    bool bHasOneShotProtection;                                                       // 0x00F9 (size: 0x1)
    bool bHasDeathProtection;                                                         // 0x00FA (size: 0x1)
    FCrabHealthInfo HealthInfo;                                                       // 0x00FC (size: 0x1C)

    void OnRep_HealthInfo();
}; // Size: 0x130

class UCrabHealthBarUI : public UCrabUI
{
    class ACrabC* OwningC;                                                            // 0x02B8 (size: 0x8)
    class UTextBlock* BuffText;                                                       // 0x02C0 (size: 0x8)
    class UTextBlock* OwnerNameText;                                                  // 0x02C8 (size: 0x8)
    class UHorizontalBox* ArmorPlatesHorizontalBox;                                   // 0x02D0 (size: 0x8)
    class UProgressBar* HealthBar;                                                    // 0x02D8 (size: 0x8)
    class UProgressBar* RecentDamageHealthBar;                                        // 0x02E0 (size: 0x8)
    class UTextBlock* CurrentHealthText;                                              // 0x02E8 (size: 0x8)
    class UTextBlock* CurrentMaxHealthText;                                           // 0x02F0 (size: 0x8)
    class UHorizontalBox* IceStackHorizontalBox;                                      // 0x02F8 (size: 0x8)
    class UTextBlock* IceStackText;                                                   // 0x0300 (size: 0x8)
    class UHorizontalBox* FireStackHorizontalBox;                                     // 0x0308 (size: 0x8)
    class UTextBlock* FireStackText;                                                  // 0x0310 (size: 0x8)
    class UHorizontalBox* LightningStackHorizontalBox;                                // 0x0318 (size: 0x8)
    class UTextBlock* LightningStackText;                                             // 0x0320 (size: 0x8)
    class UHorizontalBox* PoisonStackHorizontalBox;                                   // 0x0328 (size: 0x8)
    class UTextBlock* PoisonStackText;                                                // 0x0330 (size: 0x8)
    class UHorizontalBox* ArcaneStackHorizontalBox;                                   // 0x0338 (size: 0x8)
    class UTextBlock* ArcaneStackText;                                                // 0x0340 (size: 0x8)
    class UHorizontalBox* PendingHealthToHealHorizontalBox;                           // 0x0348 (size: 0x8)
    class UTextBlock* PendingHealthToHealText;                                        // 0x0350 (size: 0x8)

}; // Size: 0x368

class UCrabInGameMenuUI : public UCrabFocusMenuUI
{
    class UCrabConfirmationPromptUI* ConfirmationPrompt;                              // 0x03E0 (size: 0x8)
    class UCrabSettingsMenuUI* SettingsMenu;                                          // 0x03E8 (size: 0x8)
    class UButton* ResumeButton;                                                      // 0x03F0 (size: 0x8)
    class UButton* QuickRestartButton;                                                // 0x03F8 (size: 0x8)
    class UButton* SettingsButton;                                                    // 0x0400 (size: 0x8)
    class UButton* FeedbackButton;                                                    // 0x0408 (size: 0x8)
    class UButton* QuitToLobbyButton;                                                 // 0x0410 (size: 0x8)
    class UButton* QuitToDesktopButton;                                               // 0x0418 (size: 0x8)
    class UCrabConfirmationPromptUI* QuitConfirmationPromptUI;                        // 0x0420 (size: 0x8)

    void OnPressedSettingsButton();
    void OnPressedResumeButton();
    void OnPressedQuitToLobbyButton();
    void OnPressedQuitToDesktopButton();
    void OnPressedQuickRestartButton();
    void OnPressedFeedbackButton();
    void OnHoveredSettingsButton();
    void OnHoveredResumeButton();
    void OnHoveredQuitToLobbyButton();
    void OnHoveredQuitToDesktopButton();
    void OnHoveredQuickRestartButton();
    void OnHoveredFeedbackButton();
}; // Size: 0x440

class UCrabInteractUI : public UCrabUI
{
    class UImage* IconImage;                                                          // 0x02B8 (size: 0x8)
    class UTextBlock* TypeText;                                                       // 0x02C0 (size: 0x8)
    class UTextBlock* NameText;                                                       // 0x02C8 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x02D0 (size: 0x8)
    class UBorder* RarityBorder;                                                      // 0x02D8 (size: 0x8)
    class UTextBlock* LootPoolText;                                                   // 0x02E0 (size: 0x8)
    class UTextBlock* InteractKeyText;                                                // 0x02E8 (size: 0x8)
    class UImage* InteractControllerIcon;                                             // 0x02F0 (size: 0x8)
    class UTextBlock* InteractMessageText;                                            // 0x02F8 (size: 0x8)
    class UHorizontalBox* CostHorizontalBox;                                          // 0x0300 (size: 0x8)
    class UImage* CrystalIconImage;                                                   // 0x0308 (size: 0x8)
    class UImage* KeyIconImage;                                                       // 0x0310 (size: 0x8)
    class UImage* HealthIconImage;                                                    // 0x0318 (size: 0x8)
    class UImage* MaxHealthIconImage;                                                 // 0x0320 (size: 0x8)
    class UTextBlock* CostText;                                                       // 0x0328 (size: 0x8)
    class UHorizontalBox* SalvageHorizontalBox;                                       // 0x0330 (size: 0x8)
    class UTextBlock* SalvageKeyText;                                                 // 0x0338 (size: 0x8)
    class UImage* SalvageControllerIcon;                                              // 0x0340 (size: 0x8)
    class UTextBlock* SalvageRewardText;                                              // 0x0348 (size: 0x8)
    class UProgressBar* SalvageProgressBar;                                           // 0x0350 (size: 0x8)
    class UWidgetAnimation* SalvageAnim;                                              // 0x0358 (size: 0x8)

}; // Size: 0x360

class UCrabInventoryDA : public UCrabPickupDA
{
    ECrabEnhanceableType EnhanceableType;                                             // 0x00B0 (size: 0x1)
    FString LevelDescription;                                                         // 0x00B8 (size: 0x10)
    float BaseBuff;                                                                   // 0x00C8 (size: 0x4)
    bool bHyperbolicBuff;                                                             // 0x00CC (size: 0x1)
    bool bLimited;                                                                    // 0x00CD (size: 0x1)
    bool bGetBuffAsMultiplier;                                                        // 0x00CE (size: 0x1)
    float BaseDebuff;                                                                 // 0x00D0 (size: 0x4)
    bool bHyperbolicDebuff;                                                           // 0x00D4 (size: 0x1)
    bool bGetDebuffAsMultiplier;                                                      // 0x00D5 (size: 0x1)
    uint8 Cooldown;                                                                   // 0x00D6 (size: 0x1)

}; // Size: 0xD8

class UCrabInventoryEventUI : public UCrabUI
{
    class UTextBlock* InventoryEventMessageText;                                      // 0x02B8 (size: 0x8)
    class UWidgetAnimation* InventoryEventAnim;                                       // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

class UCrabInventorySlotUI : public UCrabUI
{
    class UCrabInventoryUI* OwningInventoryUI;                                        // 0x02B8 (size: 0x8)
    class UCrabInventoryDA* InventoryDA;                                              // 0x02C0 (size: 0x8)
    FCrabInventoryInfo InventoryInfo;                                                 // 0x02C8 (size: 0x20)
    class UOverlay* SlotOverlay;                                                      // 0x02E8 (size: 0x8)
    class UButton* SlotButton;                                                        // 0x02F0 (size: 0x8)
    class UImage* SlotLockedImage;                                                    // 0x02F8 (size: 0x8)
    class UImage* SlotIconImage;                                                      // 0x0308 (size: 0x8)
    class UTextBlock* SlotLevelText;                                                  // 0x0310 (size: 0x8)
    class UImage* SlotEnhanceableIconImage;                                           // 0x0318 (size: 0x8)

    void OnHoveredSlotButton();
}; // Size: 0x320

class UCrabInventoryUI : public UCrabFocusMenuUI
{
    class ACrabPS* OwningPS;                                                          // 0x03E0 (size: 0x8)
    class UCrabInventorySlotUI* HoveredInventorySlotUI;                               // 0x03E8 (size: 0x8)
    class UTextBlock* CrystalsText;                                                   // 0x03F0 (size: 0x8)
    class UTextBlock* KeysText;                                                       // 0x03F8 (size: 0x8)
    class UUniformGridPanel* WeaponModUniformGridPanel;                               // 0x0400 (size: 0x8)
    class UUniformGridPanel* AbilityModUniformGridPanel;                              // 0x0408 (size: 0x8)
    class UUniformGridPanel* MeleeModUniformGridPanel;                                // 0x0410 (size: 0x8)
    class UUniformGridPanel* PerkUniformGridPanel;                                    // 0x0418 (size: 0x8)
    class UUniformGridPanel* RelicUniformGridPanel;                                   // 0x0420 (size: 0x8)
    class USizeBox* SelectedSlotSizeBox;                                              // 0x0428 (size: 0x8)
    class UImage* SelectedSlotBackgroundImage;                                        // 0x0430 (size: 0x8)
    class UImage* SelectedSlotIconImage;                                              // 0x0438 (size: 0x8)
    class UTextBlock* SelectedSlotNameText;                                           // 0x0440 (size: 0x8)
    class UTextBlock* SelectedSlotLevelText;                                          // 0x0448 (size: 0x8)
    class UTextBlock* SelectedSlotRarityText;                                         // 0x0450 (size: 0x8)
    class UHorizontalBox* SelectedSlotEnhanceableHorizontalBox;                       // 0x0458 (size: 0x8)
    class UTextBlock* SelectedSlotLootPoolText;                                       // 0x0460 (size: 0x8)
    class UTextBlock* SelectedSlotLevelDescriptionText;                               // 0x0468 (size: 0x8)
    class UHorizontalBox* SelectedSlotCooldownHorizontalBox;                          // 0x0470 (size: 0x8)
    class UTextBlock* SelectedSlotCooldownText;                                       // 0x0478 (size: 0x8)
    class UHorizontalBox* SelectedSlotAccumulatedBuffHorizontalBox;                   // 0x0480 (size: 0x8)
    class UTextBlock* SelectedSlotAccumulatedBuffText;                                // 0x0488 (size: 0x8)
    class UVerticalBox* EnhancementsVerticalBox;                                      // 0x0490 (size: 0x8)
    TSubclassOf<class UCrabEnhancementUI> EnhancementUIToSpawn;                       // 0x0498 (size: 0x8)
    class UOverlay* SelectedSlotDropButtonOverlay;                                    // 0x04A0 (size: 0x8)
    class UTextBlock* SelectedSlotDropText;                                           // 0x04A8 (size: 0x8)
    class UTexture2D* SelectedSlotLockedIcon;                                         // 0x04B0 (size: 0x8)
    class UHorizontalBox* SelectedSlotCostHorizontalBox;                              // 0x04B8 (size: 0x8)
    class UTextBlock* SelectedSlotCostText;                                           // 0x04C0 (size: 0x8)
    class USoundCue* SelectedSlotUnlockSound;                                         // 0x04C8 (size: 0x8)
    class UButton* DropCrystalsButton;                                                // 0x04D0 (size: 0x8)
    class UTextBlock* BaseMaxHealthStatText;                                          // 0x04D8 (size: 0x8)
    class UTextBlock* MaxHealthMultiplierStatText;                                    // 0x04E0 (size: 0x8)
    class UTextBlock* BlockChanceStatText;                                            // 0x04E8 (size: 0x8)
    class UTextBlock* IncomingDamageStatText;                                         // 0x04F0 (size: 0x8)
    class UTextBlock* FireRateStatText;                                               // 0x04F8 (size: 0x8)
    class UTextBlock* WeaponDamageStatText;                                           // 0x0500 (size: 0x8)
    class UTextBlock* AbilityDamageStatText;                                          // 0x0508 (size: 0x8)
    class UTextBlock* MeleeDamageStatText;                                            // 0x0510 (size: 0x8)
    class UTextBlock* GlobalDamageStatText;                                           // 0x0518 (size: 0x8)
    class UTextBlock* CriticalHitChanceStatText;                                      // 0x0520 (size: 0x8)
    class UTextBlock* CriticalHitDamageStatText;                                      // 0x0528 (size: 0x8)
    class UTextBlock* CrystalGainStatText;                                            // 0x0530 (size: 0x8)

    void OnPressedDropCrystalsButton();
}; // Size: 0x538

class UCrabInviteFriendRowUI : public UCrabUI
{
    class UTextBlock* FriendNameText;                                                 // 0x02B8 (size: 0x8)
    class UButton* InviteButton;                                                      // 0x02D0 (size: 0x8)
    class UTextBlock* InviteButtonText;                                               // 0x02D8 (size: 0x8)

    void OnPressedInviteButton();
    void OnHoveredInviteButton();
}; // Size: 0x2E8

class UCrabJoinedPlayerRowUI : public UCrabUI
{
    class UTextBlock* PlayerNameText;                                                 // 0x02B8 (size: 0x8)
    class UTextBlock* PlayerPingText;                                                 // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

class UCrabKeyBindRowUI : public UCrabUI
{
    class UButton* KeyboardButton;                                                    // 0x02B8 (size: 0x8)
    class UButton* ControllerButton;                                                  // 0x02C0 (size: 0x8)
    FCrabKeyBind CurrentKeyBind;                                                      // 0x02C8 (size: 0x70)
    class UTextBlock* KeyBindTitleText;                                               // 0x0338 (size: 0x8)
    class UInputKeySelector* KeyboardKeySelector;                                     // 0x0340 (size: 0x8)
    class UInputKeySelector* ControllerKeySelector;                                   // 0x0348 (size: 0x8)
    class UImage* ControllerIcon;                                                     // 0x0350 (size: 0x8)
    class UMaterialInterface* ControllerIconMat;                                      // 0x0358 (size: 0x8)

    void OnPressedKeyboardKeySelector(FInputChord SelectedKey);
    void OnPressedControllerKeySelector(FInputChord SelectedKey);
    void OnHoveredKeyboardButton();
    void OnHoveredControllerButton();
}; // Size: 0x360

class UCrabLaunchActionDA : public UCrabActionDA
{
    ECrabTargetType TargetType;                                                       // 0x0068 (size: 0x1)
    float PreLaunchHeight;                                                            // 0x006C (size: 0x4)
    float LaunchSpeed;                                                                // 0x0070 (size: 0x4)
    class UCrabAOEDA* LandAOEDA;                                                      // 0x0078 (size: 0x8)

}; // Size: 0x80

class UCrabMeleeDA : public UCrabPickupDA
{
    class UStaticMesh* Mesh;                                                          // 0x00B0 (size: 0x8)
    ECrabHitmarkerType HitmarkerType;                                                 // 0x00B8 (size: 0x1)
    float Cooldown;                                                                   // 0x00BC (size: 0x4)
    float MeleeModDebuffMultiplier;                                                   // 0x00C0 (size: 0x4)
    class UAnimMontage* Montage;                                                      // 0x00C8 (size: 0x8)
    class UNiagaraSystem* FX;                                                         // 0x00D0 (size: 0x8)
    float LaunchSpeed;                                                                // 0x00D8 (size: 0x4)
    float LaunchHeight;                                                               // 0x00DC (size: 0x4)
    float SlamDelay;                                                                  // 0x00E0 (size: 0x4)
    float SlamSpeed;                                                                  // 0x00E4 (size: 0x4)
    class UAnimMontage* SlamMontage;                                                  // 0x00E8 (size: 0x8)
    float SlamSelfKnockbackStrength;                                                  // 0x00F0 (size: 0x4)
    float Range;                                                                      // 0x00F4 (size: 0x4)
    float Damage;                                                                     // 0x00F8 (size: 0x4)
    float KnockbackStrength;                                                          // 0x00FC (size: 0x4)
    TSubclassOf<class ACrabDamageArea> ExplosionDamageAreaToSpawn;                    // 0x0100 (size: 0x8)
    class UCrabStrikeActionDA* ExplosionLineStrikeAction;                             // 0x0108 (size: 0x8)
    float ExplosionLineStrikeDistance;                                                // 0x0110 (size: 0x4)
    class UNiagaraSystem* ExplosionFX;                                                // 0x0118 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> ExplosionCameraShake;                         // 0x0120 (size: 0x8)

}; // Size: 0x128

class UCrabMeleeModDA : public UCrabInventoryDA
{
    ECrabMeleeModType MeleeModType;                                                   // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UCrabMinigameGameOverRowUI : public UCrabUI
{
    class UTextBlock* PlacementText;                                                  // 0x02B8 (size: 0x8)
    class UImage* MVPCrownImage;                                                      // 0x02C0 (size: 0x8)
    class UTextBlock* PlayerNameText;                                                 // 0x02C8 (size: 0x8)
    class UTextBlock* EliminationsText;                                               // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class UCrabMinigameGameOverUI : public UCrabFocusMenuUI
{
    class UTextBlock* MinigameNameText;                                               // 0x03E0 (size: 0x8)
    class UWidgetSwitcher* MinigameGameOverWidgetSwitcher;                            // 0x03E8 (size: 0x8)
    class UTextBlock* ScoreText;                                                      // 0x03F0 (size: 0x8)
    class UTextBlock* HighScoreText;                                                  // 0x03F8 (size: 0x8)
    class UVerticalBox* MinigameGameOverRowUIVerticalBox;                             // 0x0400 (size: 0x8)
    TSubclassOf<class UCrabMinigameGameOverRowUI> MinigameGameOverRowUIToSpawn;       // 0x0408 (size: 0x8)

}; // Size: 0x410

class UCrabMultiplayerMenuUI : public UCrabFocusMenuUI
{
    class UCrabArrowSelectionUI* QuickplayDifficultyAS;                               // 0x03E0 (size: 0x8)
    class UButton* QuickplayButton;                                                   // 0x03E8 (size: 0x8)
    class UTextBlock* QuickplayButtonText;                                            // 0x03F0 (size: 0x8)
    class UScrollBox* FriendsScrollBox;                                               // 0x03F8 (size: 0x8)
    TSubclassOf<class UCrabInviteFriendRowUI> InviteFriendRowUIToSpawn;               // 0x0400 (size: 0x8)
    class UVerticalBox* JoinedPlayersVerticalBox;                                     // 0x0408 (size: 0x8)
    TSubclassOf<class UCrabJoinedPlayerRowUI> JoinedPlayerRowUIToSpawn;               // 0x0410 (size: 0x8)

    void OnPressedQuickplayButton();
    void OnHoveredQuickplayButton();
}; // Size: 0x418

class UCrabPMC : public UMovementComponent
{
    class ACrabC* HomingTarget;                                                       // 0x0130 (size: 0x8)
    class UCrabProjectileDA* ProjectileDA;                                            // 0x0148 (size: 0x8)
    class ACrabProjectile* OwningProjectile;                                          // 0x0150 (size: 0x8)

}; // Size: 0x1B8

class UCrabPerkDA : public UCrabInventoryDA
{
    ECrabPerkType PerkType;                                                           // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UCrabPickupDA : public UDataAsset
{
    bool bRequiresUnlock;                                                             // 0x0030 (size: 0x1)
    FString Name;                                                                     // 0x0038 (size: 0x10)
    FString Description;                                                              // 0x0048 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0058 (size: 0x8)
    ECrabPickupType PickupType;                                                       // 0x0060 (size: 0x1)
    ECrabLootPool LootPool;                                                           // 0x0061 (size: 0x1)
    ECrabRarity Rarity;                                                               // 0x0062 (size: 0x1)
    ECrabPickupTag PickupTag;                                                         // 0x0063 (size: 0x1)
    bool bRequiresMatchingPickupTag;                                                  // 0x0064 (size: 0x1)
    float SpawnWeight;                                                                // 0x0068 (size: 0x4)
    FLinearColor Tint;                                                                // 0x006C (size: 0x10)
    class UNiagaraSystem* PrimaryFX;                                                  // 0x0080 (size: 0x8)
    class UNiagaraSystem* SecondaryFX;                                                // 0x0088 (size: 0x8)
    TSubclassOf<class UCrabInteractUI> InteractUI;                                    // 0x0090 (size: 0x8)
    TSubclassOf<class UUserWidget> LocationUI;                                        // 0x0098 (size: 0x8)
    class UNiagaraSystem* OnPickedUpFX;                                               // 0x00A0 (size: 0x8)
    class USoundCue* OnPickedUpSound;                                                 // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UCrabPingUI : public UCrabUI
{
    class UImage* PingIconImage;                                                      // 0x02B8 (size: 0x8)

}; // Size: 0x2C0

class UCrabPlayerAnimInstance : public UCrabAnimInstance
{
    class ACrabPlayerC* OwningPlayerC;                                                // 0x02D0 (size: 0x8)
    float CurrentTurnDir;                                                             // 0x02D8 (size: 0x4)
    FVector2D CurrentInputDir;                                                        // 0x02DC (size: 0x8)
    bool bIsSliding;                                                                  // 0x02E4 (size: 0x1)

    void AnimNotify_Melee();
}; // Size: 0x2F0

class UCrabPlayerNameUI : public UCrabUI
{
    class UTextBlock* PlayerNameText;                                                 // 0x02B8 (size: 0x8)
    class UImage* PlayerArrowImage;                                                   // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

class UCrabPlayerStateUI : public UCrabUI
{
    class UImage* PlayerTintImage;                                                    // 0x02B8 (size: 0x8)
    class UTextBlock* PlayerNameText;                                                 // 0x02C0 (size: 0x8)
    class UTextBlock* PlayerEliminationsText;                                         // 0x02C8 (size: 0x8)
    class UTextBlock* PlayerCrystalsText;                                             // 0x02D0 (size: 0x8)
    class UImage* PlayerAccountRankImage;                                             // 0x02D8 (size: 0x8)
    class UTextBlock* PlayerAccountLevelText;                                         // 0x02E0 (size: 0x8)
    class UProgressBar* PlayerHealthBar;                                              // 0x02E8 (size: 0x8)
    class UWidgetAnimation* PlayerEliminatedAnim;                                     // 0x02F0 (size: 0x8)
    class ACrabPS* PlayerPS;                                                          // 0x02F8 (size: 0x8)

}; // Size: 0x300

class UCrabPortalInteractUI : public UCrabInteractUI
{
    class UBorder* ChallengeModifierABorder;                                          // 0x0360 (size: 0x8)
    class UTextBlock* ChallengeModifierANameText;                                     // 0x0368 (size: 0x8)
    class UTextBlock* ChallengeModifierADescriptionText;                              // 0x0370 (size: 0x8)
    class UBorder* ChallengeModifierBBorder;                                          // 0x0378 (size: 0x8)
    class UTextBlock* ChallengeModifierBNameText;                                     // 0x0380 (size: 0x8)
    class UTextBlock* ChallengeModifierBDescriptionText;                              // 0x0388 (size: 0x8)
    class UBorder* ChallengeModifierCBorder;                                          // 0x0390 (size: 0x8)
    class UTextBlock* ChallengeModifierCNameText;                                     // 0x0398 (size: 0x8)
    class UTextBlock* ChallengeModifierCDescriptionText;                              // 0x03A0 (size: 0x8)
    class UBorder* BlessingBorder;                                                    // 0x03A8 (size: 0x8)
    class UTextBlock* BlessingNameText;                                               // 0x03B0 (size: 0x8)
    class UTextBlock* BlessingDescriptionText;                                        // 0x03B8 (size: 0x8)
    class UBorder* RewardBorder;                                                      // 0x03C0 (size: 0x8)
    class UTextBlock* DoubleRewardText;                                               // 0x03C8 (size: 0x8)
    class UTextBlock* RewardNameText;                                                 // 0x03D0 (size: 0x8)
    class UTextBlock* RewardDescriptionText;                                          // 0x03D8 (size: 0x8)

}; // Size: 0x3E0

class UCrabProjectileActionDA : public UCrabActionDA
{
    ECrabTargetType TargetType;                                                       // 0x0068 (size: 0x1)
    TArray<FName> SocketNames;                                                        // 0x0070 (size: 0x10)
    class UCrabProjectileDA* ProjectileDA;                                            // 0x0080 (size: 0x8)
    ECrabFormationType FormationType;                                                 // 0x0088 (size: 0x1)
    bool bFireInSequence;                                                             // 0x0089 (size: 0x1)
    float FormationSpacing;                                                           // 0x008C (size: 0x4)
    float FormationSpacingIterationMultiplier;                                        // 0x0090 (size: 0x4)
    float FormationExpansionDampening;                                                // 0x0094 (size: 0x4)
    float FormationExpansionDampeningIterationMultiplier;                             // 0x0098 (size: 0x4)
    float Spread;                                                                     // 0x009C (size: 0x4)

}; // Size: 0xA0

class UCrabProjectileDA : public UDataAsset
{
    float LifeTime;                                                                   // 0x0030 (size: 0x4)
    float CollisionRadius;                                                            // 0x0034 (size: 0x4)
    float Speed;                                                                      // 0x0038 (size: 0x4)
    float MaxSpeed;                                                                   // 0x003C (size: 0x4)
    float AccelerationScale;                                                          // 0x0040 (size: 0x4)
    float ZigZagScale;                                                                // 0x0044 (size: 0x4)
    float SpiralScale;                                                                // 0x0048 (size: 0x4)
    float SnakeScale;                                                                 // 0x004C (size: 0x4)
    float ChaoticScale;                                                               // 0x0050 (size: 0x4)
    float BoomerangScale;                                                             // 0x0054 (size: 0x4)
    float OrbitingScale;                                                              // 0x0058 (size: 0x4)
    float GravityScale;                                                               // 0x005C (size: 0x4)
    float GravityDelay;                                                               // 0x0060 (size: 0x4)
    float HomingScale;                                                                // 0x0064 (size: 0x4)
    float HomingDelay;                                                                // 0x0068 (size: 0x4)
    float HomingLerpSpeed;                                                            // 0x006C (size: 0x4)
    float HomingAccelerationScale;                                                    // 0x0070 (size: 0x4)
    float HomingAccelerationRange;                                                    // 0x0074 (size: 0x4)
    float GrapplingScale;                                                             // 0x0078 (size: 0x4)
    int32 MaxPiercings;                                                               // 0x007C (size: 0x4)
    int32 MaxBounces;                                                                 // 0x0080 (size: 0x4)
    float BounceVelocityScale;                                                        // 0x0084 (size: 0x4)
    bool bGlueToHitCharacters;                                                        // 0x0088 (size: 0x1)
    float ProximityDamageRadius;                                                      // 0x008C (size: 0x4)
    float ProximityDamageMultiplier;                                                  // 0x0090 (size: 0x4)
    TSubclassOf<class ACrabBeam> AttachedBeamToSpawn;                                 // 0x0098 (size: 0x8)
    bool bExplodeAfterLifetime;                                                       // 0x00A0 (size: 0x1)
    float ExplosionDelay;                                                             // 0x00A4 (size: 0x4)
    float ExplosionRadius;                                                            // 0x00A8 (size: 0x4)
    bool bExplosionLOSCheck;                                                          // 0x00AC (size: 0x1)
    float ExplosionDamage;                                                            // 0x00B0 (size: 0x4)
    ECrabDamageTagType ExplosionDamageTag;                                            // 0x00B4 (size: 0x1)
    FCrabDebuff ExplosionDebuff;                                                      // 0x00B8 (size: 0x8)
    float ExplosionKnockbackStrength;                                                 // 0x00C0 (size: 0x4)
    TSubclassOf<class ACrabBeam> ExplosionBeamToSpawn;                                // 0x00C8 (size: 0x8)
    TSubclassOf<class ACrabDestructible> ExplosionDestructibleToSpawn;                // 0x00D0 (size: 0x8)
    float ExplosionDestructiblePhysicsImpulse;                                        // 0x00D8 (size: 0x4)
    float ExplosionDamageAreaSpawnChance;                                             // 0x00DC (size: 0x4)
    TSubclassOf<class ACrabDamageArea> ExplosionDamageAreaToSpawn;                    // 0x00E0 (size: 0x8)
    class UNiagaraSystem* ProjectileFX;                                               // 0x00E8 (size: 0x8)
    class UNiagaraSystem* ProjectileTrailFX;                                          // 0x00F0 (size: 0x8)
    class USoundCue* ProjectileSound;                                                 // 0x00F8 (size: 0x8)
    bool bRandomizeTint;                                                              // 0x0100 (size: 0x1)
    class UNiagaraSystem* ExplosionFX;                                                // 0x0108 (size: 0x8)
    class USoundCue* ExplosionSound;                                                  // 0x0110 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> ExplosionCameraShake;                         // 0x0118 (size: 0x8)
    class UMaterialInterface* ExplosionDecalMat;                                      // 0x0120 (size: 0x8)
    float ExplosionDecalSize;                                                         // 0x0128 (size: 0x4)

}; // Size: 0x130

class UCrabProximityExplodeActionDA : public UCrabActionDA
{
    class UCrabAOEDA* ExplosionAOEDA;                                                 // 0x0068 (size: 0x8)

}; // Size: 0x70

class UCrabRamActionDA : public UCrabActionDA
{
    float RamSpeedMultiplier;                                                         // 0x0068 (size: 0x4)
    class UCrabAOEDA* RamAOEDA;                                                       // 0x0070 (size: 0x8)

}; // Size: 0x78

class UCrabRelicDA : public UCrabInventoryDA
{
    ECrabRelicType RelicType;                                                         // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UCrabRevivalUI : public UCrabUI
{
    class UTextBlock* PlayerNameText;                                                 // 0x02B8 (size: 0x8)
    class UImage* PlayerArrowImage;                                                   // 0x02C0 (size: 0x8)
    class UTextBlock* PercentCompleteText;                                            // 0x02C8 (size: 0x8)

}; // Size: 0x2D0

class UCrabSG : public USaveGame
{
    int32 CrabChampionsVersion;                                                       // 0x0028 (size: 0x4)
    FDateTime LastSavedBackupSaveDateTime;                                            // 0x0030 (size: 0x8)
    FString LastSavedBackupSaveName;                                                  // 0x0038 (size: 0x10)
    int32 XPToNextLevelUp;                                                            // 0x0048 (size: 0x4)
    TArray<FCrabRankedWeapon> RankedWeapons;                                          // 0x0050 (size: 0x10)
    int32 AccountLevel;                                                               // 0x0060 (size: 0x4)
    int32 Keys;                                                                       // 0x0064 (size: 0x4)
    ECrabRank Difficulty;                                                             // 0x0068 (size: 0x1)
    TArray<ECrabDifficultyModifier> DifficultyModifiers;                              // 0x0070 (size: 0x10)
    class UMaterialInterface* CrabSkin;                                               // 0x0080 (size: 0x8)
    class UCrabWeaponDA* WeaponDA;                                                    // 0x0088 (size: 0x8)
    class UCrabAbilityDA* AbilityDA;                                                  // 0x0090 (size: 0x8)
    class UCrabMeleeDA* MeleeDA;                                                      // 0x0098 (size: 0x8)
    TArray<FCrabChallenge> Challenges;                                                // 0x00A0 (size: 0x10)
    TArray<class UCrabPickupDA*> UnlockedWeapons;                                     // 0x00B0 (size: 0x10)
    TArray<class UCrabPickupDA*> UnlockedAbilities;                                   // 0x00C0 (size: 0x10)
    TArray<class UCrabPickupDA*> UnlockedMeleeWeapons;                                // 0x00D0 (size: 0x10)
    TArray<class UCrabPickupDA*> UnlockedWeaponMods;                                  // 0x00E0 (size: 0x10)
    TArray<class UCrabPickupDA*> UnlockedAbilityMods;                                 // 0x00F0 (size: 0x10)
    TArray<class UCrabPickupDA*> UnlockedMeleeMods;                                   // 0x0100 (size: 0x10)
    TArray<class UCrabPickupDA*> UnlockedPerks;                                       // 0x0110 (size: 0x10)
    TArray<class UCrabPickupDA*> UnlockedRelics;                                      // 0x0120 (size: 0x10)
    int32 BronzeAttempts;                                                             // 0x0130 (size: 0x4)
    int32 BronzeWins;                                                                 // 0x0134 (size: 0x4)
    int32 BronzeWinStreak;                                                            // 0x0138 (size: 0x4)
    int32 BronzeHighestIslandReached;                                                 // 0x013C (size: 0x4)
    int32 SilverAttempts;                                                             // 0x0140 (size: 0x4)
    int32 SilverWins;                                                                 // 0x0144 (size: 0x4)
    int32 SilverWinStreak;                                                            // 0x0148 (size: 0x4)
    int32 SilverHighestIslandReached;                                                 // 0x014C (size: 0x4)
    int32 GoldAttempts;                                                               // 0x0150 (size: 0x4)
    int32 GoldWins;                                                                   // 0x0154 (size: 0x4)
    int32 GoldWinStreak;                                                              // 0x0158 (size: 0x4)
    int32 GoldHighestIslandReached;                                                   // 0x015C (size: 0x4)
    int32 SapphireAttempts;                                                           // 0x0160 (size: 0x4)
    int32 SapphireWins;                                                               // 0x0164 (size: 0x4)
    int32 SapphireWinStreak;                                                          // 0x0168 (size: 0x4)
    int32 SapphireHighestIslandReached;                                               // 0x016C (size: 0x4)
    int32 EmeraldAttempts;                                                            // 0x0170 (size: 0x4)
    int32 EmeraldWins;                                                                // 0x0174 (size: 0x4)
    int32 EmeraldWinStreak;                                                           // 0x0178 (size: 0x4)
    int32 EmeraldHighestIslandReached;                                                // 0x017C (size: 0x4)
    int32 RubyAttempts;                                                               // 0x0180 (size: 0x4)
    int32 RubyWins;                                                                   // 0x0184 (size: 0x4)
    int32 RubyWinStreak;                                                              // 0x0188 (size: 0x4)
    int32 RubyHighestIslandReached;                                                   // 0x018C (size: 0x4)
    int32 DiamondAttempts;                                                            // 0x0190 (size: 0x4)
    int32 DiamondWins;                                                                // 0x0194 (size: 0x4)
    int32 DiamondWinStreak;                                                           // 0x0198 (size: 0x4)
    int32 DiamondHighestIslandReached;                                                // 0x019C (size: 0x4)
    int32 PrismaticAttempts;                                                          // 0x01A0 (size: 0x4)
    int32 PrismaticWins;                                                              // 0x01A4 (size: 0x4)
    int32 PrismaticWinStreak;                                                         // 0x01A8 (size: 0x4)
    int32 PrismaticHighestIslandReached;                                              // 0x01AC (size: 0x4)
    int32 EasyAttempts;                                                               // 0x01B0 (size: 0x4)
    int32 EasyWins;                                                                   // 0x01B4 (size: 0x4)
    int32 EasyWinStreak;                                                              // 0x01B8 (size: 0x4)
    int32 EasyHighestIslandReached;                                                   // 0x01BC (size: 0x4)
    int32 NormalAttempts;                                                             // 0x01C0 (size: 0x4)
    int32 NormalWins;                                                                 // 0x01C4 (size: 0x4)
    int32 NormalWinStreak;                                                            // 0x01C8 (size: 0x4)
    int32 NormalHighestIslandReached;                                                 // 0x01CC (size: 0x4)
    int32 NightmareAttempts;                                                          // 0x01D0 (size: 0x4)
    int32 NightmareWins;                                                              // 0x01D4 (size: 0x4)
    int32 NightmareWinStreak;                                                         // 0x01D8 (size: 0x4)
    int32 NightmareHighestIslandReached;                                              // 0x01DC (size: 0x4)
    int32 UltraChaosAttempts;                                                         // 0x01E0 (size: 0x4)
    int32 UltraChaosWins;                                                             // 0x01E4 (size: 0x4)
    int32 UltraChaosWinStreak;                                                        // 0x01E8 (size: 0x4)
    int32 UltraChaosHighestIslandReached;                                             // 0x01EC (size: 0x4)
    FCrabAutoSave AutoSave;                                                           // 0x01F0 (size: 0x168)
    int32 ArcadeHighScore;                                                            // 0x0358 (size: 0x4)
    int32 HoldoutHighScore;                                                           // 0x035C (size: 0x4)

}; // Size: 0x360

class UCrabSettingsMenuUI : public UCrabFocusMenuUI
{
    class UCrabVideoMenuUI* VideoMenu;                                                // 0x03E0 (size: 0x8)
    class UCrabSoundMenuUI* SoundMenu;                                                // 0x03E8 (size: 0x8)
    class UCrabControlsMenuUI* ControlsMenu;                                          // 0x03F0 (size: 0x8)
    class UButton* VideoButton;                                                       // 0x03F8 (size: 0x8)
    class UButton* SoundButton;                                                       // 0x0400 (size: 0x8)
    class UButton* ControlsButton;                                                    // 0x0408 (size: 0x8)

    void OnPressedVideoButton();
    void OnPressedSoundButton();
    void OnPressedControlsButton();
}; // Size: 0x410

class UCrabSettingsSG : public USaveGame
{
    FString DisplayMode;                                                              // 0x0028 (size: 0x10)
    FString Resolution;                                                               // 0x0038 (size: 0x10)
    FString ResolutionQuality;                                                        // 0x0048 (size: 0x10)
    FString FPSLimit;                                                                 // 0x0058 (size: 0x10)
    FString VSync;                                                                    // 0x0068 (size: 0x10)
    FString FieldOfView;                                                              // 0x0078 (size: 0x10)
    FString GraphicsQuality;                                                          // 0x0088 (size: 0x10)
    FString WeaponEffects;                                                            // 0x0098 (size: 0x10)
    FString AntiAliasingType;                                                         // 0x00A8 (size: 0x10)
    FString Sharpening;                                                               // 0x00B8 (size: 0x10)
    FString MotionBlur;                                                               // 0x00C8 (size: 0x10)
    FString CameraShake;                                                              // 0x00D8 (size: 0x10)
    FString Hitmarkers;                                                               // 0x00E8 (size: 0x10)
    FString DamageNumbers;                                                            // 0x00F8 (size: 0x10)
    FString TextChatVisibility;                                                       // 0x0108 (size: 0x10)
    FString ShowFPS;                                                                  // 0x0118 (size: 0x10)
    FString PauseWhenLosingFocus;                                                     // 0x0128 (size: 0x10)
    float MasterVolume;                                                               // 0x0138 (size: 0x4)
    float GameplayVolume;                                                             // 0x013C (size: 0x4)
    float MusicVolume;                                                                // 0x0140 (size: 0x4)
    float LookSensitivity;                                                            // 0x0144 (size: 0x4)
    float AimingSensitivityMultiplier;                                                // 0x0148 (size: 0x4)
    bool bVerticalLookInversion;                                                      // 0x014C (size: 0x1)
    float AimAssistStrength;                                                          // 0x0150 (size: 0x4)
    bool bAutoSlide;                                                                  // 0x0154 (size: 0x1)
    TArray<FCrabKeyBind> CrabKeyBinds;                                                // 0x0158 (size: 0x10)

}; // Size: 0x168

class UCrabShopPedestalUI : public UCrabUI
{
    class UImage* CrystalIconImage;                                                   // 0x02B8 (size: 0x8)
    class UImage* KeyIconImage;                                                       // 0x02C0 (size: 0x8)
    class UImage* HealthIconImage;                                                    // 0x02C8 (size: 0x8)
    class UTextBlock* CostText;                                                       // 0x02D0 (size: 0x8)
    class UTextBlock* DiscountText;                                                   // 0x02D8 (size: 0x8)
    class UBorder* DiscountBorder;                                                    // 0x02E0 (size: 0x8)

}; // Size: 0x2E8

class UCrabSliderUI : public UCrabUI
{
    class USlider* MainSlider;                                                        // 0x02B8 (size: 0x8)
    class UProgressBar* SliderPB;                                                     // 0x02C0 (size: 0x8)
    class UTextBlock* SliderText;                                                     // 0x02C8 (size: 0x8)

    void OnMainSliderValueChanged(float Value);
}; // Size: 0x2D0

class UCrabSoundMenuUI : public UCrabUI
{
    TArray<class UWidget*> SoundMenuFocusableWidgetArray;                             // 0x02B8 (size: 0x10)
    class UCrabSliderUI* MasterVolumeSlider;                                          // 0x02C8 (size: 0x8)
    class UCrabSliderUI* GameplayVolumeSlider;                                        // 0x02D0 (size: 0x8)
    class UCrabSliderUI* MusicVolumeSlider;                                           // 0x02D8 (size: 0x8)

}; // Size: 0x2E0

class UCrabSpawnActionDA : public UCrabActionDA
{
    TArray<class TSubclassOf<ACrabEnemyC>> LesserEnemiesToSpawn;                      // 0x0068 (size: 0x10)
    int32 MaxSpawnedLesserEnemies;                                                    // 0x0078 (size: 0x4)

}; // Size: 0x80

class UCrabSpawnablesDA : public UDataAsset
{
    class UMaterialInterface* IceMat;                                                 // 0x0030 (size: 0x8)
    class USoundCue* IceSound;                                                        // 0x0038 (size: 0x8)
    class UNiagaraSystem* IceThawFX;                                                  // 0x0040 (size: 0x8)
    class USoundCue* FireSound;                                                       // 0x0048 (size: 0x8)
    class USoundCue* LightningSound;                                                  // 0x0050 (size: 0x8)
    class UNiagaraSystem* ChainLightningFX;                                           // 0x0058 (size: 0x8)
    class USoundCue* PoisonSound;                                                     // 0x0060 (size: 0x8)
    class UNiagaraSystem* ArcaneFX;                                                   // 0x0068 (size: 0x8)
    class USoundCue* ArcaneSound;                                                     // 0x0070 (size: 0x8)
    class UNiagaraSystem* ShieldBreakFX;                                              // 0x0078 (size: 0x8)
    class USoundCue* ShieldBreakSound;                                                // 0x0080 (size: 0x8)
    class UNiagaraSystem* GenericExplosionFX;                                         // 0x0088 (size: 0x8)
    class USoundCue* GenericExplosionSound;                                           // 0x0090 (size: 0x8)
    class UNiagaraSystem* IceExplosionFX;                                             // 0x0098 (size: 0x8)
    class USoundCue* IceExplosionSound;                                               // 0x00A0 (size: 0x8)
    class UNiagaraSystem* FireExplosionFX;                                            // 0x00A8 (size: 0x8)
    class USoundCue* FireExplosionSound;                                              // 0x00B0 (size: 0x8)
    class UNiagaraSystem* LightningExplosionFX;                                       // 0x00B8 (size: 0x8)
    class USoundCue* LightningExplosionSound;                                         // 0x00C0 (size: 0x8)
    class UNiagaraSystem* PoisonExplosionFX;                                          // 0x00C8 (size: 0x8)
    class USoundCue* PoisonExplosionSound;                                            // 0x00D0 (size: 0x8)
    TArray<class UCrabWeaponDA*> Weapons;                                             // 0x00D8 (size: 0x10)
    TArray<class UCrabAbilityDA*> Abilities;                                          // 0x00E8 (size: 0x10)
    TArray<class UCrabMeleeDA*> MeleeWeapons;                                         // 0x00F8 (size: 0x10)
    TArray<class UCrabWeaponModDA*> WeaponMods;                                       // 0x0108 (size: 0x10)
    TArray<class UCrabAbilityModDA*> AbilityMods;                                     // 0x0118 (size: 0x10)
    TArray<class UCrabMeleeModDA*> MeleeMods;                                         // 0x0128 (size: 0x10)
    TArray<class UCrabPerkDA*> Perks;                                                 // 0x0138 (size: 0x10)
    TArray<class UCrabRelicDA*> Relics;                                               // 0x0148 (size: 0x10)
    TArray<class UCrabConsumableDA*> Consumables;                                     // 0x0158 (size: 0x10)
    TSubclassOf<class ACrabHealthPickup> HealthPickup;                                // 0x0168 (size: 0x8)
    TSubclassOf<class ACrabHealthPickup> ScavengerHealthPickup;                       // 0x0170 (size: 0x8)
    TSubclassOf<class ACrabCrystalPickup> CrystalPickup;                              // 0x0178 (size: 0x8)
    class UNiagaraSystem* BananaAmbienceFX;                                           // 0x0180 (size: 0x8)
    class UNiagaraSystem* CriticalBlastFX;                                            // 0x0188 (size: 0x8)
    class USoundCue* CriticalBlastSound;                                              // 0x0190 (size: 0x8)
    class UCrabProjectileDA* TimeBoltDA;                                              // 0x0198 (size: 0x8)
    class UCrabProjectileDA* UltraShotDA;                                             // 0x01A0 (size: 0x8)
    class UCrabProjectileDA* ReloadArcDA;                                             // 0x01A8 (size: 0x8)
    class UCrabProjectileDA* LinkDA;                                                  // 0x01B0 (size: 0x8)
    class UCrabProjectileDA* DrillDA;                                                 // 0x01B8 (size: 0x8)
    class UCrabProjectileDA* BubbleDA;                                                // 0x01C0 (size: 0x8)
    class UCrabProjectileDA* PumpkinDA;                                               // 0x01C8 (size: 0x8)
    class UCrabProjectileDA* DaggerDA;                                                // 0x01D0 (size: 0x8)
    class UCrabProjectileDA* PiercingWaveDA;                                          // 0x01D8 (size: 0x8)
    class UCrabProjectileDA* ArcaneBlastDA;                                           // 0x01E0 (size: 0x8)
    class UCrabProjectileDA* ShotgunDA;                                               // 0x01E8 (size: 0x8)
    class UCrabProjectileDA* MaceBallDA;                                              // 0x01F0 (size: 0x8)
    class UCrabProjectileDA* FireworkDA;                                              // 0x01F8 (size: 0x8)
    class UCrabProjectileDA* ThornDA;                                                 // 0x0200 (size: 0x8)
    class UCrabProjectileDA* BeamDA;                                                  // 0x0208 (size: 0x8)
    class UCrabProjectileDA* SparkDA;                                                 // 0x0210 (size: 0x8)
    class UCrabProjectileDA* ProximityBarrageDA;                                      // 0x0218 (size: 0x8)
    class UCrabProjectileDA* HomingBladeDA;                                           // 0x0220 (size: 0x8)
    class UCrabProjectileDA* BombDA;                                                  // 0x0228 (size: 0x8)
    class UCrabProjectileDA* TorpedoDA;                                               // 0x0230 (size: 0x8)
    class UCrabProjectileDA* FireballDA;                                              // 0x0238 (size: 0x8)
    class UCrabProjectileDA* SharpenedAxeDA;                                          // 0x0240 (size: 0x8)
    class UCrabProjectileDA* TriangleDA;                                              // 0x0248 (size: 0x8)
    class UCrabProjectileDA* SpinningBladeDA;                                         // 0x0250 (size: 0x8)
    class UCrabProjectileDA* ScytheDA;                                                // 0x0258 (size: 0x8)
    TSubclassOf<class ACrabDestructible> BarrelRainBarrel;                            // 0x0260 (size: 0x8)
    TSubclassOf<class ACrabDestructible> LandmineRainLandmine;                        // 0x0268 (size: 0x8)
    TSubclassOf<class ACrabDestructible> Landmine;                                    // 0x0270 (size: 0x8)
    TSubclassOf<class ACrabDestructible> HomingBarrel;                                // 0x0278 (size: 0x8)
    TSubclassOf<class ACrabDestructible> SporeMushroom;                               // 0x0280 (size: 0x8)
    TSubclassOf<class ACrabDestructible> UltraMushroom;                               // 0x0288 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> CrimsonHazeDamageArea;                         // 0x0290 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> GiantDrillDamageArea;                          // 0x0298 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> ScytheVortexDamageArea;                        // 0x02A0 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> CrystalBarrageDamageArea;                      // 0x02A8 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> EnergyRingDamageArea;                          // 0x02B0 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> IceStormDamageArea;                            // 0x02B8 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> FireStormDamageArea;                           // 0x02C0 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> LightningStormDamageArea;                      // 0x02C8 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> PoisonStormDamageArea;                         // 0x02D0 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> IceExplosionDamageArea;                        // 0x02D8 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> FireExplosionDamageArea;                       // 0x02E0 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> LightningExplosionDamageArea;                  // 0x02E8 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> PoisonExplosionDamageArea;                     // 0x02F0 (size: 0x8)
    TSubclassOf<class ACrabStrike> MeteorShowerStrike;                                // 0x02F8 (size: 0x8)
    TSubclassOf<class ACrabStrike> CriticalArrow;                                     // 0x0300 (size: 0x8)
    TSubclassOf<class ACrabStrike> IceStrike;                                         // 0x0308 (size: 0x8)
    TSubclassOf<class ACrabStrike> FireStrike;                                        // 0x0310 (size: 0x8)
    TSubclassOf<class ACrabStrike> LightningStrike;                                   // 0x0318 (size: 0x8)
    TSubclassOf<class ACrabStrike> PoisonStrike;                                      // 0x0320 (size: 0x8)
    TSubclassOf<class ACrabStrike> SpikeStrike;                                       // 0x0328 (size: 0x8)
    TSubclassOf<class ACrabStrike> CrystalStrike;                                     // 0x0330 (size: 0x8)
    TSubclassOf<class ACrabStrike> CriticalLightning;                                 // 0x0338 (size: 0x8)
    class UNiagaraSystem* HealFX;                                                     // 0x0340 (size: 0x8)
    class USoundCue* HealSound;                                                       // 0x0348 (size: 0x8)
    class UNiagaraSystem* MaxHealthUpFX;                                              // 0x0350 (size: 0x8)
    class USoundCue* MaxHealthUpSound;                                                // 0x0358 (size: 0x8)
    class UNiagaraSystem* IceAuraFX;                                                  // 0x0360 (size: 0x8)
    class USoundCue* IceAuraSound;                                                    // 0x0368 (size: 0x8)
    class UNiagaraSystem* FireAuraFX;                                                 // 0x0370 (size: 0x8)
    class USoundCue* FireAuraSound;                                                   // 0x0378 (size: 0x8)
    class UNiagaraSystem* LightningAuraFX;                                            // 0x0380 (size: 0x8)
    class USoundCue* LightningAuraSound;                                              // 0x0388 (size: 0x8)
    class UNiagaraSystem* PoisonAuraFX;                                               // 0x0390 (size: 0x8)
    class USoundCue* PoisonAuraSound;                                                 // 0x0398 (size: 0x8)
    class UNiagaraSystem* RareTreasureFX;                                             // 0x03A0 (size: 0x8)
    class USoundCue* RareTreasureSound;                                               // 0x03A8 (size: 0x8)
    class UNiagaraSystem* ExplodingEnemiesFX;                                         // 0x03B0 (size: 0x8)
    class USoundCue* ExplodingEnemiesSound;                                           // 0x03B8 (size: 0x8)
    class UNiagaraSystem* IceDashFX;                                                  // 0x03C0 (size: 0x8)
    class USoundCue* IceDashSound;                                                    // 0x03C8 (size: 0x8)
    class UNiagaraSystem* LightningDashFX;                                            // 0x03D0 (size: 0x8)
    class USoundCue* LightningDashSound;                                              // 0x03D8 (size: 0x8)
    class UNiagaraSystem* PowerslideFX;                                               // 0x03E0 (size: 0x8)
    class USoundCue* PowerslideSound;                                                 // 0x03E8 (size: 0x8)
    TSubclassOf<class ACrabPhysicsActor> LobbyPhysicsCrown;                           // 0x03F0 (size: 0x8)
    TSubclassOf<class ACrabTurret> SentryTurret;                                      // 0x03F8 (size: 0x8)
    TSubclassOf<class ACrabTurret> SniperTurret;                                      // 0x0400 (size: 0x8)
    TSubclassOf<class ACrabTurret> MortarTurret;                                      // 0x0408 (size: 0x8)
    TSubclassOf<class ACrabTurret> WaveTurret;                                        // 0x0410 (size: 0x8)
    TSubclassOf<class ACrabTurret> BeamTurret;                                        // 0x0418 (size: 0x8)
    TArray<class TSubclassOf<ACrabTotem>> IslandTotems;                               // 0x0420 (size: 0x10)
    TArray<class TSubclassOf<ACrabTotem>> ShopTotems;                                 // 0x0430 (size: 0x10)
    TSubclassOf<class ACrabTotem> ContractTotem;                                      // 0x0440 (size: 0x8)
    TSubclassOf<class ACrabTotem> XLTotem;                                            // 0x0448 (size: 0x8)
    TSubclassOf<class ACrabTotem> RerollTotem;                                        // 0x0450 (size: 0x8)
    TSubclassOf<class ACrabGauntlet> IncreaseChallengeGauntlet;                       // 0x0458 (size: 0x8)
    TSubclassOf<class ACrabGauntlet> EndIslandGauntlet;                               // 0x0460 (size: 0x8)
    class UCrabProjectileDA* EnemyMirroredProjectileDA;                               // 0x0468 (size: 0x8)
    class UCrabProjectileDA* EnemyShrapnelProjectileDA;                               // 0x0470 (size: 0x8)
    class UCrabProjectileDA* EnemyHomingThornDA;                                      // 0x0478 (size: 0x8)
    TSubclassOf<class ACrabDestructible> EnemyHomingBarrel;                           // 0x0480 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> EnemyIceDamageArea;                            // 0x0488 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> EnemyFireDamageArea;                           // 0x0490 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> EnemyLightningDamageArea;                      // 0x0498 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> EnemyPoisonDamageArea;                         // 0x04A0 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> EnemyEnergyRingDamageArea;                     // 0x04A8 (size: 0x8)
    TSubclassOf<class ACrabStrike> EnemySpikeStrike;                                  // 0x04B0 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> FreezingGroundDamageArea;                      // 0x04B8 (size: 0x8)
    TSubclassOf<class ACrabDamageArea> BurningGroundDamageArea;                       // 0x04C0 (size: 0x8)
    TSubclassOf<class ACrabHarvestArea> RevivalHarvestArea;                           // 0x04C8 (size: 0x8)
    TArray<class TSubclassOf<ACrabHarvestArea>> HarvestAreas;                         // 0x04D0 (size: 0x10)
    TArray<class TSubclassOf<ACrabDestructible>> DemolitionDestructibles;             // 0x04E0 (size: 0x10)
    TArray<class TSubclassOf<ACrabDestructible>> ParkourDestructibles;                // 0x04F0 (size: 0x10)
    TSubclassOf<class ACrabDestructible> HealthRock;                                  // 0x0500 (size: 0x8)
    TSubclassOf<class ACrabDestructible> CrystalAsteroid;                             // 0x0508 (size: 0x8)
    TSubclassOf<class ACrabSpawnPoint> RewardSpawnPoint;                              // 0x0510 (size: 0x8)
    TSubclassOf<class ACrabChest> DamageChest;                                        // 0x0518 (size: 0x8)
    TSubclassOf<class ACrabChest> CriticalChest;                                      // 0x0520 (size: 0x8)
    TSubclassOf<class ACrabChest> ElementalChest;                                     // 0x0528 (size: 0x8)
    TSubclassOf<class ACrabChest> SpeedChest;                                         // 0x0530 (size: 0x8)
    TSubclassOf<class ACrabChest> LuckChest;                                          // 0x0538 (size: 0x8)
    TSubclassOf<class ACrabChest> HealthChest;                                        // 0x0540 (size: 0x8)
    TSubclassOf<class ACrabChest> EconomyChest;                                       // 0x0548 (size: 0x8)
    TSubclassOf<class ACrabChest> SkillChest;                                         // 0x0550 (size: 0x8)
    TSubclassOf<class ACrabChest> GreedChest;                                         // 0x0558 (size: 0x8)
    TSubclassOf<class ACrabChest> UpgradeChest;                                       // 0x0560 (size: 0x8)
    TSubclassOf<class ACrabChest> RandomChest;                                        // 0x0568 (size: 0x8)
    TSubclassOf<class ACrabAnvil> Anvil;                                              // 0x0570 (size: 0x8)
    TSubclassOf<class ACrabChest> RelicChest;                                         // 0x0578 (size: 0x8)
    TSubclassOf<class ACrabChest> SpikedChest;                                        // 0x0580 (size: 0x8)
    TSubclassOf<class ACrabChest> EpicChest;                                          // 0x0588 (size: 0x8)
    TSubclassOf<class ACrabChest> LegendaryChest;                                     // 0x0590 (size: 0x8)
    TSubclassOf<class ACrabChest> RegenerationChest;                                  // 0x0598 (size: 0x8)
    TSubclassOf<class ACrabChest> KeyChest;                                           // 0x05A0 (size: 0x8)
    TSubclassOf<class ACrabChest> SecretChest;                                        // 0x05A8 (size: 0x8)
    class USoundCue* CommonPickupSound;                                               // 0x05B0 (size: 0x8)
    class USoundCue* EpicPickupSound;                                                 // 0x05B8 (size: 0x8)
    class USoundCue* LegendaryPickupSound;                                            // 0x05C0 (size: 0x8)
    class USoundCue* StreamerLootUpgradePickupSound;                                  // 0x05C8 (size: 0x8)
    class USoundCue* PurchaseSound;                                                   // 0x05D0 (size: 0x8)
    class USoundCue* BossMusic;                                                       // 0x05D8 (size: 0x8)
    class USoundCue* VictoryMusic;                                                    // 0x05E0 (size: 0x8)
    TSubclassOf<class ACrabShopPedestal> ShopPedestal;                                // 0x05E8 (size: 0x8)
    TSubclassOf<class ACrabShopPedestal> InfiniteShopPedestal;                        // 0x05F0 (size: 0x8)
    TSubclassOf<class ACrabEnemyC> TargetDummy;                                       // 0x05F8 (size: 0x8)
    TSubclassOf<class ACrabEnemyC> ImmortalSnail;                                     // 0x0600 (size: 0x8)
    TSubclassOf<class ACrabEnemyC> Starfish;                                          // 0x0608 (size: 0x8)
    class UEnvQuery* FindSafeSpawnLocsEnvQuery;                                       // 0x0610 (size: 0x8)
    TSubclassOf<class ACrabPortal> NewRunPortal;                                      // 0x0618 (size: 0x8)
    TSubclassOf<class ACrabPortal> ContinueRunPortal;                                 // 0x0620 (size: 0x8)
    TSubclassOf<class ACrabPortal> ArenaPortal;                                       // 0x0628 (size: 0x8)
    TSubclassOf<class ACrabPortal> HordePortal;                                       // 0x0630 (size: 0x8)
    TSubclassOf<class ACrabPortal> DemolitionPortal;                                  // 0x0638 (size: 0x8)
    TSubclassOf<class ACrabPortal> GauntletPortal;                                    // 0x0640 (size: 0x8)
    TSubclassOf<class ACrabPortal> ParkourPortal;                                     // 0x0648 (size: 0x8)
    TSubclassOf<class ACrabPortal> ShopPortal;                                        // 0x0650 (size: 0x8)
    TSubclassOf<class ACrabPortal> ElitePortal;                                       // 0x0658 (size: 0x8)
    TSubclassOf<class ACrabPortal> BossPortal;                                        // 0x0660 (size: 0x8)
    TSubclassOf<class ACrabPortal> BiomePortal;                                       // 0x0668 (size: 0x8)
    TSubclassOf<class ACrabPortal> CrabIslandPortal;                                  // 0x0670 (size: 0x8)
    TSubclassOf<class ACrabPortal> LoopPortal;                                        // 0x0678 (size: 0x8)
    class UStaticMesh* DamageIcon;                                                    // 0x0680 (size: 0x8)
    class UStaticMesh* CriticalIcon;                                                  // 0x0688 (size: 0x8)
    class UStaticMesh* ElementalIcon;                                                 // 0x0690 (size: 0x8)
    class UStaticMesh* SpeedIcon;                                                     // 0x0698 (size: 0x8)
    class UStaticMesh* LuckIcon;                                                      // 0x06A0 (size: 0x8)
    class UStaticMesh* HealthIcon;                                                    // 0x06A8 (size: 0x8)
    class UStaticMesh* EconomyIcon;                                                   // 0x06B0 (size: 0x8)
    class UStaticMesh* SkillIcon;                                                     // 0x06B8 (size: 0x8)
    class UStaticMesh* GreedIcon;                                                     // 0x06C0 (size: 0x8)
    class UStaticMesh* UpgradeIcon;                                                   // 0x06C8 (size: 0x8)
    class UStaticMesh* RandomIcon;                                                    // 0x06D0 (size: 0x8)
    class UStaticMesh* AnvilIcon;                                                     // 0x06D8 (size: 0x8)
    class UStaticMesh* RelicIcon;                                                     // 0x06E0 (size: 0x8)
    class UStaticMesh* SpikedIcon;                                                    // 0x06E8 (size: 0x8)
    class UTexture2D* BronzeMedalIcon;                                                // 0x06F0 (size: 0x8)
    class UTexture2D* SilverMedalIcon;                                                // 0x06F8 (size: 0x8)
    class UTexture2D* GoldMedalIcon;                                                  // 0x0700 (size: 0x8)
    class UTexture2D* SapphireMedalIcon;                                              // 0x0708 (size: 0x8)
    class UTexture2D* EmeraldMedalIcon;                                               // 0x0710 (size: 0x8)
    class UTexture2D* RubyMedalIcon;                                                  // 0x0718 (size: 0x8)
    class UTexture2D* DiamondMedalIcon;                                               // 0x0720 (size: 0x8)
    class UMaterialInterface* PrismaticMedalMat;                                      // 0x0728 (size: 0x8)

}; // Size: 0x730

class UCrabStatics : public UObject
{
}; // Size: 0x28

class UCrabStatsUI : public UCrabUI
{
    class UTextBlock* PlayerNameText;                                                 // 0x02B8 (size: 0x8)
    class UTextBlock* DifficultyText;                                                 // 0x02C0 (size: 0x8)
    class UTextBlock* AttemptsText;                                                   // 0x02C8 (size: 0x8)
    class UTextBlock* WinsText;                                                       // 0x02D0 (size: 0x8)
    class UTextBlock* WinStreakText;                                                  // 0x02D8 (size: 0x8)
    class UTextBlock* HighestIslandReachedText;                                       // 0x02E0 (size: 0x8)
    class UTextBlock* TotalUnlockedPercentageText;                                    // 0x02E8 (size: 0x8)
    class UProgressBar* TotalUnlockedPB;                                              // 0x02F0 (size: 0x8)
    class UTextBlock* CosmeticsUnlockedText;                                          // 0x02F8 (size: 0x8)
    class UTextBlock* TotalCosmeticsToUnlockText;                                     // 0x0300 (size: 0x8)
    class UProgressBar* CosmeticsUnlockedPB;                                          // 0x0308 (size: 0x8)
    class UTextBlock* WeaponsUnlockedText;                                            // 0x0310 (size: 0x8)
    class UTextBlock* TotalWeaponsToUnlockText;                                       // 0x0318 (size: 0x8)
    class UProgressBar* WeaponsUnlockedPB;                                            // 0x0320 (size: 0x8)
    class UTextBlock* AbilitiesUnlockedText;                                          // 0x0328 (size: 0x8)
    class UTextBlock* TotalAbilitiesToUnlockText;                                     // 0x0330 (size: 0x8)
    class UProgressBar* AbilitiesUnlockedPB;                                          // 0x0338 (size: 0x8)
    class UTextBlock* MeleeWeaponsUnlockedText;                                       // 0x0340 (size: 0x8)
    class UTextBlock* TotalMeleeWeaponsToUnlockText;                                  // 0x0348 (size: 0x8)
    class UProgressBar* MeleeWeaponsUnlockedPB;                                       // 0x0350 (size: 0x8)
    class UTextBlock* WeaponModsUnlockedText;                                         // 0x0358 (size: 0x8)
    class UTextBlock* TotalWeaponModsToUnlockText;                                    // 0x0360 (size: 0x8)
    class UProgressBar* WeaponModsUnlockedPB;                                         // 0x0368 (size: 0x8)
    class UTextBlock* AbilityModsUnlockedText;                                        // 0x0370 (size: 0x8)
    class UTextBlock* TotalAbilityModsToUnlockText;                                   // 0x0378 (size: 0x8)
    class UProgressBar* AbilityModsUnlockedPB;                                        // 0x0380 (size: 0x8)
    class UTextBlock* MeleeModsUnlockedText;                                          // 0x0388 (size: 0x8)
    class UTextBlock* TotalMeleeModsToUnlockText;                                     // 0x0390 (size: 0x8)
    class UProgressBar* MeleeModsUnlockedPB;                                          // 0x0398 (size: 0x8)
    class UTextBlock* PerksUnlockedText;                                              // 0x03A0 (size: 0x8)
    class UTextBlock* TotalPerksToUnlockText;                                         // 0x03A8 (size: 0x8)
    class UProgressBar* PerksUnlockedPB;                                              // 0x03B0 (size: 0x8)
    class UTextBlock* RelicsUnlockedText;                                             // 0x03B8 (size: 0x8)
    class UTextBlock* TotalRelicsToUnlockText;                                        // 0x03C0 (size: 0x8)
    class UProgressBar* RelicsUnlockedPB;                                             // 0x03C8 (size: 0x8)

}; // Size: 0x3D0

class UCrabStrikeActionDA : public UCrabActionDA
{
    ECrabTargetType TargetType;                                                       // 0x0068 (size: 0x1)
    TSubclassOf<class ACrabStrike> StrikeToSpawn;                                     // 0x0070 (size: 0x8)
    int32 NumLineStrikesToSpawn;                                                      // 0x0078 (size: 0x4)
    float LineStrikeSpawnFrequency;                                                   // 0x007C (size: 0x4)
    ECrabFormationType FormationType;                                                 // 0x0080 (size: 0x1)
    float FormationSpacing;                                                           // 0x0084 (size: 0x4)
    float FormationArcStrength;                                                       // 0x0088 (size: 0x4)
    float Spread;                                                                     // 0x008C (size: 0x4)

}; // Size: 0x90

class UCrabUI : public UUserWidget
{
}; // Size: 0x2B8

class UCrabUnlockedCosmeticUI : public UCrabUI
{
    class UTextBlock* ChallengeDescriptionText;                                       // 0x02B8 (size: 0x8)
    class UTextBlock* CosmeticTypeText;                                               // 0x02C0 (size: 0x8)
    class UTextBlock* CosmeticNameText;                                               // 0x02C8 (size: 0x8)
    class UImage* CosmeticIconImage;                                                  // 0x02D0 (size: 0x8)
    class UWidgetAnimation* UnlockedAnim;                                             // 0x02D8 (size: 0x8)

}; // Size: 0x2E0

class UCrabVideoMenuUI : public UCrabUI
{
    TArray<class UWidget*> VideoMenuFocusableWidgetArray;                             // 0x02B8 (size: 0x10)
    class UCrabArrowSelectionUI* DisplayModeAS;                                       // 0x03D8 (size: 0x8)
    class UCrabArrowSelectionUI* ResolutionAS;                                        // 0x03E0 (size: 0x8)
    class UCrabArrowSelectionUI* ResolutionQualityAS;                                 // 0x03E8 (size: 0x8)
    class UCrabArrowSelectionUI* FPSLimitAS;                                          // 0x03F0 (size: 0x8)
    class UCrabArrowSelectionUI* VSyncAS;                                             // 0x03F8 (size: 0x8)
    class UCrabArrowSelectionUI* FieldOfViewAS;                                       // 0x0400 (size: 0x8)
    class UCrabArrowSelectionUI* GraphicsQualityAS;                                   // 0x0408 (size: 0x8)
    class UCrabArrowSelectionUI* WeaponEffectsAS;                                     // 0x0410 (size: 0x8)
    class UCrabArrowSelectionUI* AntiAliasingTypeAS;                                  // 0x0418 (size: 0x8)
    class UCrabArrowSelectionUI* SharpeningAS;                                        // 0x0420 (size: 0x8)
    class UCrabArrowSelectionUI* MotionBlurAS;                                        // 0x0428 (size: 0x8)
    class UCrabArrowSelectionUI* CameraShakeAS;                                       // 0x0430 (size: 0x8)
    class UCrabArrowSelectionUI* HitmarkersAS;                                        // 0x0438 (size: 0x8)
    class UCrabArrowSelectionUI* DamageNumbersAS;                                     // 0x0440 (size: 0x8)
    class UCrabArrowSelectionUI* TextChatVisibilityAS;                                // 0x0448 (size: 0x8)
    class UCrabArrowSelectionUI* ShowFPSAS;                                           // 0x0450 (size: 0x8)
    class UCrabArrowSelectionUI* PauseWhenLosingFocusAS;                              // 0x0458 (size: 0x8)

    void SetWeaponEffects(FString NewSelection);
    void SetVSync(FString NewSelection);
    void SetTextChatVisibility(FString NewSelection);
    void SetShowFPS(FString NewSelection);
    void SetSharpening(FString NewSelection);
    void SetResolutionQuality(FString NewSelection);
    void SetResolution(FString NewSelection);
    void SetPauseWhenLosingFocus(FString NewSelection);
    void SetMotionBlur(FString NewSelection);
    void SetHitmarkers(FString NewSelection);
    void SetGraphicsQuality(FString NewSelection);
    void SetFPSLimit(FString NewSelection);
    void SetFieldOfView(FString NewSelection);
    void SetDisplayMode(FString NewSelection);
    void SetDamageNumbers(FString NewSelection);
    void SetCameraShake(FString NewSelection);
    void SetAntiAliasingType(FString NewSelection);
}; // Size: 0x460

class UCrabWeaponDA : public UCrabPickupDA
{
    class UStaticMesh* Mesh;                                                          // 0x00B0 (size: 0x8)
    bool bDualWield;                                                                  // 0x00B8 (size: 0x1)
    class UCrabProjectileDA* ProjectileDA;                                            // 0x00C0 (size: 0x8)
    FCrabWeaponMod StartingWeaponMod;                                                 // 0x00C8 (size: 0x28)
    float AimingFOVMultiplier;                                                        // 0x00F0 (size: 0x4)
    FVector AimingSpringArmOffset;                                                    // 0x00F4 (size: 0xC)
    ECrabCrosshairType CrosshairType;                                                 // 0x0100 (size: 0x1)
    ECrabHitmarkerType HitmarkerType;                                                 // 0x0101 (size: 0x1)
    ECrabFireMode FireMode;                                                           // 0x0102 (size: 0x1)
    ECrabShotDirType ShotDirType;                                                     // 0x0103 (size: 0x1)
    ECrabShotSpawnType ShotSpawnType;                                                 // 0x0104 (size: 0x1)
    bool bFireFromRoot;                                                               // 0x0105 (size: 0x1)
    ECrabFormationType FormationType;                                                 // 0x0106 (size: 0x1)
    float FormationSpacing;                                                           // 0x0108 (size: 0x4)
    float FormationExpansionDampening;                                                // 0x010C (size: 0x4)
    int32 ShotsPerBurst;                                                              // 0x0110 (size: 0x4)
    float TimeBetweenBurstShots;                                                      // 0x0114 (size: 0x4)
    float BaseFireRate;                                                               // 0x0118 (size: 0x4)
    float WeaponModTriggerRollMultiplier;                                             // 0x011C (size: 0x4)
    float BaseSpread;                                                                 // 0x0120 (size: 0x4)
    float FiringSpreadIncrement;                                                      // 0x0124 (size: 0x4)
    float MaxSpread;                                                                  // 0x0128 (size: 0x4)
    float SpreadRecovery;                                                             // 0x012C (size: 0x4)
    float AimingSpreadMultiplier;                                                     // 0x0130 (size: 0x4)
    float VerticalRecoil;                                                             // 0x0134 (size: 0x4)
    float HorizontalRecoil;                                                           // 0x0138 (size: 0x4)
    float RecoilInterpSpeed;                                                          // 0x013C (size: 0x4)
    float RecoilRecoveryInterpSpeed;                                                  // 0x0140 (size: 0x4)
    float SelfKnockbackStrength;                                                      // 0x0144 (size: 0x4)
    int32 BaseClipSize;                                                               // 0x0148 (size: 0x4)
    bool bInfiniteClipSize;                                                           // 0x014C (size: 0x1)
    float ReloadDuration;                                                             // 0x0150 (size: 0x4)
    class UAnimMontage* EquipMontage;                                                 // 0x0158 (size: 0x8)
    class USoundCue* EquipSound;                                                      // 0x0160 (size: 0x8)
    class UNiagaraSystem* CosmeticFX;                                                 // 0x0168 (size: 0x8)
    class UAnimMontage* FireMontage;                                                  // 0x0170 (size: 0x8)
    class UAnimMontage* DualWieldFireMontage;                                         // 0x0178 (size: 0x8)
    class UAnimMontage* FloatFireMontage;                                             // 0x0180 (size: 0x8)
    class UNiagaraSystem* MuzzleFlashFX;                                              // 0x0188 (size: 0x8)
    class USoundCue* GunshotSound;                                                    // 0x0190 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> GunshotCameraShake;                           // 0x0198 (size: 0x8)
    class USoundCue* LowAmmoSound;                                                    // 0x01A0 (size: 0x8)
    float PostFireClearChamberDelay;                                                  // 0x01A8 (size: 0x4)
    class UAnimMontage* PostFireClearChamberMontage;                                  // 0x01B0 (size: 0x8)
    class USoundCue* PostFireClearChamberSound;                                       // 0x01B8 (size: 0x8)
    class USoundCue* EmptyClipSound;                                                  // 0x01C0 (size: 0x8)
    class UAnimMontage* ReloadMontage;                                                // 0x01C8 (size: 0x8)
    class UAnimMontage* DualWieldReloadMontage;                                       // 0x01D0 (size: 0x8)
    class USoundCue* MagOutSound;                                                     // 0x01D8 (size: 0x8)
    class USoundCue* MagInSound;                                                      // 0x01E0 (size: 0x8)

}; // Size: 0x1E8

class UCrabWeaponModDA : public UCrabInventoryDA
{
    ECrabWeaponModType WeaponModType;                                                 // 0x00D8 (size: 0x1)
    ECrabTriggerChanceType TriggerChanceType;                                         // 0x00D9 (size: 0x1)

}; // Size: 0xE0

#endif
