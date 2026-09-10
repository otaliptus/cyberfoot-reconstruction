// Address: 0045ffa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045ffa0(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  UINT uCommand;
  HWND hWndMain;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpszHelp;
  undefined4 *puVar3;
  ULONG_PTR dwData;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  int local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_20 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_30 = &LAB_00460098;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puVar1 = &stack0xfffffffc;
  if (param_2 == 0) {
    FUN_0040e42c(PTR_DAT_004339c4,1,&LAB_0045fb40);
    FUN_00404250();
    puVar1 = puStack_2c;
  }
  puStack_2c = puVar1;
  puVar3 = &local_8;
  local_18 = 0xb;
  local_1c = param_2;
  FUN_0045fcec(param_1,0,&local_20,puVar3);
  local_14 = local_20;
  local_10 = 0xb;
  FUN_0040ae64("IE(AL(\"%s\",4),\"AL(\\\"%0:s\\\",3)\",\"JK(\\\"%1:s\\\",\\\"%0:s\\\")\")",&local_1c
               ,1,puVar3);
  cVar2 = FUN_00460630(param_1);
  if (cVar2 != '\0') {
    FUN_0045fcec(param_1,0,&local_c);
    dwData = 0;
    cVar2 = FUN_00460588(param_1,1,local_8);
    if ((cVar2 != '\0') && (local_c != 0)) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      FUN_00404928(param_1 + 0x14,local_8);
      uCommand = FUN_00404da4(local_8);
      lpszHelp = (LPCSTR)0x102;
      FUN_00404da4(local_c);
      hWndMain = (HWND)(**(code **)(**(int **)(param_1 + 0x1c) + 0xc))();
      WinHelpA(hWndMain,lpszHelp,uCommand,dwData);
    }
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0046009f;
  puStack_30 = (undefined1 *)0x46008a;
  FUN_004048d4(&local_20,uStack_34,puVar1);
  puStack_30 = (undefined1 *)0x460097;
  FUN_004048f8(&local_c,2);
  return;
}

