// Address: 0053c144
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053c144(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  
  puStack_58 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  puStack_5c = &LAB_0053c26e;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_8 = param_3;
  (**(code **)(*param_1 + 0x44))(param_1,&local_38);
  FUN_0040496c(&local_1c,param_1[0x93]);
  FUN_004048d4(&local_20);
  local_34 = local_34 + 4;
  iVar3 = local_38 + 0x11;
  if ((char)param_1[0x86] == '\x03') {
    iVar3 = local_38 + 0x16;
  }
  local_38 = iVar3;
  FUN_004048d4(param_4);
  iVar3 = param_1[0x94];
  uVar2 = 0;
  cVar1 = FUN_0053b598(param_1[0x82],local_1c,&local_38,0,0,iVar3,param_1[0x91],local_48,local_18,
                       local_14,local_10,local_c,&local_28,&local_24,&local_20,param_1[0x96],
                       0x1fffffff,0x1fffffff,param_1[0x90],0,0x3ff00000,
                       CONCAT31((int3)((uint)param_1[0x95] >> 8),
                                *(undefined1 *)((int)param_1 + 0x24a)) ^ 1,0,0,0,0,0,1,param_1[0x95]
                       ,0xffffffff,0xffffffff,local_8,param_2,param_1[0x87]);
  if (cVar1 != '\0') {
    FUN_00404928(param_4,local_20);
  }
  *in_FS_OFFSET = uVar2;
  FUN_004048f8(&local_28,4,iVar3,&LAB_0053c275);
  return;
}

