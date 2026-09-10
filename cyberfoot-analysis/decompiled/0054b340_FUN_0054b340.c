// Address: 0054b340
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054b340(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined2 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = (undefined1 *)0x54b35b;
  local_c = param_2;
  local_8 = param_1;
  FUN_00405608(&local_8);
  puStack_2c = &LAB_0054b3f0;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  iVar3 = FUN_00405260(local_8);
  if (0 < iVar3) {
    iVar5 = 1;
    do {
      sVar1 = *(short *)(local_8 + -2 + iVar5 * 2);
      uVar4 = (undefined2)((uint)unaff_EBX >> 0x10);
      unaff_EBX = CONCAT22(uVar4,sVar1);
      FUN_00404abc(&local_14,(((int)sVar1 & 0xff00U) >> 8) + 1);
      FUN_00404bac(&local_10,local_14);
      FUN_00404abc(&local_18,CONCAT22(uVar4,sVar1) & 0xffff00ff);
      FUN_00404bac(&local_10,local_18);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00404928(local_c,local_10);
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0054b3f7;
  puStack_2c = (undefined1 *)0x54b3e7;
  FUN_004048f8(&local_18,3,puVar2);
  puStack_2c = (undefined1 *)0x54b3ef;
  FUN_00404ff0(&local_8);
  return;
}

