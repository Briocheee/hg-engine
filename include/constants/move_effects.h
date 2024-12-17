#ifndef CONSTANTS_MOVE_EFFECTS_H
#define CONSTANTS_MOVE_EFFECTS_H

#define MOVE_EFFECT_HIT                                       0
#define MOVE_EFFECT_STATUS_SLEEP                              1
#define MOVE_EFFECT_POISON_HIT                                2
#define MOVE_EFFECT_RECOVER_HALF_DAMAGE_DEALT                 3
#define MOVE_EFFECT_BURN_HIT                                  4
#define MOVE_EFFECT_FREEZE_HIT                                5
#define MOVE_EFFECT_PARALYZE_HIT                              6
#define MOVE_EFFECT_HALVE_DEFENSE                             7
#define MOVE_EFFECT_RECOVER_DAMAGE_SLEEP                      8
#define MOVE_EFFECT_COPY_MOVE                                 9
#define MOVE_EFFECT_ATK_UP                                   10
#define MOVE_EFFECT_DEF_UP                                   11
#define MOVE_EFFECT_SPEED_UP                                 12
#define MOVE_EFFECT_SP_ATK_UP                                13
#define MOVE_EFFECT_SP_DEF_UP                                14
#define MOVE_EFFECT_ACC_UP                                   15
#define MOVE_EFFECT_EVA_UP                                   16
#define MOVE_EFFECT_BYPASS_ACCURACY                          17
#define MOVE_EFFECT_ATK_DOWN                                 18
#define MOVE_EFFECT_DEF_DOWN                                 19
#define MOVE_EFFECT_SPEED_DOWN                               20
#define MOVE_EFFECT_SP_ATK_DOWN                              21
#define MOVE_EFFECT_SP_DEF_DOWN                              22
#define MOVE_EFFECT_ACC_DOWN                                 23
#define MOVE_EFFECT_EVA_DOWN                                 24
#define MOVE_EFFECT_RESET_STAT_CHANGES                       25
#define MOVE_EFFECT_BIDE                                     26
#define MOVE_EFFECT_CONTINUE_AND_CONFUSE_SELF                27
#define MOVE_EFFECT_FORCE_SWITCH                             28
#define MOVE_EFFECT_MULTI_HIT                                29
#define MOVE_EFFECT_CONVERSION                               30
#define MOVE_EFFECT_FLINCH_HIT                               31
#define MOVE_EFFECT_RESTORE_HALF_HP                          32
#define MOVE_EFFECT_STATUS_BADLY_POISON                      33
#define MOVE_EFFECT_INCREASE_PRIZE_MONEY                     34
#define MOVE_EFFECT_SET_LIGHT_SCREEN                         35
#define MOVE_EFFECT_RANDOM_PRIMARY_STATUS_HIT                36
#define MOVE_EFFECT_RECOVER_HEALTH_AND_SLEEP                 37
#define MOVE_EFFECT_ONE_HIT_KO                               38
#define MOVE_EFFECT_CHARGE_TURN_HIGH_CRIT                    39
#define MOVE_EFFECT_HALVE_HP                                 40
#define MOVE_EFFECT_40_DAMAGE_FLAT                           41
#define MOVE_EFFECT_BIND_HIT                                 42
#define MOVE_EFFECT_HIGH_CRITICAL                            43
#define MOVE_EFFECT_HIT_TWICE                                44
#define MOVE_EFFECT_CRASH_ON_MISS                            45
#define MOVE_EFFECT_PREVENT_STAT_REDUCTION                   46
#define MOVE_EFFECT_CRIT_UP_2                                47
#define MOVE_EFFECT_RECOIL_QUARTER                           48
#define MOVE_EFFECT_STATUS_CONFUSE                           49
#define MOVE_EFFECT_ATK_UP_2                                 50
#define MOVE_EFFECT_DEF_UP_2                                 51
#define MOVE_EFFECT_SPEED_UP_2                               52
#define MOVE_EFFECT_SP_ATK_UP_2                              53
#define MOVE_EFFECT_SP_DEF_UP_2                              54
#define MOVE_EFFECT_ACC_UP_2                                 55
#define MOVE_EFFECT_EVA_UP_2                                 56
#define MOVE_EFFECT_TRANSFORM                                57
#define MOVE_EFFECT_ATK_DOWN_2                               58
#define MOVE_EFFECT_DEF_DOWN_2                               59
#define MOVE_EFFECT_SPEED_DOWN_2                             60
#define MOVE_EFFECT_SP_ATK_DOWN_2                            61
#define MOVE_EFFECT_SP_DEF_DOWN_2                            62
#define MOVE_EFFECT_ACC_DOWN_2                               63
#define MOVE_EFFECT_EVA_DOWN_2                               64
#define MOVE_EFFECT_SET_REFLECT                              65
#define MOVE_EFFECT_STATUS_POISON                            66
#define MOVE_EFFECT_STATUS_PARALYZE                          67
#define MOVE_EFFECT_LOWER_ATTACK_HIT                         68
#define MOVE_EFFECT_LOWER_DEFENSE_HIT                        69
#define MOVE_EFFECT_LOWER_SPEED_HIT                          70
#define MOVE_EFFECT_LOWER_SP_ATK_HIT                         71
#define MOVE_EFFECT_LOWER_SP_DEF_HIT                         72
#define MOVE_EFFECT_LOWER_ACCURACY_HIT                       73
#define MOVE_EFFECT_LOWER_EVASION_HIT                        74
#define MOVE_EFFECT_CHARGE_TURN_HIGH_CRIT_FLINCH             75
#define MOVE_EFFECT_CONFUSE_HIT                              76
#define MOVE_EFFECT_POISON_MULTI_HIT                         77
#define MOVE_EFFECT_PRIORITY_NEG_1_BYPASS_ACCURACY           78
#define MOVE_EFFECT_SET_SUBSTITUTE                           79
#define MOVE_EFFECT_RECHARGE_AFTER                           80
#define MOVE_EFFECT_RAISE_ATK_WHEN_HIT                       81
#define MOVE_EFFECT_COPY_MOVE_FOR_BATTLE                     82
#define MOVE_EFFECT_CALL_RANDOM_MOVE                         83
#define MOVE_EFFECT_STATUS_LEECH_SEED                        84
#define MOVE_EFFECT_DO_NOTHING                               85
#define MOVE_EFFECT_DISABLE                                  86
#define MOVE_EFFECT_LEVEL_DAMAGE_FLAT                        87
#define MOVE_EFFECT_RANDOM_DAMAGE_1_TO_150_LEVEL             88
#define MOVE_EFFECT_COUNTER                                  89
#define MOVE_EFFECT_ENCORE                                   90
#define MOVE_EFFECT_AVERAGE_HP                               91
#define MOVE_EFFECT_DAMAGE_WHILE_ASLEEP                      92
#define MOVE_EFFECT_CONVERSION2                              93
#define MOVE_EFFECT_NEXT_ATTACK_ALWAYS_HITS                  94
#define MOVE_EFFECT_LEARN_MOVE_PERMANENT                     95
#define MOVE_EFFECT_UNUSED_96                                96
#define MOVE_EFFECT_USE_RANDOM_LEARNED_MOVE_SLEEP            97
#define MOVE_EFFECT_KO_MON_THAT_DEFEATED_USER                98
#define MOVE_EFFECT_INCREASE_POWER_WITH_LESS_HP              99
#define MOVE_EFFECT_DECREASE_LAST_MOVE_PP                   100
#define MOVE_EFFECT_LEAVE_WITH_1_HP                         101
#define MOVE_EFFECT_CURE_PARTY_STATUS                       102
#define MOVE_EFFECT_PRIORITY_1                              103
#define MOVE_EFFECT_HIT_THREE_TIMES_INCREMENT_BASE_POWER_10 104
#define MOVE_EFFECT_STEAL_HELD_ITEM                         105
#define MOVE_EFFECT_PREVENT_ESCAPE                          106
#define MOVE_EFFECT_STATUS_NIGHTMARE                        107
#define MOVE_EFFECT_EVA_UP_2_MINIMIZE                       108
#define MOVE_EFFECT_CURSE                                   109
#define MOVE_EFFECT_UNUSED_110                              110
#define MOVE_EFFECT_PROTECT                                 111
#define MOVE_EFFECT_SET_SPIKES                              112
#define MOVE_EFFECT_IGNORE_EVASION_REMOVE_GHOST_IMMUNE      113
#define MOVE_EFFECT_ALL_FAINT_3_TURNS                       114
#define MOVE_EFFECT_WEATHER_SANDSTORM                       115
#define MOVE_EFFECT_SURVIVE_WITH_1_HP                       116
#define MOVE_EFFECT_DOUBLE_POWER_EACH_TURN_LOCK_INTO        117
#define MOVE_EFFECT_ATK_UP_2_STATUS_CONFUSION               118
#define MOVE_EFFECT_DOUBLE_POWER_EACH_TURN                  119
#define MOVE_EFFECT_INFATUATE                               120
#define MOVE_EFFECT_POWER_BASED_ON_FRIENDSHIP               121
#define MOVE_EFFECT_RANDOM_POWER_MAYBE_HEAL                 122
#define MOVE_EFFECT_POWER_BASED_ON_LOW_FRIENDSHIP           123
#define MOVE_EFFECT_PREVENT_STATUS                          124
#define MOVE_EFFECT_THAW_AND_BURN_HIT                       125
#define MOVE_EFFECT_RANDOM_POWER_10_CASES                   126
#define MOVE_EFFECT_PASS_STATS_AND_STATUS                   127
#define MOVE_EFFECT_HIT_BEFORE_SWITCH                       128
#define MOVE_EFFECT_REMOVE_HAZARDS_AND_BINDING              129
#define MOVE_EFFECT_10_DAMAGE_FLAT                          130
#define MOVE_EFFECT_UNUSED_131                              131
#define MOVE_EFFECT_HEAL_HALF_MORE_IN_SUN                   132
#define MOVE_EFFECT_UNUSED_133                              133
#define MOVE_EFFECT_UNUSED_134                              134
#define MOVE_EFFECT_RANDOM_TYPE_BASED_ON_IVS                135
#define MOVE_EFFECT_WEATHER_RAIN                            136
#define MOVE_EFFECT_WEATHER_SUN                             137
#define MOVE_EFFECT_RAISE_DEF_HIT                           138
#define MOVE_EFFECT_RAISE_ATTACK_HIT                        139
#define MOVE_EFFECT_RAISE_ALL_STATS_HIT                     140
#define MOVE_EFFECT_UNUSED_141                              141
#define MOVE_EFFECT_MAX_ATK_LOSE_HALF_MAX_HP                142
#define MOVE_EFFECT_COPY_STAT_CHANGES                       143
#define MOVE_EFFECT_MIRROR_COAT                             144
#define MOVE_EFFECT_CHARGE_TURN_DEF_UP                      145
#define MOVE_EFFECT_FLINCH_DOUBLE_DAMAGE_FLY_OR_BOUNCE      146
#define MOVE_EFFECT_DOUBLE_DAMAGE_DIG                       147
#define MOVE_EFFECT_HIT_IN_3_TURNS                          148
#define MOVE_EFFECT_DOUBLE_DAMAGE_FLY_OR_BOUNCE             149
#define MOVE_EFFECT_FLINCH_MINIMIZE_DOUBLE_HIT              150
#define MOVE_EFFECT_CHARGE_TURN_SUN_SKIPS                   151
#define MOVE_EFFECT_THUNDER                                 152
#define MOVE_EFFECT_FLEE_FROM_WILD_BATTLE                   153
#define MOVE_EFFECT_BEAT_UP                                 154
#define MOVE_EFFECT_FLY                                     155
#define MOVE_EFFECT_DEF_UP_DOUBLE_ROLLOUT_POWER             156
#define MOVE_EFFECT_UNUSED_157                              157
#define MOVE_EFFECT_ALWAYS_FLINCH_FIRST_TURN_ONLY           158
#define MOVE_EFFECT_UPROAR                                  159
#define MOVE_EFFECT_STOCKPILE                               160
#define MOVE_EFFECT_SPIT_UP                                 161
#define MOVE_EFFECT_SWALLOW                                 162
#define MOVE_EFFECT_UNUSED_163                              163
#define MOVE_EFFECT_WEATHER_HAIL                            164
#define MOVE_EFFECT_TORMENT                                 165
#define MOVE_EFFECT_SP_ATK_UP_CAUSE_CONFUSION               166
#define MOVE_EFFECT_STATUS_BURN                             167
#define MOVE_EFFECT_FAINT_AND_ATK_SP_ATK_DOWN_2             168
#define MOVE_EFFECT_DOUBLE_POWER_WHEN_STATUSED              169
#define MOVE_EFFECT_HIT_LAST_WHIFF_IF_HIT                   170
#define MOVE_EFFECT_DOUBLE_POWER_AND_CURE_PARALYSIS         171
#define MOVE_EFFECT_MAKE_GLOBAL_TARGET                      172
#define MOVE_EFFECT_NATURE_POWER                            173
#define MOVE_EFFECT_SP_DEF_UP_DOUBLE_ELECTRIC_POWER         174
#define MOVE_EFFECT_TAUNT                                   175
#define MOVE_EFFECT_BOOST_ALLY_POWER_BY_50_PERCENT          176
#define MOVE_EFFECT_SWITCH_HELD_ITEMS                       177
#define MOVE_EFFECT_COPY_ABILITY                            178
#define MOVE_EFFECT_HEAL_IN_3_TURNS                         179
#define MOVE_EFFECT_USE_RANDOM_ALLY_MOVE                    180
#define MOVE_EFFECT_GROUND_TRAP_USER_CONTINUOUS_HEAL        181
#define MOVE_EFFECT_USER_ATK_DEF_DOWN_HIT                   182
#define MOVE_EFFECT_MAGIC_COAT                              183
#define MOVE_EFFECT_RECYCLE                                 184
#define MOVE_EFFECT_DOUBLE_DAMAGE_IF_HIT                    185
#define MOVE_EFFECT_REMOVE_SCREENS                          186
#define MOVE_EFFECT_STATUS_SLEEP_NEXT_TURN                  187
#define MOVE_EFFECT_REMOVE_HELD_ITEM                        188
#define MOVE_EFFECT_SET_HP_EQUAL_TO_USER                    189
#define MOVE_EFFECT_DECREASE_POWER_WITH_LESS_USER_HP        190
#define MOVE_EFFECT_SWITCH_ABILITIES                        191
#define MOVE_EFFECT_MAKE_SHARED_MOVES_UNUSEABLE             192
#define MOVE_EFFECT_HEAL_STATUS                             193
#define MOVE_EFFECT_REMOVE_ALL_PP_ON_DEFEAT                 194
#define MOVE_EFFECT_STEAL_STATUS_MOVE                       195
#define MOVE_EFFECT_INCREASE_POWER_WITH_WEIGHT              196
#define MOVE_EFFECT_SECRET_POWER                            197
#define MOVE_EFFECT_RECOIL_THIRD                            198
#define MOVE_EFFECT_CONFUSE_ALL_ADJACENT                    199
#define MOVE_EFFECT_HIGH_CRITICAL_BURN_HIT                  200
#define MOVE_EFFECT_HALVE_ELECTRIC_DAMAGE                   201
#define MOVE_EFFECT_BADLY_POISON_HIT                        202
#define MOVE_EFFECT_CHANGE_TYPE_WITH_WEATHER                203
#define MOVE_EFFECT_USER_SP_ATK_DOWN_2                      204
#define MOVE_EFFECT_ATK_DEF_DOWN                            205
#define MOVE_EFFECT_DEF_SP_DEF_UP                           206
#define MOVE_EFFECT_HIT_FLY                                 207
#define MOVE_EFFECT_ATK_DEF_UP                              208
#define MOVE_EFFECT_HIGH_CRITICAL_POISON_HIT                209
#define MOVE_EFFECT_HALVE_FIRE_DAMAGE                       210
#define MOVE_EFFECT_SP_ATK_SP_DEF_UP                        211
#define MOVE_EFFECT_ATK_SPEED_UP                            212
#define MOVE_EFFECT_CAMOUFLAGE                              213
#define MOVE_EFFECT_HEAL_HALF_REMOVE_FLYING_TYPE            214
#define MOVE_EFFECT_GRAVITY                                 215
#define MOVE_EFFECT_IGNORE_EVATION_REMOVE_DARK_IMMUNE       216
#define MOVE_EFFECT_DOUBLE_POWER_HEAL_SLEEP                 217
#define MOVE_EFFECT_USER_SPEED_DOWN_HIT                     218
#define MOVE_EFFECT_POWER_BASED_ON_LOW_SPEED                219
#define MOVE_EFFECT_FAINT_AND_FULL_HEAL_NEXT_MON            220
#define MOVE_EFFECT_DOUBLE_POWER_WHEN_BELOW_HALF            221
#define MOVE_EFFECT_NATURAL_GIFT                            222
#define MOVE_EFFECT_REMOVE_PROTECT                          223
#define MOVE_EFFECT_EAT_BERRY                               224
#define MOVE_EFFECT_DOUBLE_SPEED_3_TURNS                    225
#define MOVE_EFFECT_RANDOM_STAT_UP_2                        226
#define MOVE_EFFECT_METAL_BURST                             227
#define MOVE_EFFECT_SWITCH_HIT                              228
#define MOVE_EFFECT_USER_DEF_SP_DEF_DOWN_HIT                229
#define MOVE_EFFECT_DOUBLE_POWER_IF_HIT                     230
#define MOVE_EFFECT_DOUBLE_POWER_IF_TARGET_HIT              231
#define MOVE_EFFECT_PREVENT_ITEM_USE                        232
#define MOVE_EFFECT_FLING                                   233
#define MOVE_EFFECT_TRANSFER_STATUS                         234
#define MOVE_EFFECT_HIGHER_POWER_WHEN_LOW_PP                235
#define MOVE_EFFECT_PREVENT_HEALING                         236
#define MOVE_EFFECT_INCREASE_POWER_WITH_MORE_HP             237
#define MOVE_EFFECT_SWAP_ATK_DEF                            238
#define MOVE_EFFECT_SUPRESS_ABILITY                         239
#define MOVE_EFFECT_PREVENT_CRITS                           240
#define MOVE_EFFECT_USE_MOVE_FIRST                          241
#define MOVE_EFFECT_USE_LAST_USED_MOVE                      242
#define MOVE_EFFECT_SWAP_ATK_SP_ATK_STAT_CHANGES            243
#define MOVE_EFFECT_SWAP_DEF_SP_DEF_STAT_CHANGES            244
#define MOVE_EFFECT_INCREASE_POWER_WITH_MORE_STAT_UP        245
#define MOVE_EFFECT_FAIL_IF_NOT_USED_ALL_OTHER_MOVES        246
#define MOVE_EFFECT_SET_ABILITY_TO_INSOMNIA                 247
#define MOVE_EFFECT_HIT_FIRST_IF_TARGET_ATTACKING           248
#define MOVE_EFFECT_TOXIC_SPIKES                            249
#define MOVE_EFFECT_SWAP_STAT_CHANGES                       250
#define MOVE_EFFECT_RESTORE_HP_EVERY_TURN                   251
#define MOVE_EFFECT_GIVE_GROUND_IMMUNITY                    252
#define MOVE_EFFECT_RECOIL_BURN_HIT                         253
#define MOVE_EFFECT_STRUGGLE                                254
#define MOVE_EFFECT_DIVE                                    255
#define MOVE_EFFECT_DIG                                     256
#define MOVE_EFFECT_DOUBLE_DAMAGE_DIVE                      257
#define MOVE_EFFECT_REMOVE_HAZARDS_SCREENS_EVA_DOWN         258
#define MOVE_EFFECT_TRICK_ROOM                              259
#define MOVE_EFFECT_BLIZZARD                                260
#define MOVE_EFFECT_WHIRLPOOL                               261
#define MOVE_EFFECT_RECOIL_PARALYZE_HIT                     262
#define MOVE_EFFECT_BOUNCE                                  263
#define MOVE_EFFECT_UNUSED_264                              264
#define MOVE_EFFECT_SP_ATK_DOWN_2_OPPOSITE_GENDER           265
#define MOVE_EFFECT_STEALTH_ROCK                            266
#define MOVE_EFFECT_CHATTER                                 267
#define MOVE_EFFECT_JUDGMENT                                268
#define MOVE_EFFECT_RECOIL_HALF                             269
#define MOVE_EFFECT_FAINT_FULL_RESTORE_NEXT_MON             270
#define MOVE_EFFECT_LOWER_SP_DEF_2_HIT                      271
#define MOVE_EFFECT_SHADOW_FORCE                            272
#define MOVE_EFFECT_FLINCH_BURN_HIT                         273
#define MOVE_EFFECT_FLINCH_FREEZE_HIT                       274
#define MOVE_EFFECT_FLINCH_PARALYZE_HIT                     275
#define MOVE_EFFECT_RAISE_SP_ATK_HIT                        276

// new move effects:
#define MOVE_EFFECT_ATK_ACC_UP                              277
#define MOVE_EFFECT_GUARD_SPLIT                             278
#define MOVE_EFFECT_POWER_SPLIT                             279
#define MOVE_EFFECT_DOUBLE_POWER_ON_POISONED                280
#define MOVE_EFFECT_AUTOTOMIZE                              281
#define MOVE_EFFECT_ALWAYS_CRITICAL                         282
#define MOVE_EFFECT_SP_ATK_SP_DEF_SPEED_UP                  283
#define MOVE_EFFECT_CHANGE_TO_WATER_TYPE                    284
#define MOVE_EFFECT_RAISE_SPEED_HIT                         285
#define MOVE_EFFECT_ATK_DEF_ACC_UP                          286
#define MOVE_EFFECT_DOUBLE_DAMAGE_ON_STATUS                 287
#define MOVE_EFFECT_SPEED_UP_2_ATK_UP                       288
#define MOVE_EFFECT_DOUBLE_POWER_WITHOUT_ITEM               289
#define MOVE_EFFECT_ATK_SP_ATK_SPEED_UP_2_DEF_SP_DEF_DOWN   290
#define MOVE_EFFECT_USER_DEF_SP_DEF_SPEED_DOWN_HIT          291
#define MOVE_EFFECT_HEAVY_SLAM                              292
#define MOVE_EFFECT_CONFUSE_AND_CRASH_IF_MISS               293
#define MOVE_EFFECT_APPLY_TERRAINS                          294
#define MOVE_EFFECT_ATK_SP_ATK_UP                           295
#define MOVE_EFFECT_HIT_TWICE_AND_FLINCH                    296
#define MOVE_EFFECT_UP_TO_10_HITS                           297
#define MOVE_EFFECT_HIT_THREE_TIMES_INCREMENT_BASE_POWER_20 298
#define MOVE_EFFECT_HIT_THREE_TIMES                         299
#define MOVE_EFFECT_PSYBLADE                                300
#define MOVE_EFFECT_SLEEP_HIT                               301
#define MOVE_EFFECT_SPICY_EXTRACT                           302
#define MOVE_EFFECT_ATK_SP_ATK_SPEED_UP_2                   303
#define MOVE_EFFECT_SHED_TAIL                               304
#define MOVE_EFFECT_AFTER_YOU                               305
#define MOVE_EFFECT_QUASH                                   306
#define MOVE_EFFECT_TECHNO_BLAST                            307
#define MOVE_EFFECT_MULTI_ATTACK                            308
#define MOVE_EFFECT_IVY_CUDGEL                              309
#define MOVE_EFFECT_LEECH_SEED_HIT                          310
#define MOVE_EFFECT_SET_LIGHT_SCREEN_HIT                    311
#define MOVE_EFFECT_SET_REFLECT_HIT                         312
#define MOVE_EFFECT_RESET_STAT_CHANGES_HIT                  313
#define MOVE_EFFECT_CURE_PARTY_STATUS_HIT                   314
#define MOVE_EFFECT_RECOVER_FULL_DAMAGE_DEALT               315
#define MOVE_EFFECT_RAISE_EVA_HIT                           316
#define MOVE_EFFECT_RAISE_DEF_2_HIT                         317
#define MOVE_EFFECT_CHARGE_TURN_ATK_SP_ATK_SPEED_UP_2       318
#define MOVE_EFFECT_WEATHER_SNOW                            319
#define MOVE_EFFECT_PREVENT_HEALING_HIT                     320
#define MOVE_EFFECT_BURN_HIT_DOUBLE_POWER_ON_STATUS         321
#define MOVE_EFFECT_POISON_HIT_DOUBLE_POWER_ON_POISONED     322
#define MOVE_EFFECT_SET_ABILITY_TO_SIMPLE                   323
#define MOVE_EFFECT_CHARGE_TURN_SP_ATK_UP					324
#define MOVE_EFFECT_CHARGE_TURN_SP_ATK_UP_RAIN_SKIPS        325
#define MOVE_EFFECT_STICKY_WEB                              326



#define MOVE_TARGET_SELECTED             0x0000
#define MOVE_TARGET_DEPENDS              0x0001
#define MOVE_TARGET_RANDOM               0x0002
#define MOVE_TARGET_BOTH                 0x0004
#define MOVE_TARGET_FOES_AND_ALLY        0x0008
#define MOVE_TARGET_USER                 0x0010
#define MOVE_TARGET_USER_SIDE            0x0020
#define MOVE_TARGET_ACTIVE_FIELD         0x0040
#define MOVE_TARGET_OPPONENTS_FIELD      0x0080
#define MOVE_TARGET_ALLY                 0x0100
#define MOVE_TARGET_ACUPRESSURE          0x0200
#define MOVE_TARGET_ME_FIRST             0x0400

#endif
