class ViralHatchet extends ToolBase
{
    override void SetActions()
    {
        super.SetActions();

        AddAction(ActionMineTree);
        AddAction(ActionMineTreeBark);
        AddAction(ActionMineBush);
        AddAction(ActionRepairPart);
        AddAction(ActionDismantlePart);
        AddAction(ActionBuildPart);
        AddAction(ActionUnrestrainTarget);
        AddAction(ActionSkinning);
        AddAction(ActionCraftBolts);
        AddAction(ActionDigWorms);
    }
};
