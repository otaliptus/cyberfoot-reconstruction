// Address: 004dd1b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dd1b0(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  char local_11;
  int local_10;
  HMENU local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_004dd2f5;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_2;
  if (*param_2 == 0x11f) {
    local_11 = (*(byte *)((int)param_2 + 6) & 0x10) != 0;
    iVar3 = *(int *)(param_1 + 8);
    if (-1 < iVar3 + -1) {
      iVar5 = 0;
      puStack_2c = &stack0xfffffffc;
      iVar4 = local_10;
      do {
        local_10 = iVar4;
        if (local_11 == '\x01') {
          if (local_8[2] == 0) {
            local_c = (HMENU)0xffffffff;
          }
          else {
            local_c = GetSubMenu((HMENU)local_8[2],(uint)*(ushort *)(local_8 + 1));
          }
        }
        else {
          local_c = (HMENU)(uint)*(ushort *)(local_8 + 1);
        }
        uVar2 = FUN_0041e01c(param_1,iVar5);
        local_10 = FUN_00479fa0(uVar2,local_c,local_11);
        if (local_10 != 0) {
          FUN_004dbcd4(local_10,&local_1c);
          FUN_004ddb30(local_1c,&local_18);
          FUN_004dab70(*(undefined4 *)PTR_DAT_0066b0a0,local_18);
          goto LAB_004dd2da;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
        iVar4 = 0;
      } while (iVar3 != 0);
    }
    FUN_004dab70(*(undefined4 *)PTR_DAT_0066b0a0,0);
  }
  else {
    puStack_2c = &stack0xfffffffc;
    if (*param_2 == 0x211) {
      *(undefined4 *)PTR_DAT_0066b360 = *(undefined4 *)(param_1 + 0x14);
      iVar3 = *(int *)(param_1 + 8);
      puStack_2c = &stack0xfffffffc;
      if (-1 < iVar3 + -1) {
        iVar4 = 0;
        puStack_2c = &stack0xfffffffc;
        do {
          FUN_0041e01c(param_1,iVar4);
          FUN_004dbfb0();
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_0047ad58(param_1,local_8);
LAB_004dd2da:
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004dd2fc;
  puStack_30 = (undefined1 *)0x4dd2f4;
  FUN_00405008(&local_1c,2,puVar1);
  return;
}

