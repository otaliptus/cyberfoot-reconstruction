// Address: 00516b44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00516b44(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 local_10c;
  undefined1 local_105 [256];
  byte local_5;
  
  puStack_11c = &stack0xfffffffc;
  local_10c = 0;
  puStack_120 = &LAB_00516bfc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  (**(code **)(*param_2 + 0x44))();
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&local_5,1);
  puVar1 = puStack_11c;
  while ((iVar2 == 1 && (local_5 != 0))) {
    puStack_11c = puVar1;
    FUN_005169f8(param_1,local_105,local_5);
    local_105[local_5] = 0;
    FUN_00404b54(&local_10c,local_105,0x100);
    (**(code **)(*param_2 + 0x38))(param_2,local_10c);
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&local_5,1);
    puVar1 = puStack_11c;
  }
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_00516c03;
  puStack_120 = (undefined1 *)0x516bfb;
  FUN_004048d4(&local_10c,uStack_124,puVar1);
  return;
}

