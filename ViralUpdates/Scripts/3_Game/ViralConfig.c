class ViralConfig
{
    // Config file location in the server profile directory
    private const static string ViralModFolder = "$profile:\\Viral\\";
	private const static string ViralConfigName = "ViralConfig.json";

    // Static constant config version (used for versioning, not saved to JSON)
	static const string CONFIG_VERSION = "0.0.1";

    // Data fields stored in the configuration
	string ConfigVersion = ""; // Stores the current config version
    string CONFIG_DATA = "-----------------------------------------------------------------------------------------------------------------------"; // Divider for organization

    // Hatchet durability settings
    float HatchetDurability = 0.75; // Durability of the Viral Hatchet (0.75 = 75%)

    // Loads the configuration file, or creates a new one if it doesn't exist
	void Load()
    {
		// Check if the config file exists
		if (FileExist(ViralModFolder + ViralConfigName))
		{ 
			// Load the existing config file
			JsonFileLoader<ViralConfig>.JsonLoadFile(ViralModFolder + ViralConfigName, this);

			// If the version doesn't match, backup the old version
			if (ConfigVersion != CONFIG_VERSION)
			{
				JsonFileLoader<ViralConfig>.JsonSaveFile(ViralModFolder + ViralConfigName + "_old", this);
			}
			else
			{
				// If the config version matches, no further action is needed
				return;
			}
		}

		// If the config file doesn't exist, set default values
		ConfigVersion = CONFIG_VERSION;

		// Save the default config
		Save();
	}

    // Saves the configuration to a file
	void Save()
	{
		// If the folder doesn't exist, create it
		if (!FileExist(ViralModFolder))
		{ 
			MakeDirectory(ViralModFolder);
		}

		// Save the configuration in JSON format
		JsonFileLoader<ViralConfig>.JsonSaveFile(ViralModFolder + ViralConfigName, this);
	}
}

// Reference to the global configuration object
ref ViralConfig m_ViralConfig;

// Function to access the configuration object
static ViralConfig GetViralConfig()
{
	// Initialize the config only if it doesn't already exist and is running on a dedicated server
	if (!m_ViralConfig && GetGame().IsDedicatedServer())
	{
		Print("[ViralConfig] Initializing configuration...");
		m_ViralConfig = new ViralConfig;
		m_ViralConfig.Load();
	}

	return m_ViralConfig;
};