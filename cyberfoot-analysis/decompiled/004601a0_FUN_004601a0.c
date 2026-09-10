// Address: 004601a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004601a0(int param_1,undefined4 param_2)

{
  char cVar1;
  LPCSTR lpszHelp;
  HWND hWndMain;
  undefined4 *in_FS_OFFSET;
  UINT uCommand;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_108 [256];
  int local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_114 = 0;
  local_8 = 0;
  puStack_124 = &LAB_00460296;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_10c = 0xb;
  local_110 = param_2;
  FUN_0040ae24(local_108,0xff,"JumpID(\"\",\"%s\")",0,&local_110);
  FUN_0045fcec(param_1,0,&local_8);
  uVar3 = 0x460206;
  cVar1 = FUN_00460630(param_1);
  if (cVar1 != '\0') {
    uVar3 = 0;
    FUN_00404b54(&local_114,local_108,0x100);
    cVar1 = FUN_00460588(param_1,1,local_114);
    if ((cVar1 != '\0') && (local_8 != 0)) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      FUN_00404b54(param_1 + 0x14,local_108,0x100);
      puVar2 = local_108;
      uCommand = 0x102;
      lpszHelp = (LPCSTR)FUN_00404da4(local_8);
      hWndMain = (HWND)(**(code **)(**(int **)(param_1 + 0x1c) + 0xc))();
      WinHelpA(hWndMain,lpszHelp,uCommand,(ULONG_PTR)puVar2);
    }
  }
  puVar2 = puStack_124;
  *in_FS_OFFSET = uVar3;
  puStack_124 = &LAB_0046029d;
  uStack_128 = 0x46028d;
  FUN_004048d4(&local_114,uVar3,puVar2);
  uStack_128 = 0x460295;
  FUN_004048d4(&local_8);
  return;
}

