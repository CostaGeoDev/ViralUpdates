modded class PlayerBase
{
    // Get the Viral Config object
    private ref ViralConfig vConfig;

    override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
    {
        super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);

        // Define Viral Hatchet type
        const string VIRAL_HATCHET = "ViralHatchet";

        // Check if the player is hit by the Viral Hatchet
        if (source && source.GetType() == VIRAL_HATCHET)
        {
            // Get damage from the 'Health' zone
            if (damageResult)
            {
                float damage = damageResult.GetDamage("Health", "");
                float virusIntensity = Math.Clamp(damage * 100, 500, 1500);

                // Apply the virus agent
                this.InsertAgent(VirusAgents.VIRUS, virusIntensity);

                // Randomize bleeding wound location
                array<string> woundSelections = {"LeftArm", "RightArm", "LeftLeg", "RightLeg", "Torso"};
                string randomSelection = woundSelections.GetRandomElement();
                this.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(randomSelection);

                // Debug log for testing
                Print("[DEBUG] Player hit by Viral Hatchet. Virus applied with intensity: " + virusIntensity + ". Bleeding at: " + randomSelection);

                Print("[DEBUG] Player hit by Viral Hatchet. Virus applied with intensity: " + virusIntensity);

                // Set the hatchet durability to 30%
                if (source)
                {
                    if (!vConfig)
                        vConfig = GetViralConfig();
                    float maxHealth = source.GetMaxHealth("", "");
                    float newHealth = maxHealth * vConfig.HatchetDurability;
                    source.SetHealth("", "", newHealth);
                    Print("[DEBUG] Viral Hatchet durability set to " + (vConfig.HatchetDurability * 100) + "% (" + newHealth + "/" + maxHealth + ").");
                }
            }
            else
            {
                Print("[DEBUG] No damage result available. Virus application skipped.");
            }
        }
    }
};
