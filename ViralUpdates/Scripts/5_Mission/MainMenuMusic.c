modded class MissionMainMenu  // this scripts loads your music
{
	override void PlayMusic()
	{
		ref SoundParams soundParams			= new SoundParams( "ViralLoadingScreenV2_Music_1_SoundSet" ); //********** change "ViralLoadingScreenV2"
		ref SoundObjectBuilder soundBuilder	= new SoundObjectBuilder( soundParams );
		ref SoundObject soundObject			= soundBuilder.BuildSoundObject();
		soundObject.SetKind( WaveKind.WAVEMUSIC );
		m_MenuMusic = GetGame().GetSoundScene().Play2D(soundObject, soundBuilder);
		m_MenuMusic.Loop( true );
		m_MenuMusic.Play();
	}
}