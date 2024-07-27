




#pragma mark - Stable (Objects) -




//These probably won't need to be updated... but just in case...


int RBX_INSTANCE_SELF_OFFSET = 0x8;
int RBX_INSTANCE_CLASS_INFO_OFFSET = 0x18;
int RBX_INSTANCE_NAME_OFFSET = 0x48;
int RBX_INSTANCE_CHILDREN_OFFSET = 0x50;
int RBX_INSTANCE_PARENT_OFFSET = 0x60;






#pragma mark - Volatile (Objects) -





/*
 Join https://www.roblox.com/games/5332389196/Hack-Tests to update these. (You will not need libESP.dylib injected)
 Call 'find_object_offsets()' to get these.
 */

#pragma mark auto

int RBX_PLACEID_OFFSET = 0x5682b00;
int RBX_TEAM_BRICKCOLOR_OFFSET = 0xc0;
int RBX_MODEL_PRIMARYPART_OFFSET = 0x1e8;
int RBX_INTVALUE_VALUE_OFFSET = 0xc0;
int RBX_STRINGVALUE_VALUE_OFFSET = 0xc0;
int RBX_CFRAMEVALUE_VALUE_OFFSET = 0xc0;
int RBX_CAMERA_CFRAME_OFFSET = 0xd0;
int RBX_CAMERA_CAMERASUBJECT_OFFSET = 0xc0;
int RBX_CAMERA_FIELDOFVIEW_OFFSET = 0x138;
int RBX_PLAYERS_MAXPLAYERS_OFFSET = 0x100;
int RBX_PLAYER_CHARACTER_OFFSET = 0x260;
int RBX_PLAYER_TEAM_OFFSET = 0x198;
int RBX_HUMANOID_DISPLAYNAME_OFFSET = 0xc0;
int RBX_SKY_MOONTEXTUREID_OFFSET = 0xc8;
int RBX_PLAYER_DISPLAYNAME_OFFSET = 0xf0;
int RBX_DATAMODEL_JOBID_OFFSET = 0x128;
int RBX_TEXTLABEL_TEXT_OFFSET = 0x678;
int RBX_BASEPART_PROPERTIES_OFFSET = 0x140;
int RBX_BASEPART_PROPERTIES_CFRAME_OFFSET = 0x11c;
int RBX_BASEPART_PROPERTIES_GRAVITY_OFFSET = 0x114;
int RBX_BASEPART_PROPERTIES_RECIEVEAGE_OFFSET = 0x118;
int RBX_BASEPART_PROPERTIES_VELOCITY_OFFSET = 0x14c;
int RBX_BASEPART_PROPERTIES_ROTVELOCITY_OFFSET = 0x158;
int RBX_BASEPART_PROPERTIES_SIZE_OFFSET = 0x27c;
int RBX_LIGHTING_FOGEND_OFFSET = 0x480;
int RBX_LIGHTING_CLOCKTIME_TICK_OFFSET = 0x199;
int RBX_FRAME_VISIBLE_OFFSET = 0x318;
int RBX_BASEPART_PROPERTIES_CANCOLLIDE_OFFSET = 0x2db;
int RBX_PLAYER_MOUSE_OFFSET = 0x928;

#pragma mark manual

int RBX_PLAYER_LAST_INPUT_TIMESTAMP_OFFSET = 0x8f0;
int RBX_HUMANOID_HEALTH_OFFSET = 0x174;
int RBX_HUMANOID_SEATPART_OFFSET = 0x100;
int RBX_WHAT_GAME_POINTS_TO_OFFSET = 0x40CD968;

//Find what set_parent jumps to, then find the function that it calls
int RBX_SET_PARENT_HOOK_OFFSET = 0x1CD6AE4;

#pragma mark - Volatile (Functions) -





//Call 'find_function_offsets()' to get these.


int RBX_TOOL_ACTIVATE_METHOD_OFFSET = 0x15f0874;
int RBX_HUMANOID_HEALTH_GETTER_METHOD_OFFSET = 0xc26560;
int RBX_HUMANOID_HEALTH_SETTER_METHOD_OFFSET = 0xc26ad8;
int RBX_HUMANOID_WALKSPEED_GETTER_METHOD_OFFSET = 0xc2673c;
int RBX_HUMANOID_WALKSPEED_SETTER_METHOD_OFFSET = 0xc26744;
int RBX_INSTANCE_SET_PARENT_METHOD_OFFSET = 0x1ef0714;


