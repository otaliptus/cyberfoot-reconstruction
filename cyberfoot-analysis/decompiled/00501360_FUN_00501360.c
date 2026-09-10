// Address: 00501360
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00501360(int *param_1,char param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_1c [16];
  undefined4 local_c;
  char local_5;
  
  puStack_2c = (undefined1 *)0x50137c;
  local_c = param_3;
  local_5 = param_2;
  FUN_00405608(&local_c);
  puStack_30 = &LAB_005013fd;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  if (local_5 != '\0') {
    puStack_2c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x10))(param_1,local_1c);
    (**(code **)(*param_1 + 0x14))(param_1,local_c,local_1c);
  }
  if ((local_5 != '\x02') && (param_4 != 0)) {
    uVar3 = param_1[0xc] - param_1[10];
    iVar4 = (int)uVar3 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
    }
    iVar2 = (int)*(uint *)(param_4 + 0x30) >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((*(uint *)(param_4 + 0x30) & 1) != 0);
    }
    FUN_00474474(param_4,param_1[8],param_1[9] + 2,1,param_5,(iVar4 + param_1[10]) - iVar2);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00501404;
  puStack_30 = (undefined1 *)0x5013fc;
  FUN_00404ff0(&local_c,uStack_34,puVar1);
  return;
}

