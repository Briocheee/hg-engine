.nds
.thumb

.include "armips/include/battlescriptcmd.s"
.include "armips/include/abilities.s"
.include "armips/include/itemnums.s"
.include "armips/include/monnums.s"
.include "armips/include/movenums.s"
.include "armips/include/constants.s"

// handle field effects sub script

.create "build/move/battle_sub_seq/1_345", 0x0

handleFieldEffectsSubScript:
    ifcurrentfieldistype TERRAIN_GRASS, IsGrassTerrain
    ifcurrentfieldistype TERRAIN_CAVE, IsCaveField
    goto DefaultOrEnd
IsGrassTerrain:
        if IF_EQUAL, VAR_CURRENT_MOVE, MOVE_FAIRY_WIND, GrassTerrainWindBoost
        if IF_EQUAL, VAR_CURRENT_MOVE, MOVE_SILVER_WIND, GrassTerrainWindBoost
        if IF_EQUAL, VAR_CURRENT_MOVE, MOVE_MUDDY_WATER, GrassTerrainSoftenNerf
        if IF_EQUAL, VAR_CURRENT_MOVE, MOVE_SURF, GrassTerrainSoftenNerf
        if IF_EQUAL, VAR_CURRENT_MOVE, MOVE_EARTHQUAKE, GrassTerrainSoftenNerf
        if IF_EQUAL, VAR_CURRENT_MOVE, MOVE_MAGNITUDE, GrassTerrainSoftenNerf
        if IF_EQUAL, VAR_CURRENT_MOVE, MOVE_BULLDOZE, GrassTerrainSoftenNerf
        ifmovepowergreaterthanzero GrassTerrainTypeCheck
        goto DefaultOrEnd
    GrassTerrainTypeCheck:
        checkifcurrentadjustedmoveistype TYPE_FIRE, GrassTerrainDefenderGroundedCheck
        checkifcurrentadjustedmoveistype TYPE_GRASS, GrassTerrainAttackerGroundedCheck
        goto DefaultOrEnd
    GrassTerrainDefenderGroundedCheck:
        ifgrounded BATTLER_DEFENDER, GrassTerrainFireBoost
        goto DefaultOrEnd
    GrassTerrainAttackerGroundedCheck:
        ifgrounded BATTLER_ATTACKER, GrassTerrainGrassBoost
        goto DefaultOrEnd
    GrassTerrainFireBoost:
        changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0xD // 1.3 multiplier
        printattackmessage
        waitmessage
        wait 0x1E
        printmessage 1389, TAG_NONE, "NaN", "NaN", "NaN", "NaN", "NaN", "NaN" // The grass below caught flame!
        waitmessage
        wait 0x1E
        endscript
    GrassTerrainGrassBoost:
        changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0xD // 1.3 multiplier
        printattackmessage
        waitmessage
        wait 0x1E
        printmessage 1390, TAG_NONE, "NaN", "NaN", "NaN", "NaN", "NaN", "NaN" // The Grassy Terrain strengthened the attack!
        wait 0x1E
        endscript
    GrassTerrainWindBoost:
        changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0xD // 1.3 multiplier
        printattackmessage
        waitmessage
        wait 0x1E
        printmessage 1391, TAG_NONE, "NaN", "NaN", "NaN", "NaN", "NaN", "NaN" // The wind picked up strength from the field!
        waitmessage
        wait 0x1E
        endscript
    GrassTerrainSoftenNerf:
        changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0x5 // 0.5 multiplier
        printattackmessage
        waitmessage
        wait 0x1E
        printmessage 1392, TAG_NONE, "NaN", "NaN", "NaN", "NaN", "NaN", "NaN" // The grass softened the attack...
        waitmessage
        wait 0x1E
        endscript

IsCaveField:
    // Ground type attacks can hit airborne Pokemon
        // changevar VAR_OP_SET, VAR_CLIENT_NO_AGI, 0x0
    // CaveFieldGroundBattlersLoop:
        // orderbattlersbyspeed 0x14
        // setoneturnflag BATTLER_xFF, OTF_ROOST, 0x1
        // changevar VAR_OP_ADD, VAR_CLIENT_NO_AGI, 0x1
        // jumpifvarisvalidbattler VAR_CLIENT_NO_AGI, CaveFieldGroundBattlersLoop
        ifmovepowergreaterthanzero CaveFieldTypeCheck
        goto DefaultOrEnd
    CaveFieldTypeCheck:
        checkifcurrentadjustedmoveistype TYPE_ROCK, CaveFieldRockBoost
        checkifcurrentadjustedmoveistype TYPE_FLYING, CaveFieldCheckContactMove
        goto CaveFieldOtherChecks
    CaveFieldCheckContactMove:
        ifcontactmove CaveFieldOtherChecks
        // Non-contact Flying moves decrease in base power x0.5
        goto CaveFieldChokeNerf
    CaveFieldChokeNerf:
        changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0x5 // 0.5 multiplier
        printattackmessage
        waitmessage
        wait 0x1E
        printmessage 1398, TAG_NONE, "NaN", "NaN", "NaN", "NaN", "NaN", "NaN" // The cave choked out the air!
        waitmessage
        wait 0x1E
        goto CaveFieldOtherChecks
    CaveFieldRockBoost:
        changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0xD // 1.3 multiplier
        printattackmessage
        waitmessage
        wait 0x1E
        printmessage 1399, TAG_NONE, "NaN", "NaN", "NaN", "NaN", "NaN", "NaN" // The cavern strengthened the attack!
        waitmessage
        wait 0x1E
        goto CaveFieldOtherChecks
    CaveFieldOtherChecks:
        if IF_EQUAL, VAR_CURRENT_MOVE, MOVE_ROCK_TOMB, CaveFieldPiledOnBoost
        ifsoundmove CaveFieldSoundBuff
        goto DefaultOrEnd
    CaveFieldSoundBuff:
        changevar VAR_OP_MUL, VAR_DAMAGE_MULT, 0xD // 1.3 multiplier
        printattackmessage
        waitmessage
        wait 0x1E
        printmessage 1397, TAG_NONE, "NaN", "NaN", "NaN", "NaN", "NaN", "NaN" // ECHO-Echo-echo!
        waitmessage
        wait 0x1E
        endscript
    CaveFieldPiledOnBoost:
        changevar VAR_OP_MUL, VAR_DAMAGE_MULT, 0xD // 1.3 * 1.3 = 1.7 multiplier
        printmessage 1400, TAG_NONE, "NaN", "NaN", "NaN", "NaN", "NaN", "NaN" // ...Piled on!
        waitmessage
        wait 0x1E
        endscript

DefaultOrEnd:
    endscript

.close
