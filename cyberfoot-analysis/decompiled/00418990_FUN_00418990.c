// Address: 00418990
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00418990(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  short *psVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint uVar8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_00418c39;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  bVar2 = *(byte *)(*(int *)(param_4 + 0xc) + 3 + param_1);
  bVar7 = bVar2 & 0x7f;
  uVar8 = (uint)bVar7;
  bVar9 = (bVar2 & 0x80) == 0;
  if (uVar8 == 10) {
    puStack_20 = &stack0xfffffffc;
    FUN_004175d8(*(int *)(param_4 + -4) + param_1 * 0x10);
  }
  else if (uVar8 == 0x48) {
    puVar1 = (undefined4 *)(*(int *)(param_4 + -8) + *(int *)(param_4 + -0xc) * 8);
    if (bVar9) {
      puStack_20 = &stack0xfffffffc;
      FUN_00404e04(**(undefined4 **)(param_4 + -0x10),1,0x7fffffff,&local_c);
      FUN_004051d4(puVar1,local_c);
      puVar1[1] = 0;
      *(undefined2 *)(*(int *)(param_4 + -4) + param_1 * 0x10) = 8;
      uVar6 = FUN_00405250(*puVar1);
      *(undefined4 *)(*(int *)(param_4 + -4) + 8 + param_1 * 0x10) = uVar6;
    }
    else {
      puStack_20 = &stack0xfffffffc;
      FUN_00404e04(*(undefined4 *)**(undefined4 **)(param_4 + -0x10),1,0x7fffffff,&local_8);
      FUN_004051d4(puVar1,local_8);
      puVar1[1] = **(undefined4 **)(param_4 + -0x10);
      *(undefined2 *)(*(int *)(param_4 + -4) + param_1 * 0x10) = 0x4008;
      *(undefined4 **)(*(int *)(param_4 + -4) + 8 + param_1 * 0x10) = puVar1;
    }
    *(int *)(param_4 + -0xc) = *(int *)(param_4 + -0xc) + 1;
  }
  else if (bVar9) {
    if (uVar8 == 0xc) {
      psVar3 = *(short **)(param_4 + -0x10);
      if (*psVar3 == 0x100) {
        puVar1 = (undefined4 *)(*(int *)(param_4 + -8) + *(int *)(param_4 + -0xc) * 8);
        puStack_20 = &stack0xfffffffc;
        FUN_00404e04(*(undefined4 *)(psVar3 + 4),1,0x7fffffff,&local_10);
        FUN_004051d4(puVar1,local_10);
        puVar1[1] = 0;
        *(undefined2 *)(*(int *)(param_4 + -4) + param_1 * 0x10) = 8;
        uVar6 = FUN_00405250(*puVar1);
        *(undefined4 *)(*(int *)(param_4 + -4) + 8 + param_1 * 0x10) = uVar6;
        *(int *)(param_4 + -0xc) = *(int *)(param_4 + -0xc) + 1;
      }
      else {
        puVar1 = (undefined4 *)(*(int *)(param_4 + -4) + param_1 * 0x10);
        *puVar1 = *(undefined4 *)psVar3;
        puVar1[1] = *(undefined4 *)(psVar3 + 2);
        puVar1[2] = *(undefined4 *)(psVar3 + 4);
        puVar1[3] = *(undefined4 *)(psVar3 + 6);
        *(int *)(param_4 + -0x10) = *(int *)(param_4 + -0x10) + 0xc;
        puStack_20 = &stack0xfffffffc;
      }
    }
    else {
      *(ushort *)(*(int *)(param_4 + -4) + param_1 * 0x10) = (ushort)bVar7;
      iVar4 = *(int *)(PTR_DAT_0066b438 + uVar8 * 0xc + 4);
      if ((iVar4 - 1U < 2) || (iVar4 == 4)) {
        *(undefined4 *)(*(int *)(param_4 + -4) + 8 + param_1 * 0x10) =
             **(undefined4 **)(param_4 + -0x10);
        puStack_20 = &stack0xfffffffc;
      }
      else if (iVar4 == 8) {
        *(undefined4 *)(*(int *)(param_4 + -4) + 8 + param_1 * 0x10) =
             **(undefined4 **)(param_4 + -0x10);
        *(undefined4 *)(*(int *)(param_4 + -4) + 0xc + param_1 * 0x10) =
             *(undefined4 *)(*(int *)(param_4 + -0x10) + 4);
        *(int *)(param_4 + -0x10) = *(int *)(param_4 + -0x10) + 4;
        puStack_20 = &stack0xfffffffc;
      }
      else {
        FUN_00418854(*(undefined4 *)(param_4 + -0x14));
      }
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    if ((uVar8 == 0xc) &&
       (puStack_20 = &stack0xfffffffc, *(short *)**(undefined4 **)(param_4 + -0x10) == 0x100)) {
      puStack_20 = &stack0xfffffffc;
      FUN_00418894(*(undefined4 *)(param_4 + -0x14),**(undefined4 **)(param_4 + -0x10),
                   **(undefined4 **)(param_4 + -0x10),8);
    }
    *(ushort *)(*(int *)(param_4 + -4) + param_1 * 0x10) = bVar7 | 0x4000;
    *(undefined4 *)(*(int *)(param_4 + -4) + 8 + param_1 * 0x10) =
         **(undefined4 **)(param_4 + -0x10);
  }
  puVar5 = puStack_20;
  *(int *)(param_4 + -0x10) = *(int *)(param_4 + -0x10) + 4;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00418c40;
  puStack_24 = (undefined1 *)0x418c38;
  FUN_004048f8(&local_10,3,puVar5);
  return;
}

