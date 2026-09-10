// Address: 00453630
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00453630(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  HDC pHVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  tagRECT *ptVar7;
  tagRECT *ptVar8;
  undefined4 uVar9;
  UINT UVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  UINT UVar13;
  tagRECT *ptVar14;
  tagRECT *ptVar15;
  tagRECT local_28;
  undefined1 local_18 [12];
  
  ptVar8 = &local_28;
  ptVar7 = &local_28;
  if (*(int *)(param_1 + 0x184) != 0) {
    if ((((*(char *)(param_1 + 0x17d) == '\x02') &&
         (*(char *)(*(int *)(param_1 + 0x184) + 0x229) == '\0')) &&
        (*(char *)(*(int *)(param_1 + 0x184) + 0x2d9) == '\0')) &&
       (iVar3 = FUN_004498ac(), iVar3 == 0x50050)) {
      uVar6 = *(undefined4 *)(param_1 + 0x160);
      if (*(char *)(param_1 + 0x16a) == '\0') {
        FUN_0040709c(*(int *)(param_1 + 0x48) + -0xe,1,*(int *)(param_1 + 0x48),&local_28,
                     *(undefined4 *)(param_1 + 0x4c));
        UVar13 = 0xe;
        UVar10 = 1;
        pHVar4 = (HDC)FUN_0042b5a8(uVar6);
        DrawEdge(pHVar4,ptVar8,UVar10,UVar13);
        local_28.top = 0;
        UVar13 = 1;
        UVar10 = 6;
        ptVar8 = &local_28;
        pHVar4 = (HDC)FUN_0042b5a8(uVar6);
        DrawEdge(pHVar4,ptVar8,UVar10,UVar13);
      }
      else {
        FUN_0040709c(*(int *)(param_1 + 0x48) + -0xd,0xffffffff,*(int *)(param_1 + 0x48),&local_28,
                     *(undefined4 *)(param_1 + 0x4c));
        UVar13 = 0xe;
        UVar10 = 10;
        pHVar4 = (HDC)FUN_0042b5a8(uVar6);
        DrawEdge(pHVar4,ptVar7,UVar10,UVar13);
        UVar13 = 1;
        UVar10 = 6;
        ptVar8 = &local_28;
        pHVar4 = (HDC)FUN_0042b5a8(uVar6);
        DrawEdge(pHVar4,ptVar8,UVar10,UVar13);
      }
    }
    ptVar14 = &local_28;
    ptVar8 = &local_28;
    ptVar15 = &local_28;
    ptVar7 = &local_28;
    if (*(char *)(param_1 + 0x17d) == '\x04') {
      uVar6 = *(undefined4 *)(param_1 + 0x160);
      uVar1 = *(uint *)(param_1 + 0x48);
      iVar3 = (int)uVar1 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((uVar1 & 1) != 0);
      }
      FUN_0040709c(iVar3 + -1,0,uVar1,&local_28,*(undefined4 *)(param_1 + 0x4c));
      FUN_00456c14();
      cVar2 = FUN_00456cf4();
      if (cVar2 == '\0') {
        UVar13 = 1;
        UVar10 = 6;
        pHVar4 = (HDC)FUN_0042b5a8(uVar6);
        DrawEdge(pHVar4,ptVar8,UVar10,UVar13);
      }
      else {
        uVar5 = FUN_00456c14();
        FUN_00456fb4(uVar5,0x1a,local_18);
        uVar11 = 0;
        uVar6 = FUN_0042b5a8(uVar6);
        uVar5 = FUN_00456c14();
        FUN_00456e00(uVar5,uVar6,local_18,uVar11,ptVar14);
      }
    }
    if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
      if ((byte)(*(char *)(param_1 + 0x17d) - 3U) < 2) {
        iVar3 = *(int *)(param_1 + 0x160);
        FUN_0042a968(*(undefined4 *)(iVar3 + 0x10),2);
        FUN_0042a94c(*(undefined4 *)(iVar3 + 0x10),0xe);
        FUN_0042a88c(*(undefined4 *)(iVar3 + 0x10),0xffd8ce);
        FUN_0042ac88(*(undefined4 *)(iVar3 + 0x14),1);
        uVar6 = FUN_00465c0c(param_1);
        uVar5 = FUN_00465c50(param_1);
        FUN_0042b158(iVar3,0,0,uVar5,uVar6);
      }
      else {
        if (*(char *)(*(int *)(param_1 + 0x184) + 0x229) == '\0') {
          FUN_00456c14();
          cVar2 = FUN_00456cf4();
          if (cVar2 == '\0') {
            return;
          }
        }
        if (*(char *)(param_1 + 0x16a) == '\0') {
          FUN_0040709c(0,0,*(undefined4 *)(param_1 + 0x48),&local_28,*(undefined4 *)(param_1 + 0x4c)
                      );
          FUN_00456c14();
          cVar2 = FUN_00456cf4();
          if (cVar2 == '\0') {
            UVar13 = 0xf;
            UVar10 = 4;
            pHVar4 = (HDC)FUN_0042b5a8(*(undefined4 *)(param_1 + 0x160));
            DrawEdge(pHVar4,ptVar7,UVar10,UVar13);
          }
          else {
            uVar6 = FUN_00456c14();
            FUN_00456fb4(uVar6,3,local_18);
            uVar12 = 4;
            uVar9 = 0xf;
            uVar11 = 0;
            uVar6 = FUN_0042b5a8(*(undefined4 *)(param_1 + 0x160));
            uVar5 = FUN_00456c14();
            FUN_00456db4(uVar5,uVar6,local_18,uVar11,uVar9,uVar12,ptVar15);
          }
        }
      }
    }
  }
  return;
}

