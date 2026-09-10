// Address: 0041a184
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041a184(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  undefined1 local_10;
  int local_c;
  char *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  puStack_28 = &LAB_0041a24b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar2 = &stack0xfffffffc;
  if (param_2 != 0) {
    for (local_8 = (char *)FUN_00404da4(param_2); (*local_8 == ' ' || (*local_8 == '['));
        local_8 = local_8 + 1) {
    }
    iVar3 = FUN_00419c28(*(undefined4 *)*param_1);
    uVar1 = **(undefined4 **)(iVar3 + 1);
    FUN_0041a140(&local_8,&local_c);
    while (puVar2 = puStack_24, local_c != 0) {
      iVar3 = FUN_00419d58(uVar1,local_c);
      if (iVar3 < 0) {
        local_14 = local_c;
        local_10 = 0xb;
        FUN_0040e468(PTR_DAT_004194f8,1,PTR_PTR_0066af74,0,&local_14);
        FUN_00404250();
      }
      FUN_0041a140(&local_8,&local_c);
    }
  }
  puStack_24 = puVar2;
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0041a252;
  puStack_28 = (undefined1 *)0x41a24a;
  FUN_004048d4(&local_c,uStack_2c,puVar2);
  return;
}

