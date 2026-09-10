// Address: 0051e9c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051e9c4(byte *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar10;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 local_6c;
  undefined1 local_68 [16];
  uint auStack_58 [16];
  uint local_18;
  uint local_14;
  uint3 *local_10;
  byte *local_c;
  uint local_8;
  
  puStack_78 = &stack0xfffffffc;
  local_6c = 0;
  puStack_7c = &LAB_0051eb71;
  uStack_80 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_80;
  iVar4 = 0;
  puVar7 = auStack_58 + 1;
  local_c = param_1;
  do {
    *puVar7 = 0xffffffff;
    iVar4 = iVar4 + 1;
    puVar7 = puVar7 + 2;
  } while (iVar4 != 8);
  uVar9 = 0;
  uVar5 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),4);
  if (-1 < (int)((uVar5 & 0xffff) - 1)) {
    local_14 = 0;
    local_18 = uVar5 & 0xffff;
    do {
      if ((local_14 & 0x1f) == 0) {
        uVar5 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),4);
        iVar4 = MulDiv(local_14,100,uVar5 & 0xffff);
        uVar10 = 0;
        FUN_0041c990(0,0,0,local_68,0);
        puVar8 = local_68;
        FUN_00406d44(&PTR_DAT_0051676c,&local_6c);
        FUN_00403c80(*(undefined4 *)(*(int *)(param_4 + -4) + 4),*(undefined4 *)(param_4 + -4),1,
                     local_6c,puVar8,uVar10,iVar4);
      }
      local_10 = (uint3 *)(**(code **)**(undefined4 **)(param_4 + -8))
                                    (*(undefined4 **)(param_4 + -8),local_14);
      uVar6 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),3);
      uVar6 = uVar6 & 0xffff;
      uVar5 = uVar9;
      if (-1 < (int)(uVar6 - 1)) {
        do {
          local_8 = (uint)*local_10;
          uVar9 = uVar5;
          do {
            if (auStack_58[uVar9 * 2 + 1] == 0xffffffff) break;
            if (auStack_58[uVar9 * 2] == local_8) {
              *local_c = (byte)auStack_58[uVar9 * 2 + 1];
              goto LAB_0051eb1d;
            }
            if (uVar9 == 0) {
              uVar9 = 7;
            }
            else {
              uVar9 = uVar9 - 1;
            }
          } while (uVar5 != uVar9);
          bVar3 = FUN_0051a500(*(undefined4 *)(*(int *)(param_4 + -4) + 0x20),local_8);
          *local_c = bVar3;
          uVar9 = uVar5 + 1 & 7;
          auStack_58[uVar9 * 2] = local_8;
          auStack_58[uVar9 * 2 + 1] = (uint)*local_c;
LAB_0051eb1d:
          local_c = local_c + 1;
          local_10 = (uint3 *)((int)local_10 + 3);
          uVar6 = uVar6 - 1;
          uVar5 = uVar9;
        } while (uVar6 != 0);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  puVar2 = puStack_78;
  iVar4 = *(int *)(*(int *)(param_4 + -4) + 0x20);
  puVar8 = *(undefined1 **)(iVar4 + 4);
  for (iVar4 = *(int *)(iVar4 + 8); 0 < iVar4; iVar4 = iVar4 + -1) {
    uVar1 = *puVar8;
    *puVar8 = puVar8[2];
    puVar8[2] = uVar1;
    puVar8 = puVar8 + 3;
  }
  *in_FS_OFFSET = uStack_80;
  puStack_78 = &LAB_0051eb78;
  puStack_7c = (undefined1 *)0x51eb70;
  FUN_004048d4(&local_6c,uStack_80,puVar2);
  return;
}

