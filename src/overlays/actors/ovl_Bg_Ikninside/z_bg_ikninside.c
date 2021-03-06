#include "z_bg_ikninside.h"

#define FLAGS 0x00000010

#define THIS ((BgIkninside*)thisx)

void BgIkninside_Init(Actor* thisx, GlobalContext* globalCtx);
void BgIkninside_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgIkninside_Update(Actor* thisx, GlobalContext* globalCtx);
void BgIkninside_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Bg_Ikninside_InitVars = {
    ACTOR_BG_IKNINSIDE,
    ACTORTYPE_BG,
    FLAGS,
    OBJECT_IKNINSIDE_OBJ,
    sizeof(BgIkninside),
    (ActorFunc)BgIkninside_Init,
    (ActorFunc)BgIkninside_Destroy,
    (ActorFunc)BgIkninside_Update,
    (ActorFunc)BgIkninside_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikninside_0x80C07110/BgIkninside_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikninside_0x80C07110/BgIkninside_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikninside_0x80C07110/func_80C07220.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikninside_0x80C07110/func_80C07230.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikninside_0x80C07110/func_80C072D0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikninside_0x80C07110/BgIkninside_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikninside_0x80C07110/BgIkninside_Draw.asm")
