// Address: 004ac620
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ac620(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 local_5;
  
  local_10 = 0;
  local_c = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_38 = (undefined1 *)0x4ac63d;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_3c = &LAB_004ac6c7;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  FUN_0040496c(&local_c,param_3);
  if (local_c == 0) {
    FUN_0040db5c(param_5,&local_c);
    if (local_c == 0) {
      uVar2 = 0;
      FUN_00406d44(PTR_PTR_0066ae10,&local_10);
      local_18 = param_5;
      local_14 = 0;
      FUN_0040ae78(&local_c,local_10,&local_18,uVar2);
    }
  }
  FUN_0040e4fc(param_1,0,local_c,param_4);
  puVar1 = puStack_38;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_004ac6ce;
  puStack_3c = (undefined1 *)0x4ac6c6;
  FUN_004048f8(&local_10,2,puVar1);
  return;
}

