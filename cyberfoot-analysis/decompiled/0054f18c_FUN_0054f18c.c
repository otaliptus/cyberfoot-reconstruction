// Address: 0054f18c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054f18c(int param_1,int param_2)

{
  undefined1 *puVar1;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  int local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_0054f22f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (param_2 != *(int *)(param_1 + 0x16c)) {
    puVar1 = &stack0xfffffffc;
    if ((param_2 < *(int *)(param_1 + 0x168)) &&
       (puVar1 = &stack0xfffffffc, (*(byte *)(param_1 + 0x1c) & 1) == 0)) {
      local_14 = *(int *)(param_1 + 0x168) + 1;
      local_10 = 0;
      local_c = 0x7fffffff;
      local_8 = 0;
      FUN_00406d44(PTR_PTR_0066b0ec,&local_18,0,1,&local_14);
      FUN_0040e3ac(PTR_DAT_0041b6dc,1,local_18);
      FUN_00404250();
      param_2 = extraout_EDX;
      puVar1 = puStack_20;
    }
    puStack_20 = puVar1;
    *(int *)(param_1 + 0x16c) = param_2;
    if (param_2 < *(int *)(param_1 + 0x170)) {
      *(int *)(param_1 + 0x170) = param_2;
    }
    FUN_00466754(param_1);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0054f236;
  puStack_24 = (undefined1 *)0x54f22e;
  FUN_004048d4(&local_18,uStack_28,puVar1);
  return;
}

