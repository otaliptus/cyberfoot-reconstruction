// Address: 00487054
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487054(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  LPCSTR lpString;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004870d6;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar2 = *(char *)(param_1 + 0xa4) == '\0';
  if ((bool)uVar2) {
    FUN_00404928(param_1 + 0x8c,param_2);
  }
  else {
    puStack_14 = &stack0xfffffffc;
    FUN_00487008(param_1,&local_8);
    FUN_00404cf0(local_8,param_2);
    if ((!(bool)uVar2) || (*(int *)(param_1 + 0x8c) != 0)) {
      lpString = (LPCSTR)FUN_00404da4(param_2);
      SetWindowTextA(*(HWND *)(param_1 + 0x30),lpString);
      FUN_004048d4(param_1 + 0x8c);
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004870dd;
  puStack_18 = (undefined1 *)0x4870d5;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

