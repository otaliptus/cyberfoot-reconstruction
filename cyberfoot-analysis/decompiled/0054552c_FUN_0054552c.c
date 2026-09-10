// Address: 0054552c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054552c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined1 local_1c [16];
  int local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  puStack_30 = &stack0xfffffffc;
  local_20 = 0;
  local_c = 0;
  local_6 = (undefined1)param_3;
  local_5 = (undefined1)param_2;
  puStack_34 = &LAB_00545604;
  puStack_38 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_38;
  FUN_004677e0(param_1,param_2,param_3,param_4,param_5);
  piVar3 = &local_c;
  FUN_00545144(param_1,param_5,param_4,piVar3,local_1c);
  if (local_c != 0) {
    iVar2 = FUN_00404ee8(&DAT_0054561c,local_c);
    if (iVar2 < 1) {
      iVar2 = FUN_00404ee8("mailto:",local_c);
      if (iVar2 < 1) {
        if (*(short *)(param_1 + 0x1a2) != 0) {
          FUN_004051d4(&local_20,local_c);
          (**(code **)(param_1 + 0x1a0))(*(undefined4 *)(param_1 + 0x1a4),param_1,local_20);
        }
        goto LAB_005455e6;
      }
    }
    nShowCmd = 1;
    lpDirectory = (LPCSTR)0x0;
    lpParameters = (LPCSTR)0x0;
    lpFile = (LPCSTR)FUN_00404da4(local_c);
    ShellExecuteA((HWND)0x0,"open",lpFile,lpParameters,lpDirectory,nShowCmd);
  }
LAB_005455e6:
  puVar1 = puStack_38;
  *in_FS_OFFSET = (int)piVar3;
  puStack_38 = &LAB_0054560b;
  FUN_00404ff0(&local_20,piVar3,puVar1);
  FUN_004048d4(&local_c);
  return;
}

