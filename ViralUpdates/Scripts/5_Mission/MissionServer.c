modded class MissionServer
{
    override void OnInit()
    {   
        GetViralConfig();
        super.OnInit();
        Print("[Viral Config] OnInit - Loaded config successfully.");
    }
}