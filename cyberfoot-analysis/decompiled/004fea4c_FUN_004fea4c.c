// Address: 004fea4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fea4c(int param_1,int *param_2,undefined4 *param_3,char param_4,byte param_5,
                 byte param_6)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  uint uVar5;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_4c = &stack0xfffffffc;
  local_8 = 0;
  local_1c = *param_3;
  uStack_18 = param_3[1];
  uStack_14 = param_3[2];
  uStack_10 = param_3[3];
  puStack_50 = &LAB_004fec1a;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  if ((param_6 & param_5) == 0) {
    local_c = 0;
  }
  else {
    local_c = 0xffffffff;
  }
  FUN_004e5390(PTR_DAT_004e5104,&local_1c,2,local_2c,0xffffffff,0xffffffff,0);
  iVar1 = *(int *)(param_1 + 8);
  (**(code **)(**(int **)(iVar1 + 0xc) + 8))(*(int **)(iVar1 + 0xc),param_2[0x16]);
  if ((param_5 == 0) || ((char)param_2[0x1a] != '\0')) {
    FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),0xff000011);
    FUN_0042a66c(*(undefined4 *)(iVar1 + 0xc),DAT_004fec2c);
    FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),param_2[0xd]);
  }
  else {
    FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),0xff00000e);
    FUN_0042a66c(*(undefined4 *)(iVar1 + 0xc),DAT_004fec2c);
    if (param_4 == '\0') {
      FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000f);
    }
    else {
      FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000d);
    }
    cVar2 = FUN_0050a338(param_2);
    if (cVar2 != '\0') {
      FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),param_2[0xd]);
      FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),0xff000011);
    }
  }
  if ((char)param_2[0x1a] == '\0') {
    FUN_004e5390(PTR_DAT_004e5104,&local_1c,0,local_3c,local_c,local_c,0);
    FUN_0042af8c(iVar1,local_3c);
  }
  else {
    FUN_004e5390(PTR_DAT_004e5104,&local_1c,0,local_3c,local_c,local_c,0);
    FUN_0042afc8(iVar1,local_3c);
  }
  if ((param_6 & param_5) != 0) {
    FUN_004fdc4c(param_1,&local_1c,0xff00000d);
  }
  bVar4 = true;
  FUN_00405378(param_2[0x1c]);
  if (bVar4) {
    uVar5 = 2;
    uVar3 = CONCAT31((int3)((uint)param_2[0x1b] >> 8),*(undefined1 *)(param_1 + 4));
    FUN_004e5798(PTR_DAT_004e5160,*(undefined4 *)(param_1 + 8),local_2c,uVar3,param_2[0x1b]);
  }
  else {
    (**(code **)(*param_2 + 0x58))(param_2,&local_8);
    uVar5 = (uint)*(byte *)(param_2 + 0xc);
    uVar3 = CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)(param_1 + 4));
    FUN_004e5798(PTR_DAT_004e5160,*(undefined4 *)(param_1 + 8),local_2c,uVar3,local_8);
  }
  *in_FS_OFFSET = uVar3;
  FUN_00404ff0(&local_8,uVar3,uVar5,&LAB_004fec21);
  return;
}

