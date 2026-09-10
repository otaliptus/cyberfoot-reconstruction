// Address: 004d42ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d42ac(LPWSTR param_1)

{
  undefined1 *puVar1;
  char cVar2;
  short sVar3;
  WCHAR WVar4;
  LPSTR lpsz;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004d4363;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*PTR_DAT_0066adfc == '\0') {
    sVar3 = FUN_00408020(param_1);
    if (sVar3 == 0) {
      cVar2 = FUN_004d3a08(param_1);
      if (cVar2 != '\0') {
        FUN_00404acc(&local_8,param_1);
        lpsz = (LPSTR)FUN_00404da4(local_8);
        CharUpperA(lpsz);
        FUN_004051d4(&local_c,local_8);
        FUN_00405260(local_c);
      }
    }
    else {
      for (; *param_1 != L'\0'; param_1 = param_1 + 1) {
        WVar4 = FUN_004d42ac(*param_1);
        *param_1 = WVar4;
      }
    }
  }
  else {
    puStack_1c = &stack0xfffffffc;
    CharUpperW(param_1);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004d436a;
  puStack_20 = (undefined1 *)0x4d435a;
  FUN_00404ff0(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x4d4362;
  FUN_004048d4(&local_8);
  return;
}

