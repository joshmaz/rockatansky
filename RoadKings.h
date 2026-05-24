// Williams Road Kings (1986, System 11) — switch, lamp, and solenoid IDs
// RPU index = switch matrix chart number minus 1. See docs/ROAD_KINGS.md.

// --- Switches (cabinet) ---
#define SW_PLUMB_TILT               0
#define SW_ROLL_TILT                1
#define SW_CREDIT_RESET             2
#define SW_COIN_3                   3   // right chute
#define SW_COIN_2                   4   // center chute
#define SW_COIN_1                   5   // left chute
#define SW_SLAM                     6
#define SW_HIGH_SCORE_RESET         7

// --- Switches (playfield) ---
#define SW_R_TARGET                 9
#define SW_O_TARGET                 10
#define SW_A_TARGET                 11
#define SW_D_TARGET                 12
#define SW_K_TARGET                 13
#define SW_I_TARGET                 14
#define SW_N_TARGET                 15
#define SW_G_TARGET                 16
#define SW_S_TARGET                 17
#define SW_LANE_1                   18
#define SW_LANE_2                   19
#define SW_LANE_4                   20
#define SW_LANE_3                   21
#define SW_RIGHT_RAMP_ENTER         22
#define SW_RAMP_RAISE_EOS           23
#define SW_TOP_JET                  24
#define SW_LEFT_JET                 25
#define SW_RIGHT_JET                26
#define SW_BOTTOM_JET               27
#define SW_LEFT_OUTLANE             28
#define SW_RIGHT_OUTLANE            29
#define SW_DROP_TARGET              30
#define SW_CENTER_RAMP_ENTER        31
#define SW_CENTER_RAMP_EXIT         32
#define SW_RIGHT_TEN_POINT          33
#define SW_UPPER_LEFT_KICKER        34
#define SW_RIGHT_ROLLUNDER          35
#define SW_LEFT_ROLLUNDER           36
#define SW_LEFT_EJECT               37
#define SW_CENTER_EJECT             38
#define SW_BALL_SHOOTER             39
#define SW_OUTHOLE                  40
#define SW_RIGHT_ROUGH              41
#define SW_LEFT_TROUGH              42
#define SW_LEFT_KICKER              43
#define SW_RIGHT_KICKER             44
#define SW_LEFT_TEN_POINT           45
#define SW_PLAYFIELD_TILT           46

// Legacy aliases for RoadKings.ino (drop-target helper)
#define SW_DROP_1                   SW_O_TARGET
#define SW_DROP_2                   SW_A_TARGET
#define SW_DROP_3                   SW_D_TARGET
#define SW_TILT                     SW_PLUMB_TILT

// --- Lamps (playfield — verify IDs in lamp test) ---
#define LAMP_SHOOT_AGAIN            0
#define LAMP_LANE_1                 18
#define LAMP_LANE_2                 19
#define LAMP_LANE_3                 21
#define LAMP_LANE_4                 20

// --- Lamps (head / backbox, Sys 11 standard) ---
#define LAMP_HEAD_1_PLAYER          49
#define LAMP_HEAD_2_PLAYERS         50
#define LAMP_HEAD_3_PLAYERS         51
#define LAMP_HEAD_4_PLAYERS         52
#define LAMP_HEAD_MATCH             53
#define LAMP_HEAD_BALL_IN_PLAY      54
#define LAMP_APRON_CREDITS          55
#define LAMP_HEAD_PLAYER_1_UP       56
#define LAMP_HEAD_PLAYER_2_UP       57
#define LAMP_HEAD_PLAYER_3_UP       58
#define LAMP_HEAD_PLAYER_4_UP       59
#define LAMP_HEAD_TILT              60
#define LAMP_HEAD_GAME_OVER         61
#define LAMP_HEAD_SAME_PLAYER_SHOOTS_AGAIN  62
#define LAMP_HEAD_HIGH_SCORE        63

// --- Solenoids (verify in solenoid test — docs/ROAD_KINGS.md) ---
#define SOL_OUTHOLE                 0
#define SOL_BALL_RELEASE            1
#define SOL_LEFT_SLING              2
#define SOL_RIGHT_SLING             3
#define SOL_LEFT_JET                4
#define SOL_RIGHT_JET               5
#define SOL_TOP_JET                 6
#define SOL_BOTTOM_JET              7
#define SOL_DROP_TARGET_RESET       8
#define SOL_RAMP_MOTOR              9
#define SOL_LEFT_EJECT              10
#define SOL_CENTER_EJECT            11
#define SOL_RIGHT_EJECT             12
#define SOL_KNOCKER                 13
#define SOL_LEFT_TROUGH_KICK        14

#define SOLCONT_COIN_LOCKOUT        15

// Sys 11: playfield solenoids also use 16+ on some titles; Road Kings uses hardware for slings.
#define SOL_POP_BUMPER              SOL_BOTTOM_JET
