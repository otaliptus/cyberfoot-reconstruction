// Address: 0054c6a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0054c6a4(int param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0045df84(param_1,0);
  iVar1 = GetSystemMetrics(2);
  *(int *)(param_1 + 0x2a4) = iVar1 + 2;
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x2a0) = *(undefined1 *)(param_1 + 0x5a);
  *(undefined1 *)(param_1 + 0x299) = 0;
  *(undefined1 *)(param_1 + 0x2a9) = 0;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

