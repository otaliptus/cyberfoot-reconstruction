// Address: 004bbb44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bbb44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  LPCSTR lpFile;
  int *in_FS_OFFSET;
  LPCSTR lpParameters;
  LPCSTR lpDirectory;
  INT nShowCmd;
  int *piVar3;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_1c [16];
  int local_c;
  undefined1 local_5;
  
  puStack_2c = &stack0xfffffffc;
  local_c = 0;
  local_5 = (undefined1)param_3;
  puStack_30 = &LAB_004bbbf9;
  puStack_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_34;
  FUN_004677e0(param_1,param_2,param_3,param_4,param_5);
  piVar3 = &local_c;
  FUN_004bb6ac(param_1,param_5,param_4,piVar3,local_1c);
  if ((local_c != 0) && ((char)param_2 == '\0')) {
    (**(code **)(*param_1 + 0x9c))(param_1,local_c);
    iVar2 = FUN_00404ee8(&DAT_004bbc14,local_c);
    if (iVar2 < 1) {
      iVar2 = FUN_00404ee8("mailto:",local_c);
      if (iVar2 < 1) goto LAB_004bbbe3;
    }
    nShowCmd = 1;
    lpDirectory = (LPCSTR)0x0;
    lpParameters = (LPCSTR)0x0;
    lpFile = (LPCSTR)FUN_00404da4(local_c);
    ShellExecuteA((HWND)0x0,"open",lpFile,lpParameters,lpDirectory,nShowCmd);
  }
LAB_004bbbe3:
  puVar1 = puStack_34;
  *in_FS_OFFSET = (int)piVar3;
  puStack_34 = &LAB_004bbc00;
  FUN_004048d4(&local_c,piVar3,puVar1);
  return;
}

