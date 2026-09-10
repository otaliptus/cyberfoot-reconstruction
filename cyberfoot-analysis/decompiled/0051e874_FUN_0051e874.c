// Address: 0051e874
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051e874(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined1 local_20 [16];
  uint local_10;
  uint local_c;
  undefined1 *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  puStack_38 = &LAB_0051e9b5;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_8 = param_1;
  uVar1 = (**(code **)(**(int **)(*(int *)(param_4 + -4) + 8) + 0x24))();
  FUN_0051a248(*(undefined4 *)(*(int *)(param_4 + -4) + 0x20),uVar1);
  uVar2 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),4);
  if (-1 < (int)((uVar2 & 0xffff) - 1)) {
    local_c = 0;
    local_10 = uVar2 & 0xffff;
    do {
      if ((local_c & 0x1f) == 0) {
        uVar2 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),4);
        iVar3 = MulDiv(local_c,100,uVar2 & 0xffff);
        uVar1 = 0;
        FUN_0041c990(0,0,0,local_20,0);
        puVar6 = local_20;
        FUN_00406d44(&PTR_DAT_0051676c,&local_24);
        FUN_00403c80(*(undefined4 *)(*(int *)(param_4 + -4) + 4),*(undefined4 *)(param_4 + -4),1,
                     local_24,puVar6,uVar1,iVar3);
      }
      pbVar4 = (byte *)(**(code **)**(undefined4 **)(param_4 + -8))
                                 (*(undefined4 **)(param_4 + -8),local_c);
      uVar5 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),3);
      uVar5 = uVar5 & 0xffff;
      iVar3 = 0;
      uVar2 = 0;
      if (uVar5 != 0) {
        do {
          if (iVar3 == 0) {
            iVar3 = 8;
            uVar2 = (uint)*pbVar4;
            pbVar4 = pbVar4 + 1;
          }
          *local_8 = (char)((uVar2 & 0x80) >> 7);
          uVar2 = uVar2 * 2;
          local_8 = local_8 + 1;
          iVar3 = iVar3 + -1;
          uVar5 = uVar5 - 1;
        } while (0 < (int)uVar5);
      }
      local_c = local_c + 1;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  puVar6 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0051e9bc;
  puStack_38 = (undefined1 *)0x51e9b4;
  FUN_004048d4(&local_24,uStack_3c,puVar6);
  return;
}

