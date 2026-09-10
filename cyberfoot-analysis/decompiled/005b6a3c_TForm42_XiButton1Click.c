// Address: 005b6a3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm42_XiButton1Click(undefined4 param_1)

{
  HWND hwnd;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpOperation;
  char *lpFile;
  LPCSTR lpParameters;
  LPCSTR lpDirectory;
  INT nShowCmd;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005b6a9f;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  puStack_24 = &LAB_005b6a87;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  nShowCmd = 1;
  lpDirectory = (LPCSTR)0x0;
  lpParameters = (LPCSTR)0x0;
  lpFile = "http://www.cyberfoot.net";
  lpOperation = "open";
  hwnd = (HWND)FUN_0046cae0(param_1);
  ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,nShowCmd);
  *in_FS_OFFSET = uStack_28;
  *in_FS_OFFSET = local_1c;
  return;
}

