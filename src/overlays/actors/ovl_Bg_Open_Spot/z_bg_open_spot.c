#include "z_bg_open_spot.h"

#define FLAGS 0x00000010

#define THIS ((BgOpenSpot*)thisx)

void BgOpenSpot_Init(Actor* thisx, GlobalContext* globalCtx);
void BgOpenSpot_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgOpenSpot_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Bg_Open_Spot_InitVars = {
    ACTOR_BG_OPEN_SPOT,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_OPEN_OBJ,
    sizeof(BgOpenSpot),
    (ActorFunc)BgOpenSpot_Init,
    (ActorFunc)BgOpenSpot_Destroy,
    (ActorFunc)BgOpenSpot_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Open_Spot_0x80ACB1E0/BgOpenSpot_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Open_Spot_0x80ACB1E0/BgOpenSpot_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Open_Spot_0x80ACB1E0/BgOpenSpot_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Open_Spot_0x80ACB1E0/func_80ACB2B0.asm")
