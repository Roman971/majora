#include "z_obj_takaraya_wall.h"

#define FLAGS 0x00000030

#define THIS ((ObjTakarayaWall*)thisx)

void ObjTakarayaWall_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjTakarayaWall_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjTakarayaWall_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjTakarayaWall_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Takaraya_Wall_InitVars = {
    ACTOR_OBJ_TAKARAYA_WALL,
    ACTORTYPE_BG,
    FLAGS,
    OBJECT_TAKARAYA_OBJECTS,
    sizeof(ObjTakarayaWall),
    (ActorFunc)ObjTakarayaWall_Init,
    (ActorFunc)ObjTakarayaWall_Destroy,
    (ActorFunc)ObjTakarayaWall_Update,
    (ActorFunc)ObjTakarayaWall_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Takaraya_Wall_0x80AD9240/func_80AD9240.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Takaraya_Wall_0x80AD9240/func_80AD92FC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Takaraya_Wall_0x80AD9240/func_80AD9358.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Takaraya_Wall_0x80AD9240/func_80AD9488.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Takaraya_Wall_0x80AD9240/ObjTakarayaWall_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Takaraya_Wall_0x80AD9240/ObjTakarayaWall_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Takaraya_Wall_0x80AD9240/func_80AD9B04.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Takaraya_Wall_0x80AD9240/ObjTakarayaWall_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Takaraya_Wall_0x80AD9240/ObjTakarayaWall_Draw.asm")
