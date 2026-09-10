// Address: 0051e734
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051e734(byte *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined1 local_1c [16];
  uint local_c;
  uint local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_20 = 0;
  puStack_30 = &LAB_0051e867;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uVar1 = (**(code **)(**(int **)(*(int *)(param_4 + -4) + 8) + 0x24))();
  FUN_0051a248(*(undefined4 *)(*(int *)(param_4 + -4) + 0x20),uVar1);
  uVar2 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),4);
  if (-1 < (int)((uVar2 & 0xffff) - 1)) {
    local_8 = 0;
    local_c = uVar2 & 0xffff;
    do {
      if ((local_8 & 0x1f) == 0) {
        uVar2 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),4);
        iVar3 = MulDiv(local_8,100,uVar2 & 0xffff);
        uVar1 = 0;
        FUN_0041c990(0,0,0,local_1c,0);
        puVar6 = local_1c;
        FUN_00406d44(&PTR_DAT_0051676c,&local_20);
        FUN_00403c80(*(undefined4 *)(*(int *)(param_4 + -4) + 4),*(undefined4 *)(param_4 + -4),1,
                     local_20,puVar6,uVar1,iVar3);
      }
      pbVar4 = (byte *)(**(code **)**(undefined4 **)(param_4 + -8))
                                 (*(undefined4 **)(param_4 + -8),local_8);
      uVar2 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),3);
      uVar2 = uVar2 & 0xffff;
      if (-1 < (int)(uVar2 - 1)) {
        bVar5 = false;
        do {
          if (bVar5) {
            *param_1 = *pbVar4 & 0xf;
            pbVar4 = pbVar4 + 1;
          }
          else {
            *param_1 = *pbVar4 >> 4;
          }
          param_1 = param_1 + 1;
          bVar5 = (bool)(bVar5 ^ 1);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      local_8 = local_8 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  puVar6 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0051e86e;
  puStack_30 = (undefined1 *)0x51e866;
  FUN_004048d4(&local_20,uStack_34,puVar6);
  return;
}

