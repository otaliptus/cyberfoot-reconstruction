// Address: 004c32a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c32a0(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_24;
  undefined1 local_1f;
  undefined1 local_1e;
  char local_1d;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_c = 0;
  puStack_38 = &LAB_004c33d7;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  bVar4 = param_1 == 0;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (!bVar4) {
    FUN_00404cf0(param_1,&DAT_004c33f0);
    puVar1 = puStack_34;
    if (!bVar4) {
      bVar4 = local_8 == 0;
      if (!bVar4) {
        FUN_00404cf0(local_8,&DAT_004c33f0);
        if (!bVar4) {
          local_1d = '\0';
          local_10 = FUN_00404da4(param_1);
          local_14 = FUN_00404da4(local_8);
          iVar2 = FUN_00404ba4(param_1);
          local_18 = FUN_00404ba4(local_8);
          local_24 = FUN_004323b8(iVar2,local_18);
          FUN_004048d4(param_3);
          if (0 < local_24) {
            iVar3 = 1;
            do {
              local_1c = local_18 - iVar3;
              if (iVar2 < iVar3) {
                local_1e = 0x30;
              }
              else {
                local_1e = *(undefined1 *)(local_10 + (iVar2 - iVar3));
              }
              if (local_18 < iVar3) {
                local_1f = 0x30;
              }
              else {
                local_1f = *(undefined1 *)(local_14 + local_1c);
              }
              FUN_004c31e4(CONCAT31((int3)((uint)&local_c >> 8),local_1e),local_1f,&local_1d,
                           &local_c);
              FUN_00404bf0(param_3,local_c,*param_3);
              iVar3 = iVar3 + 1;
              local_24 = local_24 + -1;
            } while (local_24 != 0);
          }
          if (local_1d != '\0') {
            FUN_00404bf0(param_3,&DAT_004c33fc,*param_3);
          }
          goto LAB_004c33c1;
        }
      }
      FUN_00404928(param_3,param_1);
      goto LAB_004c33c1;
    }
  }
  puStack_34 = puVar1;
  FUN_00404928(param_3,local_8);
LAB_004c33c1:
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004c33de;
  puStack_38 = (undefined1 *)0x4c33d6;
  FUN_004048d4(&local_c,uStack_3c,puVar1);
  return;
}

