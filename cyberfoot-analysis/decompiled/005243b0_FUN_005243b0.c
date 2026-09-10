// Address: 005243b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_005243b0(int param_1,int param_2,RECT *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined3 uVar7;
  undefined4 uVar5;
  BOOL BVar6;
  int *piVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  int aiStackY_17f8 [1516];
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  LONG local_1c;
  int aiStack_18 [4];
  int local_8;
  
  bVar10 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  puStack_2c = (undefined1 *)0x5243d9;
  aiStack_18[3] = param_2;
  local_8 = param_1;
  iVar3 = FUN_0051aad8(*(undefined4 *)(param_1 + 0x2c));
  if (iVar3 == 0) {
    return;
  }
  *(undefined1 *)(local_8 + 0x28) = 1;
  puStack_30 = &LAB_005245ff;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x524401;
  puStack_2c = &stack0xfffffffc;
  iVar3 = FUN_0051aad8(*(undefined4 *)(local_8 + 0x2c));
  if ((iVar3 != 1) && ((*(byte *)(local_8 + 0x3c) & 4) != 0)) {
    if ((*(int *)(local_8 + 0x50) != 0) && ((*(byte *)(local_8 + 0x3c) & 0x40) == 0)) {
      puStack_3c = (undefined1 *)0x5244af;
      puStack_38 = &stack0xfffffffc;
      uVar5 = FUN_0052353c(local_8);
      puStack_3c = (undefined1 *)0x5244b8;
      FUN_00524300(param_3,uVar5);
      puStack_38 = (undefined1 *)0x5244be;
      FUN_004042fc();
      return;
    }
    puStack_38 = (undefined1 *)0x5244ce;
    FUN_0041e41c(*(undefined4 *)(local_8 + 0x38));
    puStack_3c = &LAB_005245e3;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffc0;
    iVar3 = *(int *)(local_8 + 0x54);
    puStack_38 = &stack0xfffffffc;
    if (((iVar3 != 0) && (puStack_38 = &stack0xfffffffc, *(int *)(iVar3 + 0x44) == aiStack_18[3]))
       && (puStack_38 = &stack0xfffffffc, BVar6 = EqualRect((RECT *)(iVar3 + 0x48),param_3),
          BVar6 != 0)) {
      FUN_004042fc();
      puStack_38 = (undefined1 *)0x524506;
      FUN_004042fc();
      return;
    }
    FUN_00524264(local_8);
    iVar3 = aiStack_18[3];
    if ((*(byte *)(local_8 + 0x3c) & 0x40) == 0) {
      FUN_00523668(local_8);
      iVar3 = FUN_00430280(*(undefined4 *)(local_8 + 0x50));
      FUN_0042b584(iVar3,&local_1c);
      FUN_0042addc(iVar3,&local_1c,aiStack_18[3],param_3);
    }
    else {
      piVar8 = (int *)((int)param_3 + (uint)bVar10 * -8 + 4);
      local_1c = param_3->left;
      piVar9 = piVar8 + (uint)bVar10 * -2 + 1;
      aiStack_18[(uint)bVar10 * -2] = *piVar8;
      aiStack_18[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = *piVar9;
      (aiStack_18 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           piVar9[(uint)bVar10 * -2 + 1];
    }
    FUN_00524610(local_8,local_8 + 0x54,iVar3,*(undefined2 *)(local_8 + 0x3c),&local_1c);
    if ((*(int *)(local_8 + 0x54) != 0) && (FUN_00522620(), (*(byte *)(local_8 + 0x3c) & 0x40) == 0)
       ) {
      while ((iVar3 = *(int *)(local_8 + 0x54), iVar3 != 0 &&
             ((*(char *)(iVar3 + 0xd) == '\0' && (*(char *)(iVar3 + 0x79) == '\0'))))) {
        cVar2 = FUN_004267a8(0);
        if (cVar2 == '\0') {
          Sleep(0);
        }
      }
      uVar5 = FUN_0052353c(local_8);
      FUN_00524300(param_3,uVar5);
    }
    puVar1 = puStack_38;
    *in_FS_OFFSET = uStack_40;
    puStack_38 = &LAB_005245ea;
    puStack_3c = (undefined1 *)0x5245e2;
    FUN_0041e480(*(undefined4 *)(local_8 + 0x38),uStack_40,puVar1);
    return;
  }
  iVar3 = *(int *)(local_8 + 0x60);
  if (-1 < iVar3) {
    puStack_38 = (undefined1 *)0x524426;
    iVar4 = FUN_0051aad8(*(undefined4 *)(local_8 + 0x2c));
    if (iVar3 < iVar4) {
      uVar7 = (undefined3)((uint)local_8 >> 8);
      puStack_38 = (undefined1 *)CONCAT31(uVar7,(*(byte *)(local_8 + 0x3c) & 2) != 0);
      puStack_3c = (undefined1 *)CONCAT31(uVar7,(*(byte *)(local_8 + 0x3d) & 1) != 0);
      uStack_40 = 0x524451;
      uVar5 = FUN_005212bc(*(undefined4 *)(local_8 + 0x2c),*(undefined4 *)(local_8 + 0x60));
      uStack_40 = 0x52445b;
      FUN_0051f850(uVar5,aiStack_18[3],param_3);
      goto LAB_0052448a;
    }
  }
  uVar7 = (undefined3)((uint)local_8 >> 8);
  puStack_38 = (undefined1 *)CONCAT31(uVar7,(*(byte *)(local_8 + 0x3c) & 2) != 0);
  puStack_3c = (undefined1 *)CONCAT31(uVar7,(*(byte *)(local_8 + 0x3d) & 1) != 0);
  uStack_40 = 0x524480;
  uVar5 = FUN_005212bc(*(undefined4 *)(local_8 + 0x2c),0);
  uStack_40 = 0x52448a;
  FUN_0051f850(uVar5,aiStack_18[3],param_3);
LAB_0052448a:
  puStack_38 = (undefined1 *)0x52448f;
  FUN_004042fc();
  return;
}

