// Address: 004f8e00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f8e00(int *param_1,int param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_004f8fa0;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (param_3 != '\0') {
    param_2 = FUN_004f8bac(param_1,param_2,1);
    param_2 = param_2 + local_8;
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  param_2 = param_2 + 1;
  FUN_004f6100(param_1[0x166],local_8,param_2);
  if (((*(byte *)((int)param_1 + 0x491) & 0x80) != 0) &&
     (iVar3 = FUN_0050ae9c(param_1[0x135]), -1 < iVar3 + -1)) {
    uVar4 = iVar3 == 0;
    local_c = 0;
    local_10 = iVar3;
    do {
      iVar3 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],local_c);
      uVar5 = *(undefined4 *)(iVar3 + 0x40);
      FUN_004051d4(&local_14,*(undefined4 *)PTR_DAT_0066b4f4);
      FUN_00405378(uVar5,local_14);
      if (!(bool)uVar4) {
        iVar3 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],local_c);
        (**(code **)(*param_1 + 0x194))(param_1,local_c,param_2,*(undefined4 *)(iVar3 + 0x40));
      }
      local_c = local_c + 1;
      local_10 = local_10 + -1;
      uVar4 = local_10 == 0;
    } while (!(bool)uVar4);
  }
  if (param_2 <= param_1[0x136]) {
    param_1[0x136] = param_1[0x136] + 1;
  }
  iVar3 = FUN_004f7890(param_1,param_2);
  if (*(char *)(iVar3 + 0x21) != '\0') {
    FUN_004f86b4(param_1,param_2,param_1[0x127],1);
  }
  iVar3 = FUN_0050dd94(param_1);
  param_1[0x13b] = iVar3;
  cVar2 = FUN_00514fb0(param_1);
  if (((cVar2 == '\0') && (iVar3 = FUN_004f7890(param_1,local_8), *(char *)(iVar3 + 0x21) != '\0'))
     && (iVar3 = FUN_004f7890(param_1,local_8), *(int *)(iVar3 + 4) == 1)) {
    FUN_005118f0(param_1,local_8,0);
  }
  param_1[0x167] = param_2;
  iVar3 = FUN_004f7890(param_1,param_2);
  if (*(char *)(iVar3 + 0x21) == '\0') {
    if (param_2 <= param_1[0x13c]) {
      param_1[0x13c] = param_1[0x13c] + 1;
    }
  }
  else if (param_1[0x13c] < param_2) {
    param_1[0x13c] = param_2;
  }
  (**(code **)(*param_1 + 0x1bc))();
  FUN_00403c80(param_1,1,param_1[0x167]);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004f8fa7;
  puStack_28 = (undefined1 *)0x4f8f9f;
  FUN_00404ff0(&local_14,uStack_2c,puVar1);
  return;
}

