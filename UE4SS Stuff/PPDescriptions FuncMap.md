


Button1Pressed
ReceiveBeginPlay
Setup Debug
Initialize
{
  Initialize Game State
  Initialize Player Reference
  Initialize Damage Map
  Initialize Inventory Data
  Initialize All Pickup Data
  {
    Initialize Weapon Mod Rare Pickup Data
    Initialize Weapon Mod Epic Pickup Data
    Initialize Weapon Mod Legendary Pickup Data
    Initialize Ability Mod Rare Pickup Data
    Initialize Ability Mod Epic Pickup Data
    Initialize Ability Mod Legendary Pickup Data
    Initialize Melee Mod Rare Pickup Data
    Initialize Melee Mod Epic Pickup Data
    Initialize Melee Mod Greed Pickup Data
    Initialize Perk Rare Pickup Data
    Initialize Perk Epic Pickup Data
    Initialize Perk Legendary Pickup Data
    Initialize Perk Greed Pickup Data
    Initialize Relic Greed Pickup Data
    --Initialize One Pickup Data
  }
}
Update
{
  Get Luck Data
  {
    Get Gold Dice Count
    Get Has Luck Ring
  }
  Create PP Pickup Info
  {
    Find Matching Interact Pickup
    Get PP Pickup Info Name
    Get PP Pickup Info Pickup Type
    Get PP Pickup Info Pickup Count
    Get PP Pickup DA
    Get PP Pickup Info Level Description
    Get Inventory Count
    {
      Get Inventory DA Count
    }
    Detect Level Description Text Replacements
    Create PP Pickup Description Info
    {
      Get PP Pickup Description Info Values
      {
        Calculate PP Pickup Description Info Values
        {
          Calculate Hyperbolic Values
          {
            Hyperbolic Formula
          --Calculate Luck Values
          }
          Calculate Linear Values
          {
            Linear Formula
          }
        }
      }
    }
  }
  Set Name Pickup Count Text
  Create and Edit Text
  {
    Get Level Description Text
      Calculate PP Pickup Description Info Capped Values
      Cap Values and Replace Text
      ||Calculate Text
    Create Rich Text Block
    Get Chance Text
    {
      Create Chance Text Line
      {
        Is Luck Perk
        Is Luck Non Perk
        Create Perk Chance Text Line
        {
          Calculate Ring of Luck Capped Efficacy
          Calculate Gold Dice Capped Efficacy
        }
        Create Non Perk Chance Text Lin
      }
    }
  }
}