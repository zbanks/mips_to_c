s32 ObjMakeoshihiki_GetChildSpawnPointIndex(ObjMakeoshihiki *arg0, GlobalContext *arg1); /* static */
void ObjMakeoshihiki_SetSwitchFlags(ObjMakeoshihiki *arg0, GlobalContext *arg1, s32 arg2); /* static */



s32 ObjMakeoshihiki_GetChildSpawnPointIndex(ObjMakeoshihiki *arg0, GlobalContext *arg1) {
    s32 sp18;
    s32 phi_a2;
    s32 phi_v1;

    if (Flags_GetSwitch(arg1, arg0->actor.home.rot.z & 0x7F) != 0) {
        phi_a2 = 1;
    } else {
        phi_a2 = 0;
    }
    sp18 = phi_a2;
    if (Flags_GetSwitch(arg1, arg0->actor.params & 0x7F) != 0) {
        phi_v1 = 2;
    } else {
        phi_v1 = 0;
    }
    return phi_a2 + phi_v1;
}

void ObjMakeoshihiki_SetSwitchFlags(ObjMakeoshihiki *arg0, GlobalContext *arg1, s32 arg2) {
    s32 sp1C;
    s32 temp_a3;

    sp1C = arg0->actor.home.rot.z & 0x7F;
    temp_a3 = arg0->actor.params & 0x7F;
    if ((arg2 & 2) != 0) {
        Actor_SetSwitchFlag(arg1, temp_a3);
    } else {
        Actor_UnsetSwitchFlag(arg1, temp_a3);
    }
    if ((arg2 & 1) != 0) {
        Actor_SetSwitchFlag(arg1, sp1C);
        return;
    }
    Actor_UnsetSwitchFlag(arg1, sp1C);
}

void ObjMakeoshihiki_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjMakeoshihiki *this = (ObjMakeoshihiki *) thisx;
    Path *sp44;
    Path *temp_v1;
    Vec3s *temp_v1_2;

    temp_v1 = &globalCtx->setupPathList[((s32) this->actor.params >> 7) & 0x7F];
    sp44 = temp_v1;
    this->pathPoints = Lib_SegmentedToVirtual((void *) temp_v1->points);
    this->pathCount = (s32) temp_v1->count;
    temp_v1_2 = &this->pathPoints[ObjMakeoshihiki_GetChildSpawnPointIndex(this, globalCtx)];
    if (Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x7A, (f32) temp_v1_2->x, (f32) temp_v1_2->y, (f32) temp_v1_2->z, (s16) 0, (s16) 0, (s16) 0, 0xFFF1) == 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void ObjMakeoshihiki_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjMakeoshihiki *this = (ObjMakeoshihiki *) thisx;
    Vec3f sp40;
    Actor *temp_v0;
    s32 temp_s1;
    s32 phi_s0;
    s32 phi_s1;

    temp_v0 = this->actor.child;
    if (temp_v0 != 0) {
        if (temp_v0->update == 0) {
            this->actor.child = NULL;
            return;
        }
        phi_s0 = 0;
        phi_s1 = 0;
        if (this->pathCount > 0) {
loop_5:
            Math_Vec3s_ToVec3f(&sp40, this->pathPoints + phi_s0);
            if (Math3D_DistanceSquared(&this->actor.child->world.pos, &sp40) < 0.25f) {
                ObjMakeoshihiki_SetSwitchFlags(this, globalCtx, phi_s1);
                return;
            }
            temp_s1 = phi_s1 + 1;
            phi_s0 += 6;
            phi_s1 = temp_s1;
            if (temp_s1 >= this->pathCount) {
                // Duplicate return node #8. Try simplifying control flow for better match
                return;
            }
            goto loop_5;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

