class DynamicMusicPlayerRegistryDeerisle : DynamicMusicPlayerRegistry
{
	//*** Change "ViralUpdates"  (AND Music_x) !!!  
	//	Make sure you use the soundset names you made in config.cpp, or comment out anything and DayZ should use it's music
	
    void DynamicMusicPlayerRegistryDeerisle()
    {
        m_WorldName = "deerisle";
    }

    override void RegisterTracksMenu()
    {
		// your main menu music
        m_TracksMenu = new array<ref DynamicMusicTrackData>();

        RegisterTrackMenu("ViralLoadingScreenV2_Music_1_SoundSet");
    }

    override void RegisterTracksTime()
    {
        m_TracksTime = new array<ref DynamicMusicTrackData>();
		
		//DAY
		//RegisterTrackTime("ViralLoadingScreenV2_Music_1_SoundSet", DynamicMusicPlayerTimeOfDay.DAY);
		
		//NIGHT
		RegisterTrackTime("ViralLoadingScreenV2_Music_2_SoundSet", DynamicMusicPlayerTimeOfDay.NIGHT);
		
		//DAWN
		//RegisterTrackTime("ViralLoadingScreenV2_Music_3_SoundSet", DynamicMusicPlayerTimeOfDay.DAWN);
		
		//DUSK
		//RegisterTrackTime("ViralLoadingScreenV2_Music_4_SoundSet", DynamicMusicPlayerTimeOfDay.DUSK);
    }
		
	override protected void RegisterTracksLocationStatic()
	{
        m_TracksLocationStatic = new array<ref DynamicMusicTrackData>();
        m_TracksLocationStaticPrioritized = new array<ref DynamicMusicTrackData>();
		super.RegisterTracksLocationStatic();

		//===================================================================================DEER ISLE=============================================================
		//
		// Military (default any time of day)
		//
		
		
	}

    override void RegisterTracksLocationDynamic()
    {
       
    }
}